    
    // You are given the prices of stock for n number of days. every ith day tell the price of the stock on that day. 
    // find the maximum profit that you can make by buying and selling stock with the restriction of  After you sell your stock, 
    // you cannot buy stock on the next day (i.e., cooldown one day).
    

    
    // #define ll      long long

    // // 1. Recursive
    // ll RecMaxProfit(vector<ll>&prices, int n, ll buy, ll idx){
    //     if(idx >= n) return 0;
    //     ll profit = 0;
    //     if(buy == 1){
    //         profit = max(-prices[idx]+RecMaxProfit(prices, n, 0, idx+1),
    //                                                 RecMaxProfit(prices, n, 1, idx+1));
    //     }else{
    //         profit = max(prices[idx]+RecMaxProfit(prices, n, 1, idx+2),
    //                                                 RecMaxProfit(prices, n, 0, idx+1));
    //     }
    //     return profit;
    // }
    
    // // 2.Memoisation
    // ll MemoMaxProfit(vector<ll>& prices, ll n, ll buy, ll idx, vector<vector<ll>>& dp) {
    //     if (idx >= n) return 0;
    //     if (dp[idx][buy] != -1) return dp[idx][buy];
    
    //     ll profit = 0;
    //     if (buy == 1) {
    //         profit = max(-prices[idx] + MemoMaxProfit(prices, n, 0, idx + 1, dp),
    //                      MemoMaxProfit(prices, n, 1, idx + 1, dp));
    //     } else {
    //         profit = max(prices[idx] + MemoMaxProfit(prices, n, 1, idx + 2, dp),
    //                      MemoMaxProfit(prices, n, 0, idx + 1, dp));
    //     }
    //     return dp[idx][buy] = profit;
    // }
    
    // // 3.Tabulation
    // ll TabMaxProfit(vector<ll>& prices, int n) {
    //     vector<vector<ll>> dp(n+2, vector<ll>(2, 0));
    //     for (int idx = n-1; idx >= 0; idx--) {
    //         for (ll buy = 0; buy < 2; buy++) {
    //             ll profit = 0;
    //             if (buy == 1) {
    //                 profit = max(-prices[idx] + dp[idx+1][0], dp[idx+1][1]);
    //             } else {
    //                 profit = max(prices[idx] + dp[idx+2][1], dp[idx+1][0]);
    //             }
    //             dp[idx][buy] = profit;
    //         }
    //     }
    //     return dp[0][1];
    // }

    // // 3.1
    // ll TabMaxProfit1(vector<ll>& prices, int n) {
    //     vector<vector<ll>> dp(n+2, vector<ll>(2, 0));
    //     for (int idx = n-1; idx >= 0; idx--) {
    //         dp[idx][1] = max(-prices[idx] + dp[idx+1][0], dp[idx+1][1]);
    //         dp[idx][0] = max(prices[idx] + dp[idx+2][1], dp[idx+1][0]);
    //     }
    //     return dp[0][1];
    // }    


    // long long maximumProfit(vector<long long>&prices, int n) {
    //     // buy == 1  you are allowed to buy        buy == 0  not allowed
    //     // 1.
    //     // return RecMaxProfit(prices, n, 1, 0);
    //     // 2.
    //     // vector<vector<ll>> dp(n, vector<ll>(2, -1));
    //     // return MemoMaxProfit(prices, n, 1, 0, dp);
    //     // 3.Tabulation
    //     // return TabMaxProfit(prices,n);
    //     // 3.1
    //     return TabMaxProfit1(prices,n);
    // }