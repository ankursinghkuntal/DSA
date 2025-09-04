class Solution {
  public:
    int single(vector<int>& arr) {
        // code here
        int low = 0, high = arr.size();
        
        while(low <= high){
            
            int mid = low + (high - low)/2;
            
            if(mid%2 == 1) mid -= 1;
            
            if(arr[mid] == arr[mid+1]) low = mid + 2; // element in right array
            else high = mid - 1;  // element in the left array
        }
        
        return arr[low];
    }
};