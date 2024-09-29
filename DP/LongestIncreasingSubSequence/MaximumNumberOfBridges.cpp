#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int non_crossing(vector<pair<int, int>> temp, int n) {
    sort(temp.begin(), temp.end(), compare);
    vector<int> LIS(n, 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (temp[i].second > temp[j].second) {
                LIS[i] = max(LIS[i], LIS[j] + 1);
            }
        }
    }
    
    int Max_bridge = 0;
    for (int i = 0; i < n; i++) {
        Max_bridge = max(Max_bridge, LIS[i]);
    }
    return Max_bridge;
}

int main(){
    int n=4;
    vector<pair<int,int>> temp;
    temp.push_back(make_pair(6,2));
    temp.push_back(make_pair(4,3));
    temp.push_back(make_pair(2,6));
    temp.push_back(make_pair(4,5));
     
    cout<<non_crossing(temp,n)<<endl;
    // sort(temp.begin(), temp.end(), compare);
    // for(int  i = 0; i < 4; i++){
    //     cout << temp[i].first << " " << temp[i].second << endl;
    // }
    return 0;
}