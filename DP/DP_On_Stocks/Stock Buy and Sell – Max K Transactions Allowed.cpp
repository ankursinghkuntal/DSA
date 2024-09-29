
// In the stock market, a person buys a stock and sells it on some future date. Given the stock prices of N days in an array A[ ] and 
// a positive integer K, find out the maximum profit a person can make in at-most K transactions. A transaction is equivalent 
// to (buying + selling) of a stock and new transaction can start only when the previous transaction has been completed.



//    // 1.Recursion
//         int RecMaxProfit(int prices[], int idx, int buy, int cap, int n){
//             if(cap == 0) return 0;
//             if(idx == n) return 0;
//             int profit = 0;
//             if(buy == 1){
//                 profit = max(-prices[idx]+RecMaxProfit(prices,idx+1,0,cap,n),
//                                                             RecMaxProfit(prices,idx+1,1,cap,n));
//             }else{
//                 profit = max(prices[idx]+RecMaxProfit(prices,idx+1,1,cap-1,n),
//                                                             RecMaxProfit(prices,idx+1,0,cap,n));
//             }
//             return profit;
//         }
//         // 2.Memoisation
//         int MemoMaxProfit(int prices[], int idx, int buy, int cap, int n, vector<vector<vector<int>>>&dp){
//             if(cap == 0) return 0;
//             if(idx == n) return 0;
//             if(dp[idx][buy][cap] != -1) return dp[idx][buy][cap];
//             int profit = 0;
//             if(buy == 1){
//                 profit = max(-prices[idx]+MemoMaxProfit(prices,idx+1,0,cap,n,dp),
//                                                             MemoMaxProfit(prices,idx+1,1,cap,n,dp));
//             }else{
//                 profit = max(prices[idx]+MemoMaxProfit(prices,idx+1,1,cap-1,n,dp),
//                                                             MemoMaxProfit(prices,idx+1,0,cap,n,dp));
//             }
//             return dp[idx][buy][cap] = profit;
//         }
//         // 3.Tabulation
//         int TabMaxProfit(int prices[], int n, int cap){
//             vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(cap+1,0)));
//             // base cases  ==>>  if(cap == 0) return 0;   if(cap == 0) return 0;
//             for(int idx = n-1; idx >= 0; idx--){
//                 for(int buy = 0; buy < 2; buy++){
//                     for(int c = 1; c < cap+1; c++){
//                         int profit = 0;
//                         if(buy == 1){
//                             profit = max(-prices[idx]+dp[idx+1][0][c], dp[idx+1][1][c]);
//                         }else{
//                             profit = max(prices[idx]+dp[idx+1][1][c-1], dp[idx+1][0][c]);
//                         }
//                         dp[idx][buy][c] = profit;
//                     }
//                 }
//             }
//             return dp[0][1][cap];
//         }
//         // 3.1
//         int TabMaxProfit1(int prices[], int n, int cap){
//             vector<vector<int>>after(2,vector<int>(cap+1,0)), curr(2,vector<int>(cap+1,0));
//             for(int idx = n-1; idx >= 0; idx--){
//                 for(int buy = 0; buy < 2; buy++){
//                     for(int c = 1; c < cap+1; c++){
//                         int profit = 0;
//                         if(buy == 1){
//                             profit = max(-prices[idx]+after[0][c], after[1][c]);
//                         }else{
//                             profit = max(prices[idx]+after[1][c-1], after[0][c]);
//                         }
//                         curr[buy][c] = profit;
//                     }
//                 }
//                 after = curr;
//             }
//             return after[1][cap];
//         }
        
        
//         int maxProfit(int K, int N, int A[]) {
//             // 1.
//             // return RecMaxProfit(A,0,1,K,N);
//             // 2.
//             // vector<vector<vector<int>>>dp(N,vector<vector<int>>(2,vector<int>(K+1,-1)));
//             // return MemoMaxProfit(A,0,1,K,N,dp);
//             // 3.
//             // return TabMaxProfit(A,N,K);
//             return TabMaxProfit1(A,N,K);
//         }








// for vectors
    //    // 1.Recursion
    //     int RecMaxProfit(vector<int>&prices, int idx, int buy, int cap, int n){
    //         if(cap == 0) return 0;
    //         if(idx == n) return 0;
    //         int profit = 0;
    //         if(buy == 1){
    //             profit = max(-prices[idx]+RecMaxProfit(prices,idx+1,0,cap,n),
    //                                                         RecMaxProfit(prices,idx+1,1,cap,n));
    //         }else{
    //             profit = max(prices[idx]+RecMaxProfit(prices,idx+1,1,cap-1,n),
    //                                                         RecMaxProfit(prices,idx+1,0,cap,n));
    //         }
    //         return profit;
    //     }
    //     // 2.Memoisation
    //     int MemoMaxProfit(vector<int>&prices, int idx, int buy, int cap, int n, vector<vector<vector<int>>>&dp){
    //         if(cap == 0) return 0;
    //         if(idx == n) return 0;
    //         if(dp[idx][buy][cap] != -1) return dp[idx][buy][cap];
    //         int profit = 0;
    //         if(buy == 1){
    //             profit = max(-prices[idx]+MemoMaxProfit(prices,idx+1,0,cap,n,dp),
    //                                                         MemoMaxProfit(prices,idx+1,1,cap,n,dp));
    //         }else{
    //             profit = max(prices[idx]+MemoMaxProfit(prices,idx+1,1,cap-1,n,dp),
    //                                                         MemoMaxProfit(prices,idx+1,0,cap,n,dp));
    //         }
    //         return dp[idx][buy][cap] = profit;
    //     }
    //     // 3.Tabulation
    //     int TabMaxProfit(vector<int>&prices, int n, int cap){
    //         vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(cap+1,0)));
    //         // base cases  ==>>  if(cap == 0) return 0;   if(cap == 0) return 0;
    //         for(int idx = n-1; idx >= 0; idx--){
    //             for(int buy = 0; buy < 2; buy++){
    //                 for(int c = 1; c < cap+1; c++){
    //                     int profit = 0;
    //                     if(buy == 1){
    //                         profit = max(-prices[idx]+dp[idx+1][0][c], dp[idx+1][1][c]);
    //                     }else{
    //                         profit = max(prices[idx]+dp[idx+1][1][c-1], dp[idx+1][0][c]);
    //                     }
    //                     dp[idx][buy][c] = profit;
    //                 }
    //             }
    //         }
    //         return dp[0][1][cap];
    //     }
    //     // 3.1
    //     int TabMaxProfit1(vector<int>&prices, int n, int cap){
    //         vector<vector<int>>after(2,vector<int>(cap+1,0)), curr(2,vector<int>(cap+1,0));
    //         for(int idx = n-1; idx >= 0; idx--){
    //             for(int buy = 0; buy < 2; buy++){
    //                 for(int c = 1; c < cap+1; c++){
    //                     int profit = 0;
    //                     if(buy == 1){
    //                         profit = max(-prices[idx]+after[0][c], after[1][c]);
    //                     }else{
    //                         profit = max(prices[idx]+after[1][c-1], after[0][c]);
    //                     }
    //                     curr[buy][c] = profit;
    //                 }
    //             }
    //             after = curr;
    //         }
    //         return after[1][cap];
    //     }
        
        
    //     int maxProfit(int k,vector<int>&prices) {
    //         int N = prices.size();
    //         // 1.
    //         // return RecMaxProfit(prices,0,1,k,N);
    //         // 2.
    //         // vector<vector<vector<int>>>dp(N,vector<vector<int>>(2,vector<int>(k+1,-1)));
    //         // return MemoMaxProfit(prices,0,1,k,N,dp);
    //         // 3.
    //         // return TabMaxProfit(prices,N,k);
    //         return TabMaxProfit1(prices,N,k);
    //     }