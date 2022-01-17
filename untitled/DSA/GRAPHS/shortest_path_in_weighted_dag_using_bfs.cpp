/*
PROBLEM STATEMENT:
Given a directed acyclic graph with weighted edges,
the task is to find shortest path from given source node to every other node.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

vector<int> solve(vector<pair<int, int>> adj[], int V, int source) {
    vector<int> distance(V, INT_MAX);
    queue<int> pendingVertices;
    pendingVertices.push(source);
    distance[source] = 0;
    while (!pendingVertices.empty()) {
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();
        for (auto &pair : adj[currentVertex]) {
            if (distance[currentVertex] + pair.second < distance[pair.first]) {
                distance[pair.first] = distance[currentVertex] + pair.second;
                pendingVertices.push(pair.first);
            }
        }
    }
    return distance;
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
        vector<pair<int, int>> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].emplace_back(v,w);
        }
        int source;
        cin >> source;
        vector<int> distance = solve(adj, V, source);
        for (auto &vertex:distance) {
            cout << vertex << " ";
        }
        cout << '\n';
    }
    return 0;
}

/*
INPUT:
1
6
7
0 1 2
1 2 3
2 3 6
0 4 1
4 2 2
4 5 4
5 3 1
0

OUTPUT:
0 2 3 6 1 5
*/