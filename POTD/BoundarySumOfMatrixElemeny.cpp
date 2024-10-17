    // vector<int> boundarySum(int n, vector<vector<int>> &matrix) {
    //     vector<int> SUM((n + 1) / 2, 0);  // Result vector to store the boundary sums
        
    //     for (int i = 0; i < (n + 1) / 2; i++) {
    //         // 1. TOP (left to right)
    //         for (int j = i; j < n - i; j++) {
    //             SUM[i] += matrix[i][j];
    //         }

    //         // 2. BOTTOM (left to right)
    //         for (int j = i; j < n - i; j++) {
    //             if (n - 1 - i != i) {  // Avoid double-counting if it's the same row
    //                 SUM[i] += matrix[n - 1 - i][j];
    //             }
    //         }

    //         // 3. LEFT (top to bottom)
    //         for (int j = i + 1; j < n - 1 - i; j++) {
    //             SUM[i] += matrix[j][i];
    //         }

    //         // 4. RIGHT (top to bottom)
    //         for (int j = i + 1; j < n - 1 - i; j++) {
    //             SUM[i] += matrix[j][n - 1 - i];
    //         }
    //     }

    //     return SUM;
    // }