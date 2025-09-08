class Solution {
  public:
  
    int sum(vector<int>&arr, int idx, int n){
        if(idx >= n) return 0;
        return arr[idx] + sum(arr, idx+1, n);
    }
    
    int findMean(vector<int>& arr) {
        // code here
        int n = arr.size();
        int totalSum = sum(arr, 0, n);
        
        return totalSum/n;
    }
};