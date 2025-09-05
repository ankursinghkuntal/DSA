class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // code here
        int n = arr.size();
        int mxIdx = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] > arr[mxIdx]){
                mxIdx = i;
            }
        }
        
        vector<int>ans(n, 0);
        
        stack<int>st;
        
        ans[mxIdx] = -1;
        
        for(int i = mxIdx; i >= 0; i--){
            while(!st.empty() && st.top() <= arr[i]) st.pop();
            
            if(st.empty()) ans[i] = -1;
            else{
                ans[i] = st.top();
            }
            
            st.push(arr[i]);
        }
        
        for(int i = n-1; i > mxIdx; i--){
            while(!st.empty() && st.top() <= arr[i]) st.pop();
            
            if(st.empty()) ans[i] = -1;
            else{
                ans[i] = st.top();
            }
            
            st.push(arr[i]);
        }
        
        return ans;
    }
};