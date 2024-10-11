// Given a sorted dictionary of an alien language having N words and k starting alphabets of standard dictionary. 
// Find the order of characters in the alien language.
// Note: Many orders may be possible for a particular test case, thus you may return any valid order and output 
// will be 1 if the order of string returned by the function is correct else 0 denoting incorrect string returned.


    // string findOrder(string dict[], int n, int k) {
    //     vector<int> adj[k];
    //     int indegree[k] = {0};
    
    //     for(int i = 0; i < n - 1; i++) {
    //         int m = min(dict[i].size(), dict[i + 1].size());
    //         for(int j = 0; j < m; j++) {
    //             if(dict[i][j] != dict[i + 1][j]) {
    //                 adj[dict[i][j] - 'a'].push_back(dict[i + 1][j] - 'a');
    //                 indegree[dict[i + 1][j] - 'a']++;
    //                 break;
    //             }
    //         }
    //     }
    
    //     queue<int> q;
    //     for(int i = 0; i < k; i++) {
    //         if(indegree[i] == 0) q.push(i);
    //     }
    
    //     vector<int> ans;
    //     while(!q.empty()) {
    //         int node = q.front();
    //         q.pop();
    //         ans.push_back(node);
    //         for(auto it : adj[node]) {
    //             indegree[it]--;
    //             if(indegree[it] == 0) q.push(it);
    //         }
    //     }
    
    //     string str = "";
    //     for(int i = 0; i < ans.size(); i++) {
    //         str += char('a' + ans[i]);
    //     }
    
    //     return str;
    // }