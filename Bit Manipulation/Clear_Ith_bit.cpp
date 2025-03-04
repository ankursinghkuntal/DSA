#include <bits/stdc++.h>
using namespace std;

// Brute Force
//   =>  Convert the number to binary and then make the Kth bit clear and converrt it again to Decimal

// Optimise Approach
int clear_Ith_Bit(int n, int k) {
    return (n & ~(1 << k));
}


int main(){
    int n = 13;
    int k = 2;
    cout <<  clear_Ith_Bit(n,k) << endl;
}