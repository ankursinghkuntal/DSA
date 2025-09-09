class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        map<char, int>mp1;
        map<char, int>mp2;
        
        for(int i = 0; i < s1.size(); i++){
            
            if(mp1.find(s1[i]) == mp1.end()) mp1[s1[i]] = i;
            if(mp2.find(s2[i]) == mp2.end()) mp2[s2[i]] = i;
            
            if(mp1[s1[i]]  !=  mp2[s2[i]]) return false;
        }
        
        return true;
    }
};