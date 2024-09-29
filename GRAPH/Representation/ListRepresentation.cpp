#include <bits/stdc++.h>
using namespace std;

// void listRep(vector<int>adj[], int u, int v){
//         adj[u].push_back(v);
//         adj[v].push_back(u);    //  we will comment this in directed graph
// }

int main(){
    
    int v, e; cin >> v >> e;
    vector<int>adj[v+1];
    
    for(int edge = 0; edge < e; edge++){
            int u,v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);    //  we will comment this in directed graph
    }
    for(int i = 0; i < v+1; i++){
        for(int j = 0; j < adj[i].size(); j++){
           cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}