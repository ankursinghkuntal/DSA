class Solution {
  public:
    
    void permute(string &s, int idx, int n, set<string>&st){
        if(idx >= n){
            st.insert(s);
            return;
        }
        
        for(int i = idx; i < n; i++){
            swap(s[i], s[idx]);
            permute(s, idx+1, n, st);
            swap(s[i], s[idx]);  // backtrack
        }
        
    }
    
    vector<string> findPermutation(string &s) {
        // Code here there
        set<string>ans;
        int n = s.size();
        
        permute(s, 0, n, ans);
        
        vector<string>ans1;
        ans1.insert(ans1.end(),ans.begin(), ans.end());
        
        return ans1;
    }
};
