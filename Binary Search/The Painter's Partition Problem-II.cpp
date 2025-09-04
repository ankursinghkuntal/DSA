class Solution {
  public:
    
    int n;
    
    bool isFeasible(vector<int>&arr, int k, int mid){
        
        int cnt = 1;
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            if(sum+arr[i] > mid){
                cnt++;
                sum = arr[i];
            }else{
                sum += arr[i];
            }
        }
        
        return cnt <= k;
    }
  
    int minTime(vector<int>& arr, int k) {
        // code here
        
        n = arr.size();
        
        int sum = 0, mx = 0;
        
        for(int i = 0; i < n; i++){
            sum += arr[i];
            mx = max(mx, arr[i]);
        }
        
        int low = mx, high = sum;
        
        int ans = 0;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(isFeasible(arr, k, mid)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};