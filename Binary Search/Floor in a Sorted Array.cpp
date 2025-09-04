class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int low = 0, high = arr.size()-1;
        
        if(arr[0] > x) return -1; 
        
        int ans = 0;
        
        while( low <= high){
            int mid = low + (high - low)/2;
            
            if(arr[mid] <= x){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        
        return ans;
    }
};
