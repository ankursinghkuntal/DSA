// User function Template for Java

class Solution {
  public :

    int findIndex(string& str) {
        // Your code goes here
        
        int n = str.size();
        
        vector<int>pre(n, -1);
        vector<int>suf(n, -2);
        
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(str[i] == '(') cnt++;
            pre[i] = cnt;
        }
        
        int cnt1 = 0;
        for(int i = n-1; i >= 0; i--){
            if(str[i] == ')') cnt1++;
            suf[i] = cnt1;
        }
        
        if(suf[0] == 0) return 0;
        if(pre[n-1] == 0) return n;
        
        int ans = 0;
        
        for(int i = 0; i < n-1; i++){
            if(pre[i] == suf[i+1]) ans = max(ans,i+1);
        }
        
        return ans;
    }
};