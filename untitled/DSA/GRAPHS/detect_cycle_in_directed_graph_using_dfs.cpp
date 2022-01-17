/*
PROBLEM STATEMENT:
Given a Directed Graph with V vertices (Numbered from 0 to V-1)
and E edges, check whether it contains any cycle or not.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

bool dfs(vector<int> adj[], int sv, bool *visited, bool *dfs_visited) {
    visited[sv] = true;
    dfs_visited[sv] = true;
    for (auto &vertex: adj[sv]) {
        if (!visited[vertex]) {
            if (dfs(adj, vertex, visited, dfs_visited)) {
                return true;
            }
        } else if (dfs_visited[vertex]) {
            return true;
        }
    }
    dfs_visited[sv] = false;
    return false;
}

bool solve(int V, vector<int> adj[]) {
    bool *visited = new bool[V];
    bool *dfs_visited = new bool[V];
    memset(visited, false, sizeof(visited));
    memset(dfs_visited, false, sizeof(dfs_visited));
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfs(adj, i, visited, dfs_visited)) {
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
        }
        cout << solve(V, adj) << "\n";
    }
    return 0;
}

/*
INPUT:
4
6
5
5 3
3 1
1 2
2 4
4 0
4
4
0 1
1 2
2 3
3 3
11
11
7 0
0 4
4 5
5 6
6 8
8 9
9 3
3 2
2 1
1 10
4 6
4 5
2 0
0 1
1 3
3 1
1 0

OUTPUT:
0
1
0
1
*/