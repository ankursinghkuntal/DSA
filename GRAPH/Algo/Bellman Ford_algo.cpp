#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

void bellmanFord(int V, int E, int source, vector<pair<int, pair<int, int>>>& edges) {
    vector<int> dist(V, INF);
    dist[source] = 0;

    // Relax all edges V - 1 times
    for (int i = 1; i <= V - 1; i++) {
        for (auto edge : edges) {
            int u = edge.first;
            int v = edge.second.first;
            int w = edge.second.second;

            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }

    // Check for negative-weight cycles
    for (auto edge : edges) {
        int u = edge.first;
        int v = edge.second.first;
        int w = edge.second.second;

        if (dist[u] != INF && dist[u] + w < dist[v]) {
            cout << "Graph contains a negative weight cycle\n";
            return;
        }
    }

    // Print distances
    cout << "Vertex\tDistance from Source " << source << "\n";
    for (int i = 0; i < V; i++) {
        cout << i << "\t" << (dist[i] == INF ? "INF" : to_string(dist[i])) << "\n";
    }
}

int main() {
    int V = 5; // number of vertices
    int E = 8; // number of edges

    vector<pair<int, pair<int, int>>> edges;

    // Add edges: (u, v, w)
    edges.push_back({0, {1, -1}});
    edges.push_back({0, {2, 4}});
    edges.push_back({1, {2, 3}});
    edges.push_back({1, {3, 2}});
    edges.push_back({1, {4, 2}});
    edges.push_back({3, {2, 5}});
    edges.push_back({3, {1, 1}});
    edges.push_back({4, {3, -3}});

    int source = 0;
    bellmanFord(V, E, source, edges);

    return 0;
}
