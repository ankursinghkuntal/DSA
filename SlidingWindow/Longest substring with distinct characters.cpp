// Given a string s, find the length of the longest substring with all distinct characters. 

// class Solution {
//     public:
//       int longestUniqueSubstr(string &s) {
//           map<char,int>mp;
//           int mx = 1;
//           int left = 0;
//           for(int i = 0; i < s.size(); i++){
//               if(mp.find(s[i]) != mp.end() && mp[s[i]] >= left){
//                   left = mp[s[i]]+1;
//               }
//               mx = max(mx,i+1-left);
//               mp[s[i]] = i;
//           }
//           return mx;
//       }
//   };
// // Time Complexity: O(N)  