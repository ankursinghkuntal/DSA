    
    // You are given an array prices, where prices[i] denotes the price of a stock on the ith day. 
    // Find the maximun profit that you can make by buying a single stock and then selling it in the future. 
    // If it is not possible to make profit then return 0.
    
    // 1.
    // int maxProfit(vector<int> &prices) {  
    //     int n = prices.size();
    //     int res = 0;
    //     // Explore all possible ways to buy and sell stock
    //     for (int i = 0; i < n - 1; i++) {
    //         for (int j = i + 1; j < n; j++) {
    //             res = max(res, prices[j] - prices[i]);
    //         }
    //     }
    //     return res;
    // }



    //  2.
    // int maximumProfit(vector<int> &prices) {
    //     int n = prices.size();
    //     int mn = prices[0];
    //     int MaxProfit = 0;
    //     for(int i = 1; i < n; i++){
    //         MaxProfit = max(MaxProfit, prices[i]-mn);
    //         mn = min(mn, prices[i]);
    //     }
    //     return MaxProfit;
    // }