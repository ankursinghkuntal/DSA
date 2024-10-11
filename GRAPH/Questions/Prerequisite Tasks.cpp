// There are a total of N tasks, labeled from 0 to N-1. Some tasks may have prerequisites, for example to do task 0 you have to 
// first complete task 1, which is expressed as a pair: [0, 1]
// Given the total number of tasks N and a list of prerequisite pairs P, find if it is possible to finish all tasks.




    // bool isPossible(int N, int P, vector<pair<int, int>>& prerequisites) {
    //     vector<int> adj[N];
    //     vector<int> indegree(N, 0);
    
    //     for (int i = 0; i < P; i++) {
    //         int u = prerequisites[i].first;
    //         int v = prerequisites[i].second;
    //         adj[u].push_back(v);
    //         indegree[v]++;
    //     }
    
    //     vector<bool> vis(N, false);
    //     queue<int> q;
        
    //     for (int i = 0; i < N; i++) {
    //         if (indegree[i] == 0) q.push(i);
    //     }
    
    //     int cnt = 0;
    //     while (!q.empty()) {
    //         int node = q.front();
    //         q.pop();
    //         for (auto it : adj[node]) {
    //             indegree[it]--;
    //             if(indegree[it] == 0) q.push(it);
    //         }
    //         cnt++;
    //     }
        
    //     return (N == cnt);
    // }