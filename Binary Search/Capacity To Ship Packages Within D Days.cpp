// User function Template for C++

class Solution {
  public:
  
    
    bool isFeasible(int arr[], int mid, int d, int m){
        int cnt = 1;
        int capacity = 0;
        
        for(int i = 0; i < m; i++){
            if((capacity + arr[i]) > mid){
                cnt++;
                capacity = arr[i];
            }else{
                capacity += arr[i];
            }
        }
        
        return cnt <= d;
    }
  
    int leastWeightCapacity(int arr[], int n, int d) {
        
        int mx = 0, sum = 0;
        
        for(int i = 0; i < n; i++){
            sum += arr[i];
            mx = max(mx, arr[i]);
        }
        
        int low = mx, high = sum;
        
        int ans = 0;
        
        while(low <= high){
            
            int mid = low + (high - low)/2;
            
            if(isFeasible(arr, mid, d, n)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        
        return ans;
        
    }
};