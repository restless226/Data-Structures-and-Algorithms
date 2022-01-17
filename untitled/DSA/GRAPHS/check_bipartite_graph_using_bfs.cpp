/*
PROBLEM STATEMENT:
Given an adjacency list of a graph adj of V no. of vertices having 0 based index.
Check whether the graph is bipartite or not.

A Bipartite Graph is a graph whose vertices can be divided into two independent sets,
U and V such that every edge (u, v) either connects a vertex from U to V or a vertex from V to U.
In other words, for every edge (u, v), either u belongs to U and v to V, or u belongs to V and v to U.
We can also say that there is no edge that connects vertices of same set.

A bipartite graph is possible if the graph coloring is possible using two colors
such that vertices in a set are colored with the same color.
Note that it is possible to color a cycle graph with even cycle using two colors.

DEFINITION:
A graph which can be colored using exactly 2 colors such that no two adjacent vertices have same color.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

bool bfs(vector<int> adj[], int node, int color[]) {
    queue<int> pendingVertices;
    pendingVertices.push(node);
    while (!pendingVertices.empty()) {
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();
        for (int &vertex : adj[currentVertex]) {
            if (color[vertex] == -1) {
                color[vertex] = color[currentVertex] == 1 ? 0 : 1;
                pendingVertices.push(vertex);
            } else if (color[vertex] == color[currentVertex]) {
                return false;
            }
        }
    }
    return true;
}

bool solve(int V, vector<int> adj[]) {
    int color[V];
    memset(color, -1, sizeof(color));
    for (int i = 0; i < V; i++) {
        if (color[i] == -1) {
            color[i] = 1;
            if (!bfs(adj, i, color)) {
                return false;
            }
        }
    }
    return true;
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
        if (solve(V, adj)) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}

/*
INPUT:
5
3
2
0 1
1 2
4
4
0 2
0 3
1 3
2 3
10
10
0 1
1 2
2 3
3 4
4 5
5 6
6 7
5 8
8 9
2 9
8
8
0 1
1 2
2 3
3 4
4 6
6 7
1 7
4 5
7
7
0 1
1 2
2 3
3 4
4 6
6 1
4 5

OUTPUT:
yes
no
yes
yes
no
*/