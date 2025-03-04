#include <bits/stdc++.h>
using namespace std;

// Brute Force
//   =>  Convert the number to binary and then make the Kth bit toggle and converrt it again to Decimal

// Optimise Approach
int Toggle_Ith_Bit(int n, int k) {
    return (n ^ (1 << k));
}


int main(){
    int n = 13;
    int k = 1;
    cout <<  Toggle_Ith_Bit(n,k) << endl;
}