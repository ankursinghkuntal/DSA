// The cost of stock on each day is given in an array price[]. Each day you may decide to either buy or sell the stock i at price[i], 
// you can even buy and sell the stock on the same day, Find the maximum profit which you can get.

// Note: Buying and Selling of the stock can be done multiple times, but you can only hold one stock at a time. 
// In order to buy another stock, firstly you have to sell the current holding stock.


// //  0. T.C. = O(n)
//     int maxProfit(vector<int>& prices) {
//         int profit = 0;
//         int n = prices.size();
//         if(n==1) return 0;
//         for(int i = 1;i < n; i++){
//             if(prices[i] > prices[i-1]) profit += (prices[i]-prices[i-1]);
//         }
//         return profit;
//     }

// //  1. Recursive  T.C. = exponential
//     int Rec(vector<int>&prices, int buy, int n, int idx){
//         if(idx == n) return 0;
//         int profit = 0;
//         if(buy == 1){
//             profit = max(-prices[idx]+Rec(prices,0,n,idx+1), Rec(prices,1,n,idx+1));
//         }else{
//             profit = max(prices[idx]+Rec(prices,1,n,idx+1), Rec(prices,0,n,idx+1));
//         }
//         return profit;
//     }

//     // 2.Memoisation
//     int Memo(vector<int>&prices, int buy, int n, int idx, vector<vector<int>>&dp){
//         if(idx == n) return 0;
//         if(dp[idx][buy] != -1) return dp[idx][buy];
//         int profit = 0;
//         if(buy == 1){
//             profit = max(-prices[idx]+Memo(prices,0,n,idx+1,dp), Memo(prices,1,n,idx+1,dp));
//         }else{
//             profit = max(prices[idx]+Memo(prices,1,n,idx+1,dp), Memo(prices,0,n,idx+1,dp));
//         }
//         return dp[idx][buy] = profit;        
//     }

//     // 3.Tabulation
//     int Tab(vector<int>& prices, int n) {
//         vector<vector<int>> dp(n+1, vector<int>(2, 0));
    
//         for (int idx = n-1; idx >= 0; idx--) {
//             for (int buy = 0; buy < 2; buy++) {
//                 int profit = 0;
//                 if (buy == 1) {
//                     profit = max(-prices[idx] + dp[idx+1][0], dp[idx+1][1]);
//                 } else {
//                     profit = max(prices[idx] + dp[idx+1][1], dp[idx+1][0]);
//                 }
//                 dp[idx][buy] = profit;  // Store the profit in dp array
//             }
//         }
//         return dp[0][1];
//     }

//     // 3.1   used to minimise spacecomplexity
//     int Tab1(vector<int>& prices, int n) {
//         vector<int> ahead(2, 0), curr(2, 0);
    
//         for (int idx = n - 1; idx >= 0; idx--) {
//             for (int buy = 0; buy < 2; buy++) {
//                 int profit = 0;
//                 if (buy == 1) {
//                     profit = max(-prices[idx] + ahead[0], ahead[1]);
//                 } else {
//                     profit = max(prices[idx] + ahead[1], ahead[0]);
//                 }
//                 curr[buy] = profit;  // Store the profit for the current state
//             }
//             ahead = curr;  // Move current state to ahead after processing both buy and sell
//         }
//         return ahead[1];
//     }

   
//     int stockBuyAndSell(vector<int> &prices) {
//         int n = prices.size();
//         int buy = 1;
//         int idx = 0;
//         // 0.
//         // return maxProfit(prices);
//         // 1.
//         // return Rec(prices, buy, n, idx);
//         // 2.
//         // vector<vector<int>>dp(n,vector<int>(2,-1));
//         // return Memo(prices, buy, n, idx, dp);
//         // 3.
//         // return Tab(prices,n);
//         // 3.1
//         return Tab1(prices,n);
//     }