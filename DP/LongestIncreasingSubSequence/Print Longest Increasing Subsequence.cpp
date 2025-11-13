class Solution {
  public:
  
    vector<int>dp_LIS(vector<int>& arr, vector<int>&back_track){
        int n = arr.size();
        
        vector<int>dp(n, 1);
        
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                if(arr[i] > arr[j]){
                    if(dp[i] < dp[j]+1){
                        back_track[i] = j;
                        dp[i] = dp[j]+1;
                    }
                }
            }
        }
        
        return dp;
    }
    
    vector<int>print_LIS(vector<int>& dp, vector<int>&back_track, vector<int> &arr, int n){
        
        int mx = 0;
        int ans_idx = 0;
        
        for(int i = 0; i < n; i++){
            if(mx < dp[i]){
                mx = dp[i];
                ans_idx = i;
            }
        }
        
        
        vector<int>LIS;
        
        LIS.push_back(arr[ans_idx]);
        
        while(back_track[ans_idx] != ans_idx){
            ans_idx = back_track[ans_idx];
            LIS.push_back(arr[ans_idx]);
        }
        
        reverse(LIS.begin(), LIS.end());
        
        return LIS;
        
    }
  
    vector<int> getLIS(vector<int>& arr) {
        // Code here
        int n = arr.size();
        
        vector<int>back_track(n);
        for(int i = 0; i < n; i++) back_track[i] = i;
        
        vector<int>dp = dp_LIS(arr, back_track);
        
        return print_LIS(dp, back_track, arr, n);
        
    }
};