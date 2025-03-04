#include<bits/stdc++.h>
using namespace std;

// 1.  Solve using map  count the frequency and check for it


// 2. 
// TC = O(N*32)
//  SC = O(1)

int Find_Single_Num1(vector<int>&arr){
    int ans = 0;
    for(int bitIndex = 0; bitIndex < 32; bitIndex++){
        int cnt0 = 0;
        int cnt1 = 0;
        for(int j = 0; j < arr.size(); j++){
            if( (arr[j]&(1<<bitIndex)) ) cnt1++;
            else cnt0++;
        }
        if(cnt1%3 == 1){
            ans += (1<<bitIndex);
        }
    }
    return ans;
}


// 3.
// TC = O(NlogN)
// SC = O(1)

int Find_Single_Num2(vector<int>&arr){
    sort(arr.begin(),arr.end());
    for(int i = 1; i < arr.size(); i += 3){
        if(arr[i] != arr[i-1]) return arr[i-1];
    }
    return arr[arr.size()-1];
}


int main(){

    vector<int>arr = {1,1,1,2,2,2,3,5,5,5,9,3,3};
    cout << Find_Single_Num2(arr) << endl;
    return 0;
}