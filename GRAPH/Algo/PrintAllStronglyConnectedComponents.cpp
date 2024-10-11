#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	void DFS(int node, vector<vector<int>>& adj, vector<bool>& vis, stack<int>& st){
	    vis[node] = true;
	    for(auto it : adj[node]){
	        if(!vis[it]){
	            DFS(it, adj, vis, st);
	        }
	    }
	    st.push(node);
	}
	
	void DFS2(int node, vector<vector<int>>& adjT, vector<bool>& vis2, vector<int>& temp){
	    vis2[node] = true;
	    temp.push_back(node); // Add the node to the current SCC
	    for(auto it : adjT[node]){
	        if(!vis2[it]){
	            DFS2(it, adjT, vis2, temp);
	        }
	    }
	}

	// Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        vector<bool> vis(V, false);
        stack<int> st;
        
        // Step 1: Perform DFS and store nodes in stack based on finishing time
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                DFS(i, adj, vis, st);
            }
        }
        
        // Step 2: Reverse the graph
        vector<vector<int>> adjT(V);
        for(int i = 0; i < V; i++){
            for(auto it : adj[i]){
                adjT[it].push_back(i);
            }
        }
        
        vector<vector<int>> SCC; // Store all SCCs here
        
        // Step 3: Perform DFS on reversed graph based on stack order
        vector<bool> vis2(V, false);
        while(!st.empty()){
            int node = st.top();
            st.pop();
            if(!vis2[node]) {
                vector<int> temp; // Temporary vector for current SCC
                DFS2(node, adjT, vis2, temp);
                SCC.push_back(temp); // Add the current SCC to the list of SCCs
            }
        }
        
        // Return the number of strongly connected components
        return SCC.size();
    }
};

// Example main function
int main() {
    int V, E;
    cin >> V >> E;
    
    vector<vector<int>> adj(V);
    
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    
    Solution obj;
    int scc = obj.kosaraju(V, adj);
    
    cout << "Number of Strongly Connected Components: " << scc << endl;
    
    return 0;
}
