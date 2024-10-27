
// Given an array arr[ ] of size N consisting of distinct integers, write a program that returns 1 if given array can represent preorder 
// traversal of a possible BST, else returns 0.


// class Solution {
// public:
//     int canRepresentBST(int arr[], int N) {
//         stack<int> st;
//         int lowerBound = INT_MIN;

//         for (int i = 0; i < N; i++) {
//             if (arr[i] < lowerBound) 
//                 return 0;

//             while (!st.empty() && arr[i] > st.top()) {
//                 lowerBound = st.top();
//                 st.pop();
//             }

//             st.push(arr[i]);
//         }

//         return 1;
//     }
// };