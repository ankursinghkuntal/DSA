#include <bits/stdc++.h>
using namespace std;

void squareStar(int n){
    cout << "\n1. Square Star Pattern:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout << "* ";
        cout << "\n";
    }
}

void invertedPyramid(int n){
    cout << "\n2. Inverted Pyramid Star Pattern:\n";
    for(int i = n; i >= 1; i--){
        for(int j = 0; j < n - i; j++) cout << " ";
        for(int j = 0; j < 2*i - 1; j++) cout << "*";
        cout << "\n";
    }
}

void pyramid(int n){
    cout << "\n3. Pyramid Star Pattern:\n";
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n - i; j++) cout << " ";
        for(int j = 0; j < 2*i - 1; j++) cout << "*";
        cout << "\n";
    }
}

void diamond(int n){
    cout << "\n4. Diamond Star Pattern:\n";
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n - i; j++) cout << " ";
        for(int j = 0; j < 2*i - 1; j++) cout << "*";
        cout << "\n";
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 0; j < n - i; j++) cout << " ";
        for(int j = 0; j < 2*i - 1; j++) cout << "*";
        cout << "\n";
    }
}

void hollowSquare(int n){
    cout << "\n5. Hollow Square Star Pattern:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
}

void butterfly(int n){
    cout << "\n6. Butterfly Pattern:\n";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++) cout << "*";
        for(int j = 1; j <= 2*(n-i); j++) cout << " ";
        for(int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++) cout << "*";
        for(int j = 1; j <= 2*(n-i); j++) cout << " ";
        for(int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }
}

void downwardTriangle(int n){
    cout << "\n7. Downward Triangle Star Pattern:\n";
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }
}

void hollowDiamond(int n){
    cout << "\n8. Hollow Diamond Star Pattern:\n";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++) cout << " ";
        cout << "*";
        if(i > 1){
            for(int j = 1; j <= 2*i - 3; j++) cout << " ";
            cout << "*";
        }
        cout << "\n";
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= n-i; j++) cout << " ";
        cout << "*";
        if(i > 1){
            for(int j = 1; j <= 2*i - 3; j++) cout << " ";
            cout << "*";
        }
        cout << "\n";
    }
}

void crossPattern(int n){
    cout << "\n9. Cross Star Pattern:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j || i + j == n - 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}

void heartShape(int n){
    cout << "\n10. Heart Shape Pattern:\n";
    int m = n/2;
    for(int i = m; i <= n; i+=2){
        for(int j = 1; j < n-i; j+=2) cout << " ";
        for(int j = 1; j <= i; j++) cout << "*";
        for(int j = 1; j <= n-i; j++) cout << " ";
        for(int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }
    for(int i = n; i >= 1; i--){
        for(int j = 0; j < n-i; j++) cout << " ";
        for(int j = 1; j <= 2*i-1; j++) cout << "*";
        cout << "\n";
    }
}

void numberPyramid(int n){
    cout << "\n11. Number Pyramid:\n";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++) cout << " ";
        for(int j = 1; j <= i; j++) cout << j << " ";
        cout << "\n";
    }
}

void floydsTriangle(int n){
    cout << "\n12. Floyd's Triangle:\n";
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++) cout << num++ << " ";
        cout << "\n";
    }
}

void zigZag(int n){
    cout << "\n13. Zig-Zag Pattern:\n";
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= n; j++){
            if((i+j) % 4 == 0 || (i == 2 && j % 4 == 0)) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}

void spiralMatrix(int n){
    cout << "\n14. Spiral Matrix:\n";
    vector<vector<int>> a(n, vector<int>(n));
    int val = 1;
    int top = 0, left = 0, bottom = n-1, right = n-1;
    while(top <= bottom && left <= right){
        for(int i = left; i <= right; i++) a[top][i] = val++;
        top++;
        for(int i = top; i <= bottom; i++) a[i][right] = val++;
        right--;
        for(int i = right; i >= left; i--) a[bottom][i] = val++;
        bottom--;
        for(int i = bottom; i >= top; i--) a[i][left] = val++;
        left++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout << a[i][j] << "\t";
        cout << "\n";
    }
}

void hourglass(int n){
    cout << "\n15. Hourglass Pattern:\n";
    for(int i = n; i >= 1; i--){
        for(int j = 0; j < n-i; j++) cout << " ";
        for(int j = 0; j < 2*i - 1; j++) cout << "*";
        cout << "\n";
    }
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < n-i; j++) cout << " ";
        for(int j = 0; j < 2*i - 1; j++) cout << "*";
        cout << "\n";
    }
}

int main(){
    int n; cout << "Enter size: "; cin >> n;
    squareStar(n);
    invertedPyramid(n);
    pyramid(n);
    diamond(n);
    hollowSquare(n);
    butterfly(n);
    downwardTriangle(n);
    hollowDiamond(n);
    crossPattern(n);
    heartShape(n);
    numberPyramid(n);
    floydsTriangle(n);
    zigZag(n);
    spiralMatrix(n);
    hourglass(n);
}



// 1. Square Star Pattern:
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 

// 2. Inverted Pyramid Star Pattern:
// *********
//  *******
//   *****
//    ***
//     *

// 3. Pyramid Star Pattern:
//     *
//    ***
//   *****
//  *******
// *********

// 4. Diamond Star Pattern:
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

// 5. Hollow Square Star Pattern:
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// 6. Butterfly Pattern:
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

// 7. Downward Triangle Star Pattern:
// *****
// ****
// ***
// **
// *

// 8. Hollow Diamond Star Pattern:
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *

// 9. Cross Star Pattern:
// *   *
//  * *
//   *
//  * *
// *   *

// 10. Heart Shape Pattern:
//  **   **
// **** ****
// *********
//  *******
//   *****
//    ***
//     *

// 11. Number Pyramid:
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

// 12. Floyd's Triangle:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// 13. Zig-Zag Pattern:
//   *
//  * *
// *   *

// 14. Spiral Matrix:
// 1       2       3       4       5
// 16      17      18      19      6
// 15      24      25      20      7
// 14      23      22      21      8
// 13      12      11      10      9

// 15. Hourglass Pattern:
// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********