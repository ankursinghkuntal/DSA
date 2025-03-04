#include <bits/stdc++.h>
using namespace std;

// Brute Force
//   =>  Convert the number to binary and then clear the last set bit and converrt it again to Decimal

// RIGHT MOST

// Optimise Approach
int Remove_Last_Set_Bit(int n) {

    // 1.
    // for(int i = 0; i < 32; i++){
    //     int num = (1<<i);
    //     if((n&num) != 0){
    //         return (n^(1<<i));
    //     }
    // }
    // return 0;


    // 2.
    return n&(n-1);
}


int main(){
    int n = 3;
    cout <<  Remove_Last_Set_Bit(n) << endl;
}