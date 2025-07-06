// Given a string s, find the length of the longest substring without duplicate characters.



// class Solution {
//     public:
//         int lengthOfLongestSubstring(string s) {
//             int n = s.size();
//             unordered_map<char, int> mp;
//             int ans = 0, start = 0;
            
//             for (int i = 0; i < n; i++) {
//                 if (mp.find(s[i]) != mp.end() && mp[s[i]] >= start) {
//                     start = mp[s[i]] + 1;
//                 }
//                 mp[s[i]] = i;
//                 ans = max(ans, i - start + 1);
//             }
            
//             return ans;
//         }
//     };
    