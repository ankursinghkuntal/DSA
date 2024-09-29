#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int v, e; cin >> v >> e;
    int adj[v+1][v+1];
    memset(adj,0,sizeof(adj));
    for(int edge = 0; edge < e; edge++){
            int u,v;
            cin >> u >> v;
            adj[u][v] = 1;
            adj[v][u] = 1;   //  we will comment this in directed graph
    }
    for(int i = 0; i < v+1; i++){
        for(int j = 0; j < v+1; j++){
           cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}