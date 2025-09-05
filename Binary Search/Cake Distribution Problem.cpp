// User function Template for C++

class Solution {
  public:
    int n; 
    
    bool isFeasible(vector<int>& sweetness, int mid, int K){
        int cnt = 0;
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            if(sum+sweetness[i] >= mid){
                sum = 0;
                cnt++;
            }else{
                sum += sweetness[i];
            }
        }
        
        return cnt >= K;
    }
    
    int maxSweetness(vector<int>& sweetness, int N, int K) {
        // Write your code here.
        int low = INT_MAX, high = 0;
        
        n = sweetness.size();
        
        for(int i = 0; i < n; i++){
            low = min(low, sweetness[i]);
            high += sweetness[i];
        }
        
        int ans = 0;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(isFeasible(sweetness, mid, K+1)){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        
        return ans;
    }
};
