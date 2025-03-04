#include<bits/stdc++.h>
using namespace std;

int division(int dividend, int divisor) {
    if (divisor == 0) return -1; // Handle division by zero
    if (dividend < divisor) return 0; // If dividend < divisor, quotient is 0

    int ans = 0;
    
    while (dividend >= divisor) {
        int temp = divisor, i = 0;
        
        while (dividend >= (temp << 1)) {
            temp <<= 1; // Double the divisor
            i++;
        }
        
        dividend -= temp;
        ans += (1 << i);
    }
    
    return ans;
}


int main(){

    int dividend = 15;
    int divisor = 5;

    cout << division(dividend, divisor) << endl;

    return 0;
}