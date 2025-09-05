class Solution {
  public:
  
    void leftMax(vector<int>& arr, int n, vector<int> &left){
        stack<int>st;
        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(!st.empty()){
                left[i] = st.top();
            }
            st.push(i);
        }
    }
    
    void rightMax(vector<int>& arr, int n, vector<int> &right){
        
        stack<int>st;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(!st.empty()){
                right[i] = st.top();
            }
            st.push(i);
        }
        
    }
    
    int getMaxArea(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        
        vector<int>left(n, -1), right(n, n);
        
        leftMax(arr, n, left);
        rightMax(arr, n, right);
        
        int mxArea = INT_MIN;
        
        for(int i = 0; i < n; i++){
            int area = (right[i]-left[i]-1)*arr[i];
            mxArea = max(area, mxArea);
        }
        
        return mxArea;
    }
};
