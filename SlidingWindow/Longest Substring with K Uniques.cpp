// Given a string s, you need to print the size of the longest possible substring with exactly k unique characters. If no possible 
// substring exists, print -1.



// class Solution {
//     public:
//       int longestKSubstr(string &s, int k) {
//           int n = s.size();
          
//           unordered_map<int,int>mp;
          
//           int maxLen = -1;
          
//           int left = 0, right = 0;
          
//           for(right = 0; right < n; right++){
//               mp[s[right]]++;
              
//               if(mp.size() == k){
//                   maxLen = max(maxLen, right - left + 1);
//               }
              
//               while(mp.size() > k){
//                   mp[s[left]]--;
//                   if(mp[s[left]] == 0) mp.erase(s[left]);
//                   left++;
//               }
//           }
          
//           return maxLen;
//       }
//   };
// // Time Complexity: O(N)
// // Space Complexity: O(N)
  