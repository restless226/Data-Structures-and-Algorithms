/*
PROBLEM STATEMENT:
Given an undirected graph of V vertices and E edges
the task is to find all bridge edges in graph,
i.e., removing the edge disconnects the graph.
Expected Time Complexity: O(V + E).
Expected Auxiliary Space: O(V).
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void dfs(vector<int> adj[], bool *visited, int node, int parent, vector<int> &tin,
         vector<int> &low, int timer, vector<pair<int, int>> &ans) {
    visited[node] = true;
    tin[node] = low[node] = timer++;
    for (auto &vertex:adj[node]) {
        if (vertex == parent) continue;
        if (!visited[vertex]) {
            dfs(adj, visited, vertex, node, tin, low, timer, ans);
            low[node] = min(low[node], low[vertex]);
            if (low[vertex] > tin[node]) {
                ans.emplace_back(node, vertex);
            }
        } else {
            low[node] = min(low[node], tin[vertex]);
        }
    }
}

vector<pair<int, int>> solve(int V, vector<int> adj[]) {
    bool *visited = new bool[V];
    memset(visited, false, sizeof(visited));
    vector<int> tin(V, -1);
    vector<int> low(V, -1);
    vector<pair<int, int>> ans;
    int timer = 0;
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            dfs(adj, visited, i, -1, tin, low, timer, ans);
        }
    }
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
        int i = 0;
        while (i++ < E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<pair<int, int>> ans = solve(V, adj);
        for (auto &itr:ans) cout << itr.first << " " << itr.second << '\n';
        cout << "\n";
    }
    return 0;
}

/*
INPUT:
4
4
3
0 1
1 2
2 3
5
5
1 0
1 2
0 2
0 3
0 4
5
5
1 0
1 2
0 2
0 3
0 4
9
12
0 2
1 4
1 5
2 3
2 4
4 5
3 0
6 3
6 7
7 8
8 6
8 2

OUTPUT:
2 3
1 2
0 1

0 3
0 4

0 3
0 4

2 4
*/