// There are a total of n tasks you have to pick, labelled from 0 to n-1. Some tasks may have prerequisite tasks, for example to pick task 0 you
//  have to first finish tasks 1, which is expressed as a pair: [0, 1]
// Given the total number of n tasks and a list of prerequisite pairs of size m. Find a ordering of tasks you should pick to finish all tasks.
// Note: There may be multiple correct orders, you just need to return any one of them. If it is impossible to finish all tasks, return an empty 
// array. Driver code will print "No Ordering Possible", on returning an empty array. Returning any correct order will give the output as 1, 
// whereas any invalid order will give the output 0. 



    // vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) {
    //     int N = n;
    //     int P = m;
        
    //     vector<int> adj[N];
    //     vector<int> indegree(N, 0);
    
    //     // Build the adjacency list and indegree array
    //     for (int i = 0; i < P; i++) {
    //         int u = prerequisites[i][0];
    //         int v = prerequisites[i][1];
    //         adj[v].push_back(u);
    //         indegree[u]++;
    //     }
    
    //     vector<bool> vis(N, false);
    //     queue<int> q;
    
    //     // Add nodes with 0 indegree to the queue
    //     for (int i = 0; i < N; i++) {
    //         if (indegree[i] == 0) q.push(i);
    //     }
    
    //     vector<int> ans;
    
    //     // Process nodes in topological order
    //     while (!q.empty()) {
    //         int node = q.front();
    //         q.pop();
    //         ans.push_back(node);
    //         for (auto it : adj[node]) {
    //             indegree[it]--;
    //             if (indegree[it] == 0) q.push(it);
    //         }
    //     }
    
    //     // Check if topological sort is possible
    //     return (N == ans.size()) ? ans : vector<int>{};
    // }