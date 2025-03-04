#include <bits/stdc++.h>
using namespace std;

// Brute Force
//   =>  Convert the number to binary and then make the Kth bit set and converrt it again to Decimal

// Optimise Approach
int set_Ith_Bit(int n, int k){
    return (n|(1<<k));
}


int main(){
    int n = 9;
    int k = 2;
    cout <<  set_Ith_Bit(n,k) << endl;
}