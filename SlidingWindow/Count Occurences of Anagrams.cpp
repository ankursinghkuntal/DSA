// Given a word pat and a text txt. Return the count of the occurrences of anagrams of the word in the text.



// 1. Brute Force

// int search(string &pat, string &txt) {
//     int k = pat.size();
//     int n = txt.size();
    
//     int cnt = 0;
    
//     sort(pat.begin(), pat.end());
    
//     for(int i = 0; i <= n-k; i++){
//         string s1 = txt.substr(i, k);
//         sort(s1.begin(), s1.end());
//         if(s1 == pat) cnt++;
//     }
    
//     return cnt;
// }



// 2. Sliding Window

// class Solution {
//     public:
    
//       bool isAnagram(vector<int>&freq){
//           for(int i = 0; i < 26; i++){
//               if(freq[i] != 0) return false; 
//           }
//           return true;
//       }
    
//       int search(string &pat, string &txt) {
//           int k = pat.size();
//           int n = txt.size();
          
//           int cnt = 0;
          
//           vector<int>freq(26,0);
          
//           for(char it : pat){
//               freq[it-'a']++;
//           }
          
//           for(int i = 0; i < k-1; i++){
//               char temp = txt[i];
//               freq[temp-'a']--;
//           }
          
//           for(int i = k-1; i < n; i++){
              
//               char temp = txt[i];
//               freq[temp-'a']--;
              
//               if(isAnagram(freq)) cnt++;
              
//               char toDel = txt[i+1 - k];
//               freq[toDel-'a']++;
              
//           }
          
//           return cnt;
//       }
//   };