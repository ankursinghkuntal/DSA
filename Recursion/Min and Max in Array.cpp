// User function Template for C++
class Solution {
  public:
  
    void findMax(vector<int>& arr, int idx, int &mx){
        if(idx == arr.size()) return;
        mx = max(mx, arr[idx]);
        findMax(arr, idx+1, mx);
    }
    
    void findMin(vector<int>& arr, int idx, int &mn){
        if(idx == arr.size()) return;
        mn = min(mn, arr[idx]);
        findMin(arr, idx+1, mn);
    }
  
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        
        int mx = INT_MIN;
        int mn = INT_MAX;
        
        findMax(arr, 0, mx);
        findMin(arr, 0, mn);
        
        return {mn, mx};
        
    }
};