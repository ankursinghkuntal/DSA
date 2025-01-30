// You are given an array of integer arr[] where each number represents a vote to a candidate. Return the candidates that have votes greater 
// than one-third of the total votes, If there's not a majority vote, return an empty array. 

// Note: The answer should be returned in an increasing format.


// class Solution {
//   public:
//     // Function to find the majority elements in the array
//     vector<int> findMajority(vector<int>& arr) {
//         int n = arr.size();
//         int d = n/3;
//         map<int,int>mp;
//         for(int i = 0; i < n; i++){
//             mp[arr[i]]++;
//         }
//         vector<int>ans;
//         for(auto it : mp){
//             if(it.second > d){
//                 ans.push_back(it.first);
//             }
//         }
//         return ans;
//     }
// };