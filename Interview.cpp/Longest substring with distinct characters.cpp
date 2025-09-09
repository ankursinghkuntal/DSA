class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        int n = s.size();
        
        unordered_map<char, int>mp;
        
        int left = 0;
        int right;
        
        int mxLen = 0;
        
        for(right = 0; right < n; right++){
            
            if(mp.find(s[right]) != mp.end()  && mp[s[right]] >= left){
                
                left = mp[s[right]]+1;
                
            }
            mp[s[right]] = right;
            mxLen = max(mxLen, right - left + 1);
        }
        
        return max(mxLen, right-left);
        
    }
};
