class Solution {
  public:
    bool areKAnagrams(string &s1, string &s2, int k) {
        // code here
        
        vector<int>freq(26, 0);
        
        int n = s1.size();
        int m = s2.size();
        
        if(n != m) return false;
        
        for(int i = 0; i < n; i++){
            freq[s1[i]-'a']++;
            freq[s2[i]-'a']--;
        }
        
        int val = 0;
        
        for(int i = 0; i < 26; i++){
            if(freq[i] > 0) val += freq[i];
            
            if(val > k) return false;
        }
        
        return true;
    }
};