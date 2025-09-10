// A directed graph of V vertices and E edges is given in the form of an adjacency list adj. Each node of the graph is labelled with a distinct integer in the range 0 to V - 1.

// A node is a terminal node if there are no outgoing edges. A node is a safe node if every possible path starting from that node leads to a terminal node.

// You have to return an array containing all the safe nodes of the graph. The answer should be sorted in ascending order.




// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        
        vector<int>ans;
        
        vector<int>adjT[V];
        
        for(int i = 0; i < V; i++){
            for(int it : adj[i]){
                adjT[it].push_back(i);
            }
        }
        
        vector<int>outDegree(V, 0);
        
        for(int i = 0; i < V; i++){
            for(int it : adjT[i]){
                outDegree[it]++;
            }
        }
        
        queue<int>q;
        
        for(int i = 0; i < V; i++){
            if(outDegree[i] == 0) q.push(i);
        }
        
        vector<bool>vis(V, false);
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            vis[node] = true;
            
            ans.push_back(node);
            
            for(int it : adjT[node]){
                outDegree[it]--;
                
                if(!vis[it] && outDegree[it] == 0){
                    q.push(it);
                }
            }
            
        }
        
        sort(ans.begin(), ans.end());
        
        return ans;
        
    }
};
