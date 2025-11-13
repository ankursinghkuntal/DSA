class Solution {
  public:
  
    int cnt(string &s, int k){
        
        vector<int>freq(26, 0);
        
        int left = 0;
        
        int dist = 0;
        
        int ans = 0;
        
        for(int right = 0; right < s.size(); right++){
            
            freq[s[right]-'a']++;
            if(freq[s[right]-'a'] == 1) dist++;
            
            while(dist > k){
                freq[s[left]-'a']--;
                if(freq[s[left]-'a'] == 0) dist--;
                left++;
            }
            
            ans += right-left+1;
            
        }
        
        return ans;        
    }
  
    int countSubstr(string& s, int k) {
        // code here
        
        int ans1 = cnt(s, k);
        int ans2 = cnt(s, k-1);
        
        return ans1-ans2;
        
    }
};
