class Solution {
public:
    vector<int> nextSmallerElements(const vector<int>& arr) {
        // Your code goes here
        stack<int>st;
        vector<int>res;

        int n = arr.size();

        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top() > arr[i]){
                st.pop();
            }
            
            if(st.empty()) res.push_back(-1);
            else if(st.top() < arr[i]){ 
                res.push_back(st.top());
            }
            
            st.push(arr[i]);
        }

        reverse(res.begin(), res.end());

        return res;

    }
};
