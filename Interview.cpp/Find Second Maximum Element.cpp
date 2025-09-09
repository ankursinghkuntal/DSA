class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int mx1 = arr[0], mx2 = -1;
        
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > mx1){
                mx2 = mx1;
                mx1 = arr[i];
            }else if(arr[i] > mx2 && arr[i] < mx1){
                mx2 = arr[i];
            }
        }
        
        return mx2;
        
    }
};