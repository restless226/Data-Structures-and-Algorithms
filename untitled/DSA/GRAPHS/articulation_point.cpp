/*
PROBLEM STATEMENT:
Given an undirected graph (not necessarily connected) with V vertices and adjacency list adj.
You are required to find all the vertices removing which (and edges through it)
disconnects the graph into 2 or more components, or in other words, removing which increases the number of connected components.
Note: Indexing is zero-based i.e nodes numbering from (0 to V-1). There might be loops present in the graph.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void dfs(int node, int parent, vector<bool> &visited, vector<int> &tin,
         vector<int> &low, int &timer, vector<int> adj[], vector<bool> &isArticulation) {
    visited[node] = true;
    tin[node] = low[node] = timer++;
    int child = 0;
    for (auto &vertex:adj[node]) {
        if (vertex == parent) continue;
        if (!visited[vertex]) {
            dfs(vertex, node, visited, tin, low, timer, adj, isArticulation);
            low[node] = min(low[node], low[vertex]);
            if (low[vertex] >= tin[node] && parent != -1) isArticulation[node] = true;
            child++;
        } else {
            low[node] = min(low[node], tin[vertex]);
        }
    }
    if (parent == -1 && child > 1) isArticulation[node] = true;
}

vector<int> solve(int V, vector<int> adj[]) {
    vector<int> tin(V, -1);
    vector<int> low(V, -1);
    vector<bool> visited(V, false);
    vector<bool> isArticulation(V, false);
    int timer = 0;
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            dfs(i, -1, visited, tin, low, timer, adj, isArticulation);
        }
    }
    vector<int> ans;
    for (int i = 0; i < V; i++) {
        if (isArticulation[i]) ans.push_back(i);
    }
    if (ans.empty()) ans.push_back(-1);
    return ans;
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
        vector<int> ans = solve(V, adj);
        for (auto i: ans)cout << i << " ";
        cout << "\n";
    }
    return 0;
}

/*
INPUT:
1
5 5
0 1
1 4
2 4
3 4
2 3

OUTPUT:
1 4
*/