#include <bits/stdc++.h>
using namespace std;

// Optimise Approach
bool Check_If_Number_Is_Power_Of_Two_Or_Not(int n){
    if((n&(n-1)) == 0) return true;
    return false;
}

int main(){
    int n = 9;
    cout <<  Check_If_Number_Is_Power_Of_Two_Or_Not(n) << endl;
}