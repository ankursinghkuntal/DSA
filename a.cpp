#include <bits/stdc++.h>
using namespace std;

void rec(int i, vector<vector<int>>&res, vector<int>& subset, vector<int>& arr){
    if(i == arr.size()){
        res.push_back(subset);
        return;
    }

    subset.push_back(arr[i]);
    rec(i+1, res, subset, arr);

    subset.pop_back();
    rec(i+1, res, subset, arr);
}


vector<vector<int>> Subsets(vector<int>& arr){
   vector<int>subset;
   vector<vector<int>>res;
   rec(0, res, subset, arr);
   return res;
}

int main(){
	// cout << "HELLO" << endl;
	int n;  cin>>n;
    
    vector<int>arr(n);
    for(int i = 0;i < n; i++){
    	cin >> arr[i];
    }
    vector<vector<int>>res = Subsets(arr);

    for(auto it : res){
        for(int i = 0; i  < it.size(); i++){
            cout << it[i] << " ";
        }
        cout << endl;
    }

    return 0;
}