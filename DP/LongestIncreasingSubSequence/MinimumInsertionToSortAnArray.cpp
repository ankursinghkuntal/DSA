// Given an array arr of size N, the task is to sort this array in a minimum number of steps where in one step you can 
// remove any array element from its position and insert it in any other position.


// int minInsertions(int arr[], int N) 
//     {
//         int lis[N];
//         for (int i = 0; i < N; i++) {
//             lis[i] = 1;
//         }
    
//         for (int i = 1; i < N; i++) {
//             for (int j = 0; j < i; j++) {
//                 if (arr[j] <= arr[i]) {
//                     lis[i] = max(lis[i], 1 + lis[j]);
//                 }
//             }
//         }

//         int lisLength = 0;
//         for (int i = 0; i < N; i++) {
//             lisLength = max(lisLength, lis[i]);
//         }

//         return N - lisLength;
//     }