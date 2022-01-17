/*
PROBLEM STATEMENT:
Given an undirected graph with V vertices and E edges,
check whether it contains any cycle or not.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

bool bfs(vector<int> adj[], int sv, bool *visited) {
    queue<pair<int, int>> pendingVertices;
    pendingVertices.push({sv, -1});
    visited[sv] = true;
    while (!pendingVertices.empty()) {
        int currentVertex = pendingVertices.front().first;
        int previousVertex = pendingVertices.front().second;
        pendingVertices.pop();
        visited[currentVertex] = true;
        for (auto &vertex: adj[currentVertex]) {
            if (!visited[vertex]) {
                pendingVertices.push({vertex, currentVertex});
                visited[vertex] = true;
            } else if (previousVertex != vertex) {
                return true;
            }
        }
    }
    return false;
}

bool solve(int V, vector<int> adj[]) {
    bool *visited = new bool[V];
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (bfs(adj, i, visited)) {
                return true;
            }
        }
    }
    return false;
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
        bool ans = solve(V, adj);
        if (ans)
            cout << "cycle present\n";
        else
            cout << "cycle absent\n";
    }
    return 0;
}

/*
INPUT:
2
5
5
0 4
1 2
1 4
2 3
3 4
4
2
1 2
2 3

OUTPUT:
cycle present
cycle absent
*/