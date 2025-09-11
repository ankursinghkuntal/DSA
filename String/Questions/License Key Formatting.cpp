//Back-end complete function Template for C++
class Solution {
  public:
    string ReFormatString(string S, int K) {
        
        string str = "";
        
        int cnt = 0;
        
        for(int i = S.size()-1; i >= 0; i--){
            
            if(S[i] == '-') continue;
            
            if(cnt == K){
                str += "-";
                cnt = 0;
            }
            
            str+=toupper(S[i]);
            cnt++;
            
        }
        
        reverse(str.begin(), str.end());
        
        return str;
        
    }
};