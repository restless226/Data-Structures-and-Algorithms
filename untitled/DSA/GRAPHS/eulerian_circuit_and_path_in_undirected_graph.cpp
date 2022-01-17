/*
PROBLEM STATEMENT:
Eulerian Path is a path in graph that visits every edge exactly once.
Eulerian Circuit is an Eulerian Path which starts and ends on the same vertex.
Given number of vertices V and adjacency list adj denoting the graph.
The task is to find that there exists the Euler Path or circuit or none
in given undirected graph with V vertices and adjacency list adj.

Eulerian Path is a path in graph that visits every edge exactly once.
Eulerian Circuit is an Eulerian Path which starts and ends on the same vertex.

Eulerian circuit/Eulerian cycle/Euler tour:
An undirected graph has an eulerian cycle if an only if
1. Every vertex has even degree and
2. All the vertices with an even degree belong to a single connected component
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int solve(int V, vector<int> adj[]) {
    int path;
    int circuit;
    int odd = 0;
    for (int i = 0; i < V; i++) {
        if (adj[i].size() % 2 != 0) odd++;
    }
    (odd == 0 || odd == 2) ? path = 1 : path = 0;
    (odd == 0) ? circuit = 1 : circuit = 0;
    return path + circuit;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout << solve(V, adj) << "\n";
    }
    return 0;
}

/*
INPUT:
1
3 3
0 1
0 2
1 2

OUTPUT:
2
*/