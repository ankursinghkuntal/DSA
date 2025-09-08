// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int sum(vector<int>&arr, int idx, int n){
        if(idx >= n) return 0;
        return arr[idx]+sum(arr, idx+1, n);
    }
    
    int arraySum(vector<int>& arr) {
        // code here
        int n = arr.size();
        return sum(arr, 0, n);
    }
};