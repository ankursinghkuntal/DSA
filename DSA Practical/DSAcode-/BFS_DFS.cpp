#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
bool vis[N];

void printAdjacencyLIST(vector<int> adj[], int V)
{
    cout << "Adjacency LIST:" << endl;
    for (int i = 0; i < V; i++)
    {
        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

void BFS(vector<int> adj[], int V, int source)
{
    cout << "BFS traversal is :";
    bool vis[V + 1];
    queue<int> q;
    vis[source] = true;
    q.push(source);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj[u])
        {
            if (vis[v] == false)
            {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}

void DFS(vector<int> adj[], int source)
{
    cout << source << " ";
    vis[source] = true;
    for (int child : adj[source])
    {
        if (vis[child] == false)
            DFS(adj, child);
    }
}

int main()
{
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;
    int E;
    cout << "Enter the number of vertices: ";
    cin >> E;

    vector<int> adj[V];
    while (E--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    printAdjacencyLIST(adj, V);
    int s;
    cout << "Enter the source:";
    cin >> s;
    BFS(adj, V, s);

    vis[N] = {false};
    cout << "DFS traversal is :";
    DFS(adj, s);
    cout << endl;
    cout << "Number of connected components :";

    vis[N] = {false};
    int count = 0;
    for (int i = 0; i < V; i++)
    {
        if (vis[i])
            continue;
        DFS(adj, i);
        count++;
    }
    cout << count << endl;
    return 0;
}
