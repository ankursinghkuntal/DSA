class Solution {
  public:
    int n;
    
    bool isFeasible(vector<int>&arr, int mid, int k){
        int cnt = 1;
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            if(sum+arr[i] > mid){
                sum = arr[i];
                cnt++;
            }else{
                sum += arr[i];
            }
        }
        return cnt <= k;
    }
  
    int splitArray(vector<int>& arr, int k) {
        // code here
        int mx = 0, sum = 0;
        
        n = arr.size();
        
        for(int i = 0; i < n; i++){
            sum += arr[i];
            mx = max(mx, arr[i]);
        }
        
        int low = mx, high = sum;
        
        int ans = 0;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(isFeasible(arr, mid, k)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};