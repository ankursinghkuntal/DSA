// Given a string s, your task is to find the smallest window length that contains all the characters 
// of the given string at least one time.


// class Solution {
//     public:
//       int findSubString(string& s) {
//           int n = s.size();
          
//           unordered_map<char,int>mp;
          
//           for(int i = 0; i < n; i++){
//               mp[s[i]]++;
//           }
          
//           int cnt = mp.size();
//           mp.clear();
          
//           int left = 0, right = 0;
          
//           int ans = INT_MAX;
          
//           while(left < n){
              
//               if(right == n && mp.size() < cnt) break;
              
//               if(mp.size() == cnt){
//                   ans = min(ans,(right-left));
//                   mp[s[left]]--;
//                   if(mp[s[left]] == 0) mp.erase(s[left]);
//                   left++;
//               }
              
//               else{
//                   if(right == n) continue;
//                   mp[s[right]]++;
//                   right++;
//               }
//           }
          
//           return ans;
//       }
//   };