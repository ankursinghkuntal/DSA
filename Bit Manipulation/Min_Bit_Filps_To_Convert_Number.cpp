#include <bits/stdc++.h>
using namespace std;

int Min_Bit_Flips_To_Convert_Number(int n, int m) {
    int cnt = 0;
    int x = n ^ m; // XOR to find differing bits
    while (x > 0) {
        cnt += (x & 1); // Count the set bits
        x >>= 1;        // Right shift x
    }
    return cnt;
}


int main(){
    int n = 1;
    int m = 3;
    cout <<  Min_Bit_Flips_To_Convert_Number(n,m) << endl;
}