#include <bits/stdc++.h>
using namespace std;

void Power_set(vector<int>&arr, vector<vector<int>>&PowerSet, int n){
    int total_Subsets = (1<<n);

    for(int i = 0; i < total_Subsets; i++){
        vector<int>temp;

        for(int j = 0; j < n; j++){
            if((i&(1<<j))) temp.push_back(arr[j]);  //check that the bit is set or not
        }

        PowerSet.push_back(temp);
    }

}

int main(){
    vector<int>arr = {1,2,3,4};
    vector<vector<int>>PowerSet;

    int n = arr.size();
    Power_set(arr, PowerSet, n);
    for(auto it : PowerSet){
        for(int num : it){
            cout << num << " ";
        }
        cout << endl;
    }
}