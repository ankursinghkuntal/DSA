
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code
        
        priority_queue<int, vector<int>, greater<int>>pq;
        
        int i = 0;
        
        for(i = 0; i < k; i++){
            pq.push(arr[i]);
        }
        
        for(i = k; i < arr.size(); i++){
            pq.push(arr[i]);
            arr[i-k] = pq.top();
            pq.pop();
        }
        
        while(!pq.empty()){
            arr[i-k] = pq.top();
            pq.pop();
            i++;
        }
        
    }
};