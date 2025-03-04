#include<bits/stdc++.h>
using namespace std;

// Print those two numbers which appear only once in the array

//  =>   1.  use map to count or store their frequency and then find those two numbers        TC = O(NlogM)  SC = O(M)


// 2.
// TC = O(2N)           SC = O(1)

vector<int> Find_Single_Num(vector<int>&arr, int n){
    long findXOR = 0;  // Because the    int      can not store ot overflow for value          INT_MIN-1    
    for(int i = 0; i < n; i++)  findXOR ^= arr[i];

    // To find first diff bit in those two distinct element
    int diff = ((findXOR&(findXOR-1))&findXOR);

    int num1 = 0, num2 = 0;

    for(int i = 0; i < n; i++){
        if((arr[i]&diff ) ==  0) num1 ^= arr[i];
        else num2 ^= arr[i];
    }

    vector<int>ans;

    ans.push_back(num1);
    ans.push_back(num2);

    return ans;
}

int main(){
    int n = 12;
    vector<int>arr = {1,2,2,3,4,4,5,5,3,6,6,7};
    vector<int>ans = Find_Single_Num(arr,n);
    for(int it : ans){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}