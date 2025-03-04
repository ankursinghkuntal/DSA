#include<bits/stdc++.h>
using namespace std;

// 1.  Solve using map  count the frequency and check for it


// 2.  Using XOR

int Find_Single_Num(vector<int>&arr){
    int ans = 0;
    for(int i = 0; i < arr.size(); i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){

    vector<int>arr = {1,2,2,1,3,4,4,5,5,7,7,9,9};
    cout << Find_Single_Num(arr) << endl;
    return 0;
}