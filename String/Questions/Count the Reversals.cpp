class Solution {
  public:
    int countMinReversals(string s) {
        
        // code here
        
        if(s.size()%2 == 1) return -1;
        
        int ans = 0;
        int open = 0;

        for(int i = 0; i < s.size(); i++){
            if(open == 0 && s[i] == '}') ans++;
            else{
                if(s[i] == '{') open++;
                else open--;
            }
        }

        return ans/2 + ans%2 + open/2 + open%2;        
    }
};