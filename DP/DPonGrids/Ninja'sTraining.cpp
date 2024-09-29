    
    // Geek is going for a training program. He can perform any of these activities: Running, Fighting, and Learning Practice. 
    // Each activity has some point on each day. As Geek wants to improve all his skills, he can't do the same activity on two 
    // consecutive days. Help Geek to maximize his merit points as you are given a 2D array of points arr, corresponding to each day and activity
    
    
    // // 1.Recursive
    // int RecMaxPoints(vector<vector<int>>& arr, int n, int last){
    //     if(n == 0){
    //         int mx = 0;
    //         for(int task = 0; task < 3; task++){
    //             if(task != last){
    //                 mx = max(mx,arr[0][task]);
    //             }
    //         }
    //         return mx;
    //     }
    //     int mx = 0;
    //     for(int task = 0; task < 3; task++){
    //         if(task != last){
    //             int points = arr[n][task] + RecMaxPoints(arr, n-1, task);
    //             mx = max(mx,points);
    //         }
    //     }
    //     return mx;
    // }

    // // 2.Memoisation
    // int MemoMaxPoints(vector<vector<int>>& arr, int n, int last, vector<vector<int>>& dp){
    //     if(n == 0){
    //         int mx = 0;
    //         for(int task = 0; task < 3; task++){
    //             if(task != last){
    //                 mx = max(mx,arr[0][task]);
    //             }
    //         }
    //         return mx;
    //     }
    //     if(dp[n][last] != -1) return dp[n][last];
    //     int mx = 0;
    //     for(int task = 0; task < 3; task++){
    //         if(task != last){
    //             int points = arr[n][task] + MemoMaxPoints(arr, n-1, task, dp);
    //             mx = max(mx,points);
    //         }
    //     }
    //     return dp[n][last] = mx;
    // }

    // // 3.Tabulation
    // int TabMaxPoints(vector<vector<int>>& arr, int n) {
    //     vector<vector<int>> dp(n, vector<int>(4, 0));
        
    //     dp[0][0] = max(arr[0][1], arr[0][2]);
    //     dp[0][1] = max(arr[0][0], arr[0][2]);
    //     dp[0][2] = max(arr[0][0], arr[0][1]);
    //     dp[0][3] = max({arr[0][0], arr[0][1], arr[0][2]});
        
    //     for (int i = 1; i < n; i++) {
    //         for (int last = 0; last < 4; last++) {
    //             dp[i][last] = 0;
    //             for (int task = 0; task < 3; task++) {
    //                 if (task != last) {
    //                     int point = arr[i][task] + dp[i - 1][task];
    //                     dp[i][last] = max(dp[i][last], point);
    //                 }
    //             }
    //         }
    //     }
        
    //     return dp[n - 1][3];
    // }

    // // 3.1  space Optimisation
    // int TabMaxPoints1(vector<vector<int>>& arr, int n) {
    //     vector<int>prev(4, 0),curr(4,0);
        
    //     prev[0] = max(arr[0][1], arr[0][2]);
    //     prev[1] = max(arr[0][0], arr[0][2]);
    //     prev[2] = max(arr[0][0], arr[0][1]);
    //     prev[3] = max({arr[0][0], arr[0][1], arr[0][2]});
        
    //     for (int i = 1; i < n; i++) {
    //         for (int last = 0; last < 4; last++) {
    //             curr[last] = 0;
    //             for (int task = 0; task < 3; task++) {
    //                 if (task != last) {
    //                     int point = arr[i][task] + prev[task];
    //                     curr[last] = max(curr[last], point);
    //                 }
    //             }
    //         }
    //         prev = curr;
    //     }
        
    //     return prev[3];
    // }

  
    // int maximumPoints(vector<vector<int>>& arr, int n) {
    //     // 1.   3 => no task is performed on previous day
    //     // return RecMaxPoints(arr, n-1, 3);
    //     // 2.
    //     // vector<vector<int>>dp(n,vector<int>(4,-1));
    //     // return MemoMaxPoints(arr, n-1, 3, dp);
    //     // 3.
    //     return TabMaxPoints(arr, n);
    //     return TabMaxPoints1(arr, n);
    // }