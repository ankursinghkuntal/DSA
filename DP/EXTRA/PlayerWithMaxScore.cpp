// Given an array arr of non-negative integers of size N, 2 players are playing a game. In each move, 
// a player chooses an element from either end of the array, and the size of the array shrinks by one. 
// Both players take alternate chances and the game continues until the size of the array becomes 0. 
// Every time a player chooses an array element the array value is added to the player's score. At the end player with maximum score wins.
// If player 1 starts the game, you have to predict whether player 1 will win the game or not. Both players will play optimally.

// Return true if player 1 can win otherwise return false

//    int maxScore(int arr[], int i, int j, int dp[][1000]) {
//         if (i > j) return 0;

//         if (dp[i][j] != -1) return dp[i][j];

//         int takeLeft = arr[i] + min(maxScore(arr, i+2, j, dp), maxScore(arr, i+1, j-1, dp));
//         int takeRight = arr[j] + min(maxScore(arr, i+1, j-1, dp), maxScore(arr, i, j-2, dp));

//         return dp[i][j] = max(takeLeft, takeRight);
//     }

//     bool is1winner(int N,int arr[]) {
//         int dp[1000][1000];
//         memset(dp, -1, sizeof(dp));
    
//         int totalSum = 0;
//         for (int i = 0; i < N; i++) {
//             totalSum += arr[i];
//         }

//         int player1Score = maxScore(arr, 0, N-1, dp);

//         return player1Score >= totalSum - player1Score;
//     }