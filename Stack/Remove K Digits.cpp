class Solution {
  public:
    string removeKdigits(string &s, int k) {
        // code here
        stack<char>st;
        
        for(int i = 0; i < s.size(); i++){
            
            while(!st.empty() && (st.top() > s[i]) && k > 0){
                k--;
                st.pop();
            }
            
            st.push(s[i]);
            
        }
        
        string ans = "";
        
        while(!st.empty() && k--){
            st.pop();
        }
        
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        while(ans.size() > 1 && ans[0] == '0') ans.erase(ans.begin());
        
        if(ans.size() == 0) return "0";
        
        return ans;
    }
};