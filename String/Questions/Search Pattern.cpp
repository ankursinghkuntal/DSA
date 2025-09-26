class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        
        vector<int>ans;
        
        string str = pat+"$"+txt;
        int n = str.size();
        
        vector<int>z(n, 0);
        
        int left = 0, right = 0;
        
        for(int i = 1; i < n; i++){
            if(i < right){
                z[i] = min(right-i+1, z[i-left]);
            }
            
            while(z[i]+i < n  && str[z[i]+i] == str[z[i]]){
                z[i]++;
            }
            
            if(i+z[i]-1 > right){
                right = z[i]+i-1;
                left = i;
            }
            
        }
        
        for(int i = 0; i < n; i++){
            if(z[i] == pat.size()){
                ans.push_back(i-(pat.size()+1));
            }
            // cout << z[i] << " ";
        }
        
        return ans;
    }
};