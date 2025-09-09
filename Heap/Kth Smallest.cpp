// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        
        int n = arr.size();
        
        priority_queue<int, vector<int>, greater<int>>pq;
        
        for(int i = 0; i < n; i++){
            pq.push(arr[i]);
        }
        
        k-=1;
        
        while(k--){
            pq.pop();
        }
        
        return pq.top();
    }
};