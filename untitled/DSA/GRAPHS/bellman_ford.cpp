/*
PROBLEM STATEMENT:
Given a weighted, directed and connected graph of V vertices and E edges,
Find the shortest distance of all the vertex's from the source vertex S.
NOTE: The Graph doesn't contain any negative weight cycle.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void solve(int V, vector<vector<int>> &adj, int source) {
    vector<int> distance(V, 100000000);
    distance[source] = 0;
    for (int i = 0; i < V - 1; i++) {
        for (auto &edge:adj) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            if (distance[u] + w < distance[v]) {
                distance[v] = distance[u] + w;
            }
        }
    }
    for (auto &edge:adj) {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];
        if (distance[u] + w < distance[v]) {
            cout << "Negative Cycle exists\n";
            return;
        }
    }
    for (auto &vertex:distance) cout << vertex << " ";
    cout << '\n';
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
        vector<vector<int>> adj;
        int i = 0;
        while (i++ < E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1;
            t1.push_back(u);
            t1.push_back(v);
            t1.push_back(w);
            adj.push_back(t1);
        }
        int source;
        cin >> source;
        solve(V, adj, source);
    }
    return 0;
}

/*
INPUT:
3
2
1
0 1 9
0
7
10
0 1 6
0 2 5
0 3 5
2 1 -2
3 2 -2
2 4 1
1 4 -1
3 5 -1
5 6 3
4 6 3
0
3
3
0 1 -1
1 2 -2
2 0 -3
0

OUTPUT:
0 9
0 1 3 5 0 4 3
Negative Cycle exists
*/