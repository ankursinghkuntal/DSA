// User function Template for C++
class Solution {
  public:
    string findLongestWord(string S, vector<string> d) {
        // code here
        
        int size = 0;
        string ans = "";
        
        for(int i = 0; i < d.size(); i++){
            
            int j = 0;
            int k = 0;
            
            while( (j < S.size()) && (k < d[i].size()) ){
                
                if(S[j] == d[i][k]){
                    k++;
                }
                
                j++;
                
            }
            
            if (k == d[i].size()) { 
                if (d[i].size() > ans.size() || 
                   (d[i].size() == ans.size() && d[i] < ans)) {
                    ans = d[i];
                }
            }
            
        }
        
        return ans;
        
    }
};