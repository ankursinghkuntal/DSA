// TC = O(n) && SC = O(n)

// class Solution {
//   public:
//     // Function to find common elements in three arrays.
//     vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,vector<int> &arr3) {
//         unordered_map<int,int>mp;
//         vector<int>ans;
//         for(int i = 0; i < arr1.size(); i++) mp[arr1[i]] = 1;
//         for(int i = 0; i < arr2.size(); i++){
//             if(mp[arr2[i]] == 1) mp[arr2[i]] = 2;
//         }
//         for(int i = 0; i < arr3.size(); i++){
//             if(mp[arr3[i]] == 2){
//                 ans.push_back(arr3[i]);
//                 mp[arr3[i]] = 0;
//             }
//         }
//         return ans;
//     }
// };



// TC = O(n) && SC = O(1)

// class Solution {
// public:
//     // Function to find common elements in three arrays.
//     vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
//         vector<int> ans;
//         int i = 0, j = 0, k = 0;

//         // Use three-pointer approach to find common elements
//         while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
//             if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
//                 // Avoid duplicates in the result
//                 if (ans.empty() || ans.back() != arr1[i]) {
//                     ans.push_back(arr1[i]);
//                 }
//                 i++;
//                 j++;
//                 k++;
//             } 
//             else if (arr1[i] < arr2[j]) {
//                 i++;
//             } 
//             else if (arr2[j] < arr3[k]) {
//                 j++;
//             } 
//             else {
//                 k++;
//             }
//         }

//         return ans;
//     }
// };

