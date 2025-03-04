#include <bits/stdc++.h>
using namespace std;

// __builtin_popcount(A);    // BuiltIn function




// Optimise Approach
int Count_No_Of_Set_Bits1(int n) {
    int cnt = 0;
    while (n > 0) {  
        if (n & 1) cnt++;  // Check if the last bit is 1
        n = n >> 1;        // Right shift n to process the next bit
    }
    return cnt;
}




int Count_No_Of_Set_Bits2(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++;  
        n = (n & (n - 1));  // Removes the lowest set bit
    }
    return cnt;
}



int main(){
    int n = 13;
    cout <<  Count_No_Of_Set_Bits1(n) << endl;
}