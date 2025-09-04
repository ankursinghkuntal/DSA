class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        
        // 1.
        
        // int cnt = 0;
        // for(int i = 0; i < arr.size()-1; i++){
        //     if(arr[i] >= arr[arr.size()-1]) cnt++;
        //     else break;
        // }
        
        // if(arr[0] == arr[arr.size()-1]  && cnt == arr.size()-1) return 0;
        // return cnt;
        
        
        
        // 2.
        
        int cnt = 0;
        int low = 0, high = arr.size()-1;
        
        if(arr[0] < arr[high]) return 0;
        
        while(low <= high){
            
            int mid = low + (high - low)/2;
            
            if(arr[0] <= arr[mid]){
                cnt = mid + 1;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        
        if(arr[0] == arr[arr.size()-1]  && cnt >= arr.size()-1) return 0;
        return cnt;
        
    }
};
