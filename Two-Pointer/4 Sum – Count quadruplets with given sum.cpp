// class Solution {
//     public:
//       int countSum(vector<int>& arr, int target) {
//           // code here
//           int count=0;
//           unordered_map<int,int>mp;
//          for(int i=0;i<arr.size();i++)
//           {
//               for(int j=i+1;j<arr.size();j++)
//                {
//                  int x=target-arr[i]-arr[j];
//                  if(mp.find(x)!=mp.end())
//                   count+=mp[x];
                  
//                }    
//                   for(int j=0;j<i;j++)
//                    {
//                        mp[arr[i]+arr[j]]++;
//                    }
               
               
//           }
//           return count;
          
//       }
      
//   };




// bool check4Sum(const vector<int>& arr, int target) {
//     int n = arr.size();

//     // Store sums of all pairs in a hash map
//     unordered_map<int, pair<int, int>> mp;
//     for (int i = 0; i < n - 1; i++)
//         for (int j = i + 1; j < n; j++)
//             mp[arr[i] + arr[j]] = {i, j};

//     // Traverse through all pairs and search for 
//     // target - (current pair sum)
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             int sum = arr[i] + arr[j];

//             // If target - sum is present in the hash map
//             if (mp.find(target - sum) != mp.end()) {
//                 pair<int, int> p = mp[target - sum];

//                 // Check that all elements are different array elements 
//                 // (Same element should not be cosnidered twice)
//                 if (p.first != i && p.first != j && p.second != i && p.second != j)
//                     return true;
//             }
//         }
//     }
//     return false;
// }
  