        
// In daily share trading, a buyer buys shares in the morning and sells them on the same day. 
// If the trader is allowed to make at most 2 transactions in a day, the second transaction can 
// only start after the first one is complete (buy->sell->buy->sell). The stock prices throughout 
// the day are represented in the form of an array of prices. 

// Given an array price of size n, find out the maximum profit that a share trader could have made.
        
        
        // // 1.Recursion
        // int RecMaxProfit(vector<int>&prices, int idx, int buy, int cap, int n){
        //     if(cap == 0) return 0;
        //     if(idx == n) return 0;
        //     int profit = 0;
        //     if(buy == 1){
        //         profit = max(-prices[idx]+RecMaxProfit(prices,idx+1,0,cap,n),
        //                                                     RecMaxProfit(prices,idx+1,1,cap,n));
        //     }else{
        //         profit = max(prices[idx]+RecMaxProfit(prices,idx+1,1,cap-1,n),
        //                                                     RecMaxProfit(prices,idx+1,0,cap,n));
        //     }
        //     return profit;
        // }
        // // 2.Memoisation
        // int MemoMaxProfit(vector<int>&prices, int idx, int buy, int cap, int n, vector<vector<vector<int>>>&dp){
        //     if(cap == 0) return 0;
        //     if(idx == n) return 0;
        //     if(dp[idx][buy][cap] != -1) return dp[idx][buy][cap];
        //     int profit = 0;
        //     if(buy == 1){
        //         profit = max(-prices[idx]+MemoMaxProfit(prices,idx+1,0,cap,n,dp),
        //                                                     MemoMaxProfit(prices,idx+1,1,cap,n,dp));
        //     }else{
        //         profit = max(prices[idx]+MemoMaxProfit(prices,idx+1,1,cap-1,n,dp),
        //                                                     MemoMaxProfit(prices,idx+1,0,cap,n,dp));
        //     }
        //     return dp[idx][buy][cap] = profit;
        // }
        // // 3.Tabulation
        // int TabMaxProfit(vector<int>&prices, int n){
        //     vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        //     // base cases  ==>>  if(cap == 0) return 0;   if(cap == 0) return 0;
        //     for(int idx = n-1; idx >= 0; idx--){
        //         for(int buy = 0; buy < 2; buy++){
        //             for(int cap = 1; cap < 3; cap++){
        //                 int profit = 0;
        //                 if(buy == 1){
        //                     profit = max(-prices[idx]+dp[idx+1][0][cap], dp[idx+1][1][cap]);
        //                 }else{
        //                     profit = max(prices[idx]+dp[idx+1][1][cap-1], dp[idx+1][0][cap]);
        //                 }
        //                 dp[idx][buy][cap] = profit;
        //             }
        //         }
        //     }
        //     return dp[0][1][2];
        // }
        // // 3.1  to minimise space complexity
        // int TabMaxProfit1(vector<int>&prices, int n){
        //     vector<vector<int>>after(2,vector<int>(3,0)), curr(2,vector<int>(3,0));
        //     for(int idx = n-1; idx >= 0; idx--){
        //         for(int buy = 0; buy < 2; buy++){
        //             for(int cap = 1; cap < 3; cap++){
        //                 int profit = 0;
        //                 if(buy == 1){
        //                     profit = max(-prices[idx]+after[0][cap], after[1][cap]);
        //                 }else{
        //                     profit = max(prices[idx]+after[1][cap-1], after[0][cap]);
        //                 }
        //                 curr[buy][cap] = profit;
        //             }
        //         }
        //         after = curr;
        //     }
        //     return after[1][2];
        // }
        
        
        
        // int maxProfit(vector<int>&price){
        //     int n = price.size();
        //     // 1.
        //     // return RecMaxProfit(price,0,1,2,n);
        //     // return RecMaxProfit(price,0,1,2,n);
        //     // 2.
        //     // vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        //     // return MemoMaxProfit(price,0,1,2,n,dp);
        //     // 3.
        //     // return TabMaxProfit(price,n);
        //     return TabMaxProfit1(price,n);
        // }  