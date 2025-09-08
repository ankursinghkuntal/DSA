class Solution {
  public:
    // Complete this function
    
    void permutation(int idx, int n, string &S, vector<string>& ans){
        if(idx == n){
            ans.push_back(S);
            return;
        }
        
        for(int i = idx; i < n; i++){
            swap(S[i], S[idx]);
            permutation(idx+1, n, S, ans);
            swap(S[i], S[idx]);
        }
        
    }

    vector<string> permutation(string S) {
        // Your code here
        vector<string>ans;
        int n = S.size();
        
        
        permutation(0, n, S, ans);
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};