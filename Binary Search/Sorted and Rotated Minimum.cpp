class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int n = arr.size();
        
        if(n == 1) return arr[0];
        
        if(arr[0] < arr[n-1]) return arr[0];
        
        int low = 0, high = arr.size()-1;
        
        int ans;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(arr[0] <= arr[mid]){ 
                ans = mid + 1;
                low = mid + 1;
            }
            else high = mid - 1;
            
        }
        
        return arr[ans];
    }
};