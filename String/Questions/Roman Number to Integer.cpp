class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        unordered_map<char, int>mp;
        
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int num = mp[s[s.size()-1]];
        
        for(int i = s.size()-2; i >= 0; i--){
            if(mp[s[i]] >= mp[s[i+1]]) num += mp[s[i]];
            else num -= mp[s[i]];
        }
        
        return num;
    }
};