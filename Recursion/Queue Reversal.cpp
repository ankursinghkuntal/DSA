// function Template for C++

class Solution {
  public:
    void reverse(int curr, int idx, int n, queue<int>& q){
        if(idx >= n) return;
        curr = q.front();
        q.pop();
        reverse(curr, idx+1, n, q);
        q.push(curr);
    }
    
    queue<int> reverseQueue(queue<int> &q) {
        // code here.
        int n = q.size();
        
        reverse(-1, 0, n, q);
        
        return q;
    }
};