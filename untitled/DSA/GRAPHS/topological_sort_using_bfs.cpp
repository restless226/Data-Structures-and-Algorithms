/*
PROBLEM STATEMENT:
Given a Directed Acyclic Graph (DAG) with V vertices and E edges,
Find any Topological Sorting of that Graph.
Topological Sort using BFS -> Kahn's Algorithm

Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V)
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void solve(int V, vector<int> adj[], vector<int> &ans) {
    queue<int> pendingVertices;
    vector<int> indegree(V, 0);
    for (int i = 0; i < V; i++) {
        for (auto &vertex: adj[i]) {
            indegree[vertex]++;
        }
    }
    for (int vertex = 0; vertex < V; vertex++) {
        if (indegree[vertex] == 0) {
            pendingVertices.push(vertex);
        }
    }
    while (!pendingVertices.empty()) {
        int currentVertex = pendingVertices.front();
        ans.push_back(currentVertex);
        pendingVertices.pop();
        for (int &vertex : adj[currentVertex]) {
            indegree[vertex]--;
            if (indegree[vertex] == 0) {
                pendingVertices.push(vertex);
            }
        }
    }
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int N, E;
        cin >> E >> N;
        int u, v;
        vector<int> adj[N];
        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector<int> ans;
        solve(N, adj, ans);
        for (int &vertex:ans) {
            cout << vertex << " ";
        }
        cout << '\n';
    }
    return 0;
}

/*
INPUT:
2
3
4
3 0
1 0
2 0
6
6
2 3
3 1
4 0
4 1
5 0
5 2

OUTPUT:
1 2 3 0
4 5 0 2 3 1
*/