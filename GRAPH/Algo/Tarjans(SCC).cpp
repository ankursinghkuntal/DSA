#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int timer = 0;

    void DFS(int S, vector<bool>& vis, vector<int>& insertionTime, vector<int>& low, vector<int> adj[], vector<vector<int>>& SCC, stack<int>& st, vector<bool>& inStack) {
        vis[S] = true;
        insertionTime[S] = low[S] = timer;
        timer++;
        st.push(S);
        inStack[S] = true;

        for (auto it : adj[S]) {
            if (!vis[it]) {
                DFS(it, vis, insertionTime, low, adj, SCC, st, inStack);
                low[S] = min(low[S], low[it]);
            } else if (inStack[it]) {
                low[S] = min(low[S], insertionTime[it]);
            }
        }

        // If S is a root node, pop all nodes in the current SCC
        if (low[S] == insertionTime[S]) {
            vector<int> temp;
            while (true) {
                int node = st.top();
                st.pop();
                inStack[node] = false;
                temp.push_back(node);
                if (node == S) break;
            }
            sort(temp.begin(), temp.end());  // Traditional sorting of SCC
            SCC.push_back(temp);
        }
    }

public:
    // Function to return a list of lists of integers denoting the members
    // of strongly connected components in the given graph.
    vector<vector<int>> tarjans(int V, vector<int> adj[]) {
        vector<bool> vis(V, false);
        vector<int> insertionTime(V, -1);
        vector<int> low(V, -1);
        vector<bool> inStack(V, false);
        stack<int> st;

        vector<vector<int>> SCC;

        // Call DFS for each node to find SCCs
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                DFS(i, vis, insertionTime, low, adj, SCC, st, inStack);
            }
        }

        // Traditional sorting of all SCCs based on the smallest element in each SCC
        sort(SCC.begin(), SCC.end(), compare);

        return SCC;
    }

    // Traditional comparator function to sort SCCs by the smallest element
    static bool compare(const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    }
};

int main() {
    Solution solution;
    int V = 5; // Number of vertices
    vector<int> adj[V];

    // Example graph (directed)
    adj[0].push_back(2);
    adj[2].push_back(1);
    adj[1].push_back(0);
    adj[0].push_back(3);
    adj[3].push_back(4);

    vector<vector<int>> sccs = solution.tarjans(V, adj);

    // Output SCCs
    for (int i = 0; i < sccs.size(); i++) {
        for (int j = 0; j < sccs[i].size(); j++) {
            cout << sccs[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
