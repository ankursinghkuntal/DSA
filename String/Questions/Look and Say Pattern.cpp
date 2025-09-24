class Solution {
  public:
    string countAndSay(int n) {
        // code here
        
        string str = "1";
        
        if(n == 1) return str;
        
        int cnt = 1;
        
        while(cnt < n){
            
            int temp = 1;
            char ch = str[0];
            string s1 = "";
            
            for(int i = 1; i < str.size(); i++){
                if(str[i] == ch){
                    temp++;
                }else{
                    
                    s1 += to_string(temp);

                    s1.push_back(ch);
                    
                    ch = str[i];
                    temp = 1;
                    
                }
            }
            
            s1 += to_string(temp);
            s1.push_back(ch);
            
            cnt++;
            str = s1;
        }
        
        return str;
        
    }
};