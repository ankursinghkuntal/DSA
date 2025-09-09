class Solution {
  public:
    int minCost(vector<vector<int>>& houses) {
        // code here
        int n = houses.size();
        
        vector<vector<int>>adj[n];
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j) continue;
                int wt = abs(houses[i][0] - houses[j][0]) + abs(houses[i][1] - houses[j][1]);
                adj[i].push_back({j,wt});
            }
        }
        
        
        int mnWt = 0;
        
        vector<bool>vis(n, false);
        
        set<vector<int>>s;
        
        // priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>pq;
        
        int src = 0;
        
        s.insert({0, src});
        // pq.push({0, src});
        
        while(!s.empty()){
            vector<int>temp = *(s.begin());
            // vector<int>temp = pq.top();
            
            int curr = temp[1];
            int currWt = temp[0];
            
            s.erase(temp);
            // pq.pop();
            
            if(vis[curr]) continue;
            
            mnWt += currWt;
            vis[curr] = true;
            
            for(auto it : adj[curr]){
                
                int node = it[0];
                int wt = it[1];
                if(!vis[node]){
                    s.insert({wt, node});   
                }
                
                
                // pq.push({wt, node});
            }
            
        }
        
        return mnWt;
    }
};