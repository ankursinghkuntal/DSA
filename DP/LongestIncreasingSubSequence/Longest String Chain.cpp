class Solution {
  public:
  
   static bool myCmp(string &s1, string &s2){
      if(s1.size() == s2.size()) return s1 < s2;
       return s1.size() < s2.size();
   }
    
    int LIS_String(vector<string>& real){
        
        int n = real.size();
        
        unordered_map<string, int>mp;
        
        int res = 1;
        
        for(string word : real){
            mp[word] = 1;
            for(int i = 0; i < word.size(); i++){
                string pred = word.substr(0, i) + word.substr(i+1);
                if(mp.find(pred) != mp.end()){
                    mp[word] = max(mp[pred]+1, mp[word]);
                }
            }
            
            res = max(res, mp[word]);
        }
        
        return res;
    }
  
    int longestStringChain(vector<string>& words) {
        // Code here
        
        sort(words.begin(), words.end(), myCmp);
        
        return LIS_String(words);
        
    }
};