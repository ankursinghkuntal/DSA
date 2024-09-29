    
    // You are given an array arr[], in which arr[i] is the price of a given stock on the ith day and an integer k represents a 
    // transaction fee. Find the maximum profit you can achieve. You may complete as many transactions as you like, but you need 
    // to pay the transaction fee for each transaction.

    // Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).
    



    // #define ll   long long
    // // 1. Recursive
    // ll RecMaxProfit(vector<int>&prices, int n, int buy, int idx, int tran){
    //     if(idx >= n) return 0;
    //     ll profit = 0;
    //     if(buy == 1){
    //         profit = max(-prices[idx]+RecMaxProfit(prices, n, 0, idx+1, tran),
    //                                                 RecMaxProfit(prices, n, 1, idx+1, tran));
    //     }else{
    //         profit = max(prices[idx] - tran + RecMaxProfit(prices, n, 1, idx+1, tran),
    //                                                 RecMaxProfit(prices, n, 0, idx+1, tran));
    //     }
    //     return profit;
    // }
    
    // // 2.Memoisation
    // ll MemoMaxProfit(vector<int>& prices, int n, int buy, int idx, vector<vector<ll>>& dp, int tran) {
    //     if (idx >= n) return 0;
    //     if (dp[idx][buy] != -1) return dp[idx][buy];
    
    //     ll profit = 0;
    //     if (buy == 1) {
    //         profit = max(-prices[idx] + MemoMaxProfit(prices, n, 0, idx + 1, dp, tran),
    //                      MemoMaxProfit(prices, n, 1, idx + 1, dp, tran));
    //     } else {
    //         profit = max(prices[idx] - tran + MemoMaxProfit(prices, n, 1, idx + 1, dp, tran),
    //                      MemoMaxProfit(prices, n, 0, idx + 1, dp, tran));
    //     }
    //     return dp[idx][buy] = profit;
    // }
    
    // // 3.Tabulation
    // ll TabMaxProfit(vector<int>& prices, int n, int tran) {
    //     vector<vector<ll>> dp(n+2, vector<ll>(2, 0));
    //     for (int idx = n-1; idx >= 0; idx--) {
    //         for (ll buy = 0; buy < 2; buy++) {
    //             ll profit = 0;
    //             if (buy == 1) {
    //                 profit = max(-prices[idx] + dp[idx+1][0], dp[idx+1][1]);
    //             } else {
    //                 profit = max(prices[idx] - tran + dp[idx+1][1], dp[idx+1][0]);
    //             }
    //             dp[idx][buy] = profit;
    //         }
    //     }
    //     return dp[0][1];
    // }

    // // 3.1
    // ll TabMaxProfit1(vector<int>& prices, int n, int tran) {
    //     vector<vector<ll>> dp(n+2, vector<ll>(2, 0));
    //     for (int idx = n-1; idx >= 0; idx--) {
    //         dp[idx][1] = max(-prices[idx] + dp[idx+1][0], dp[idx+1][1]);
    //         dp[idx][0] = max(prices[idx] - tran + dp[idx+1][1], dp[idx+1][0]);
    //     }
    //     return dp[0][1];
    // }  

    // // 3.2
    // ll TabMaxProfit2(vector<int>& prices, int n, int tran) {
    //     vector<ll> ahead(2,0), curr(2,0);
    //     for (int idx = n-1; idx >= 0; idx--) {
    //         curr[1] = max(-prices[idx] + ahead[0], ahead[1]);
    //         curr[0] = max(prices[idx] - tran + ahead[1], ahead[0]);
    //         ahead = curr;
    //     }
    //     return ahead[1];
    // }  
    
    // // 3.3
    // ll TabMaxProfit3(vector<int>& prices, int n, int tran) {
    //     ll notbuyahead = 0, buyahead = 0, notbuycurr = 0, buycurr = 0;
    //     for (int idx = n-1; idx >= 0; idx--) {
    //         buycurr = max(-prices[idx] + notbuyahead, buyahead);
    //         notbuycurr = max(prices[idx] - tran + buyahead, notbuyahead);
    //         buyahead = buycurr;
    //         notbuyahead = notbuycurr;
    //     }
    //     return buyahead;
    // }  

 
    // int maxProfit(vector<int>& prices, int fee) {
    //     int n = prices.size();
    //    // buy == 1  you are allowed to buy        buy == 0  not allowed
    //     // 1.
    //     // return RecMaxProfit(prices, n, 1, 0, fee);
    //     // 2.
    //     // vector<vector<ll>> dp(n, vector<ll>(2, -1));
    //     // return MemoMaxProfit(prices, n, 1, 0, dp, fee);
    //     // 3.Tabulation
    //     // return TabMaxProfit(prices,n,fee);
    //     // 3.1
    //     // return TabMaxProfit1(prices,n,fee);   
    //     // return TabMaxProfit2(prices,n,fee);   
    //     return TabMaxProfit3(prices,n,fee);   
    // }