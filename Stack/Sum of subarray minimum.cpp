class Solution {
  public:
 
    
    void leftMin(vector<int>&arr, int n, vector<int>&left){
        stack<int>st;
        
        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] > arr[i]) st.pop();
            
            left[i] = st.empty() ? (i+1) : (i-st.top());
            st.push(i);
        }
    }
    
    void rightMin(vector<int>&arr, int n, vector<int>&right){
        stack<int>st;
        
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            
            right[i] = st.empty() ? (n-i) : (st.top()-i);
            st.push(i);            
        }
    }
  
    int sumSubMins(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        vector<int>left(n,0), right(n,0);
        
        leftMin(arr, n, left);
        rightMin(arr, n, right);
        
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            sum += (left[i]*arr[i]*right[i]);
        }
        
        return sum;
    }
};