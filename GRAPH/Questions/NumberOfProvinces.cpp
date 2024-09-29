
// There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b 
// is connected directly with city c, then city a is connected indirectly with city c.

// A province is a group of directly or indirectly connected cities and no other cities outside of the group.

// You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, 
// and isConnected[i][j] = 0 otherwise.

// Return the total number of provinces.

// 1.
    // void dfs(vector<vector<int>>&isConnected,vector<bool>&visited,int i){
    //     visited[i] = true;
    //     for(int j=0;j<isConnected.size();j++){
    //         if(isConnected[i][j]==1 && !visited[j]){
    //             dfs(isConnected,visited,j);
    //         }
    //     }
    // }
    
    // int findCircleNum(vector<vector<int>>& isConnected) {
    //     vector<bool>visited(isConnected.size(),false);
    //     int count = 0;
    //     for(int i=0;i<isConnected.size();i++){
    //         if(!visited[i]){
    //             count++;
    //             dfs(isConnected,visited,i);
    //         }
    //     }
    //     return count;
    // }




// 2.
    //     void bfs(vector<vector<int>>&isConnected,vector<bool>&vis,int i){
    //     vis[i] = true;
    //     queue<int>q;
    //     q.push(i);
    //     while(!q.empty()){
    //         int node = q.front();
    //         q.pop();
    //         for(int j = 0; j < isConnected[0].size(); j++){
    //             if(isConnected[node][j] == 1  && !vis[j]){
    //                 vis[j] = true;
    //                 q.push(j);
    //             } 
    //         }
    //     }
    // }

    // int findCircleNum(vector<vector<int>>& isConnected) {
    //     vector<bool>vis(isConnected.size(),false);
    //     int count = 0;
    //     for(int i=0;i<isConnected.size();i++){
    //         if(!vis[i]){
    //             count++;
    //             bfs(isConnected,vis,i);
    //         }
    //     }
    //     return count;
    // }
