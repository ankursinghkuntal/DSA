class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        // 1.
        
        // int num = arr[0]-1;
        
        // if(num >= k){
        //     return k;
        // }
        
        // for(int i = 0; i < arr.size()-1; i++){
            
        //     int gap = arr[i+1] - arr[i] - 1;
            
        //     if(num + gap >= k){
        //         return arr[i]+k-num;
        //     }
            
        //     num += gap;
            
        // }
        
        // return arr[arr.size()-1] + k - num;
        
        
        
        // 2.
        
        int num = arr[0] - 1;
        if (num >= k) return k;
    
        int low = 0, high = arr.size() - 1;
    
        while (low < high) {
            int mid = low + (high - low) / 2;
    
            if (arr[mid] - (mid + 1) < k)
                low = mid + 1;
            else
                high = mid;
        }
    
        // Case 1: kth missing lies before arr[low]
        if (arr[low] - (low + 1) >= k) {
            return k + low;  // correct adjustment
        }
    
        // Case 2: kth missing lies after the last element
        return k + arr.size();
        
    }
};