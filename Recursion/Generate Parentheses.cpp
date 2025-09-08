// User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution {
  public:
    
    void generate(int n, int idx, int cnt, vector<string>&ans, string temp){
        if(idx > n){
            ans.push_back(temp);
            return;
        }
        
        if(cnt == n-idx+1){
            generate(n, idx+1, cnt-1, ans, temp+")");
        }
        else if(cnt == 0) generate(n, idx+1, cnt+1, ans, temp+"(");
        else{
            generate(n, idx+1, cnt+1, ans, temp+"(");
            generate(n, idx+1, cnt-1, ans, temp+")");
        }
        
    }
  
    vector<string> generateParentheses(int n) {
        // code here
        
        vector<string>ans;
        
        generate(n, 1, 0, ans, "");
        
        return ans;
    }
};