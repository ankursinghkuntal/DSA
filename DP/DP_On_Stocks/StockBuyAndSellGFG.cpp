
// The cost of stock on each day is given in an array A[] of size N. Find all the segments of days on which you buy and sell the stock such 
// that the sum of difference between sell and buy prices is maximized. Each segment consists of indexes of two elements, first is index of 
// day on which you buy stock and second is index of day on which you sell stock.
// Note: Since there can be multiple solutions, the driver code will print 1 if your answer is correct, otherwise, it will return 0. 
// In case there's no profit the driver code will print the string "No Profit" for a correct solution.


// ===========================================================Greedy Approach===================================================================//

// vector<vector<int>> stockBuySell(vector<int> A, int n) {
//     vector<vector<int>> ans;
//     vector<int> v;
//     int mn = 0;
    
//     for(int i = 1; i < n; i++) {
//         if(A[i] < A[mn]) {
//             mn = i;
//         }
        
//         if(A[i] > A[mn]) {
//             v.push_back(mn);
//             v.push_back(i);
//             ans.push_back(v);
//             v.clear();
//             mn = i;
//         }
//     }
    
//     return ans;
// }
