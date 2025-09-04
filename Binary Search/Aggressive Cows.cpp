class Solution {
  public:
  
    int n;
  
    bool isFeasible(vector<int>&stalls, int mid, int k){
        int cnt = 1;
        
        int pos = stalls[0];
        
        for(int i = 0; i < n; i++){
            if(stalls[i]-pos >= mid){
                pos = stalls[i];
                cnt++;
            }
        }
        
        return cnt >= k;
    }
  
    int aggressiveCows(vector<int> &stalls, int k) {
        
        n = stalls.size();
        
        sort(stalls.begin(), stalls.end());
        
        int mn = stalls[0];
        int mx = stalls[n-1];
        
        int low = 0, high = mx - mn;
        
        
        int ans;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(isFeasible(stalls, mid, k)){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
            
        }
        return ans;
    }
    
};