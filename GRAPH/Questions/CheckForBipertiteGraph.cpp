// Given an adjacency list of a graph adj of V no. of vertices having 0 based index. Check whether the graph is bipartite or not.
// You don't need to read or print anything. Your task is to complete the function isBipartite() which takes V denoting no. of vertices and adj denoting adjacency 
// list of the graph and returns a boolean value true if the graph is bipartite otherwise returns false.



    bool bfs(int S, vector<int>adj[], vector<int>& color){
        
        color[S] = 0;
        queue<int>q;
        q.push(S);
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it : adj[node]){
                if(color[it] == 2){
                    color[it] = !color[node];
                    q.push(it);
                }
                else if(color[it] == color[node]) return false;
            }
        }
        
        return true;
    }

	bool isBipartite(int V, vector<int>adj[]){
	    
	    vector<int>color(V,2);
	    
	    for(int i = 0; i < V; i++){
	        if(color[i] == 2){
	            if (!bfs(i, adj, color)) return false;
	        }
	    }
	    return true;
	}






    bool dfs(int S, vector<int>adj[], vector<int>& color, int newcolor){
        
        color[S] = newcolor;
        for(auto it : adj[S]){
            if(color[it] == 2){
                if(!dfs(it, adj, color, !newcolor)) return false;
            }
            else if(color[it] == color[S]) return false;
        }
        
        return true;
    }

	bool isBipartite(int V, vector<int>adj[]){
	    
	    vector<int>color(V,2);
	    
	    for(int i = 0; i < V; i++){
	        if(color[i] == 2){
	            if (!dfs(i, adj, color, 0)) return false;
	        }
	    }
	    return true;
	    
	}