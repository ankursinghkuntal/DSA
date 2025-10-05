class Solution {
  public:
  
    int Z_Algo(string &txt, string &pat){
        
        string str = pat + "$" + txt;
        
        int n = str.size();
        
        vector<int>Z(n, 0);
        
        int right = 0, left = 0;
        
        for(int i = 1; i < n; i++){
            
            if(i <= right){
                Z[i] = min(right-i+1, Z[i-left]);
            }
            
            while(Z[i]+i < n  &&  str[Z[i]+i] == str[Z[i]]){
                Z[i]++;
            }
            
            if( i+Z[i]-1 > right ){
                right = i+Z[i]-1;
                left = i;
            }
            
        }
        
        for(int i = pat.size(); i < n; i++){
            if(i+Z[i] == n) return txt.size() - Z[i];
        }
        
    }
  
    int minChar(string &s){
        
        string str = s;
        
        reverse(str.begin(), str.end());
        
        return Z_Algo(str, s);
        
    }
};
