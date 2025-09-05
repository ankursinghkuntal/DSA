class Solution {
  public:
    bool search(vector<int>& arr, int key) {
        // Code here
        int low = 0, high = arr.size()-1;
        
        while(low <= high){
            
            int mid = low + (high-low)/2;
            
            if(arr[mid] == key) return true;
            
            // Handle duplicates                 code for searching in a sorted rotated array containing duplicates

            if(arr[low] == arr[mid]  && arr[mid] == arr[high]){
                low++;
                high--;
            }
            
            else if(arr[low] <= arr[mid]){
                if(arr[low] <= key  && arr[mid] > key) high = mid - 1;
                else low = mid + 1;
            }
            
            else{
                if(arr[mid] < key  && arr[high] >= key) low = mid + 1;
                else high = mid - 1;
            }
            
        }
        
        return false;
    }
};