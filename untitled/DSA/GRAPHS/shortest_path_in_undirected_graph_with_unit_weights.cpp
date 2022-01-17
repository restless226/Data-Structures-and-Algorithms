/*
PROBLEM STATEMENT:
Given an undirected graph with every edge of unit weight,
the task is to find shortest path from given source node to every other node.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

vector<int> solve(vector<int> adj[], int V, int source) {
    vector<int> distance(V, INT_MAX);
    queue<int> pendingVertices;
    pendingVertices.push(source);
    distance[source] = 0;
    while (!pendingVertices.empty()) {
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();
        for (int &vertex : adj[currentVertex]) {
            if (distance[currentVertex] + 1 < distance[vertex]) {
                distance[vertex] = distance[currentVertex] + 1;
                pendingVertices.push(vertex);
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
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
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
9
10
0 1
1 2
2 6
7 8
0 3
3 4
4 5
5 6
6 7
6 8
0

OUTPUT:
0 1 2 1 2 3 3 4 4
*/