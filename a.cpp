#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<string>&str, int row, int col){

    int n = str.size();

    int tRow = row;
    int tCol = col;

    while(tRow >= 0 && tCol >= 0){
        if(str[tRow][tCol] == 'Q') return false;
        tCol--;
        tRow--;
    }

    tRow = row;
    tCol = col;

    while(tCol >= 0){
        if(str[tRow][tCol] == 'Q') return false;
        tCol--;
    }

    tRow = row;
    tCol = col;

    while(tRow < n && tCol >= 0){
        if(str[tRow][tCol] == 'Q') return false;
        tRow++;
        tCol--;
    }

    return true;
}

void solve(vector<vector<string>>&ans, vector<string>&str, int n, int col){
    if(col == n){
        ans.push_back(str);
        return;
    }

    for(int row = 0; row < n; row++){
        if(isSafe(str, row, col)){
            str[row][col] = 'Q';
            solve(ans, str, n, col+1);
            str[row][col] = '.';  // backtracking
        }
    }

}

int main(){

    int n = 8;

    vector<vector<string>>ans;
    vector<string>str(n, string(n, '.'));

    solve(ans, str, n, 0);

    cout << ans.size() << endl;

    return 0;
}