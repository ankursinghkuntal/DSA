// You are in a city that consists of n intersections numbered from 0 to n - 1 with bi-directional roads between some intersections. 
// The inputs are generated such that you can reach any intersection from any other intersection and that there is at most one road 
// between any two intersections.

// You are given an integer n and a 2D integer array roads where roads[i] = [ui, vi, timei] means that there is a road between intersections 
// ui and vi that takes timei minutes to travel. You want to know in how many ways you can travel from intersection 0 to intersection n - 1 
// in the shortest amount of time.

// Return the number of ways you can arrive at your destination in the shortest amount of time. Since the answer may be large, return it modulo 
// 109 + 7.




#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int countPaths(int n, vector<vector<int>>& roads) {
    vector<pair<int, int>> adj[n];
    const int MOD = 1e9 + 7;
    
    for (int i = 0; i < roads.size(); i++) {
        int from = roads[i][0];
        int to = roads[i][1];
        int timeTaken = roads[i][2];
        
        adj[from].push_back({to, timeTaken});
        adj[to].push_back({from, timeTaken});
    }
    
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    vector<long long> Time(n, 1e12);
    vector<int> ways(n, 0);
    
    Time[0] = 0;
    ways[0] = 1;
    pq.push({0, 0});
    
    while (!pq.empty()) {
        long long timeTaken = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        
        for (auto it : adj[node]) {
            int v = it.first;
            int Time_v = it.second;
            
            if (timeTaken + Time_v < Time[v]) {
                Time[v] = timeTaken + Time_v;
                ways[v] = ways[node];
                pq.push({Time[v], v});
            } else if (timeTaken + Time_v == Time[v]) {
                ways[v] = (ways[v] + ways[node]) % MOD;
            }
        }
    }
    
    return ways[n-1] % MOD;
}

int main() {
    int n = 7;
    vector<vector<int>> roads = {
        {0, 6, 7}, {0, 1, 2}, {1, 2, 3}, {1, 3, 3}, {6, 3, 3}, {3, 5, 1},
        {6, 5, 1}, {2, 5, 5}, {0, 4, 5}, {4, 6, 2}
    };
    
    cout << countPaths(n, roads) << endl;

    return 0;
}
