class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int ans = 0;
        int open = 0;

        for(int i = 0; i < s.size(); i++){
            if(open == 0 && s[i] == ')') ans++;
            else{
                if(s[i] == '(') open++;
                else open--;
            }
        }

        return ans+open;

    }
};