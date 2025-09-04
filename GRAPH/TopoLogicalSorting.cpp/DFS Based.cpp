	void dfs(int S, vector<bool>& vis, stack<int>& st, vector<int> adj[]){
	    vis[S] = true;
	    for(auto it : adj[S]){
	        if(!vis[it]) dfs(it, vis, st, adj);
	    }
	    st.push(S);
	}
    
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int>st;
	    vector<bool>vis(V,false);
	    for(int i = 0; i < V; i++){
	        if(!vis[i]) dfs(i, vis, st, adj);
	    }
	    vector<int>ans;
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}