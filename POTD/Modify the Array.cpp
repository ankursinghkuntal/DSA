// class Solution {
//   public:
//     vector<int> modifyAndRearrangeArray(vector<int> &arr) {
//         for(int i = 0; i < arr.size() - 1; i++) {
//             if(arr[i] > 0 && arr[i + 1] > 0 && arr[i] == arr[i + 1]) {
//                 arr[i] *= 2;
//                 arr[i + 1] = 0;
//             }
//         }
//         int n = arr.size();
//         int i;
//         vector<int>brr;
//         for(i = 0; i < n; i++) {
//             if(arr[i] != 0) brr.push_back(arr[i]);
//         }
//         i = brr.size();
//         while(i < n){
//             brr.push_back(0);
//             i++;
//         }
//         return brr;
//     }
// };