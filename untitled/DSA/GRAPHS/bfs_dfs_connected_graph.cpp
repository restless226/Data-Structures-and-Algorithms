/*
PROBLEM STATEMENT:
Given a connected undirected graph.
1. Perform a Depth First Traversal of the graph.
2. Perform a Breadth First Traversal of the graph.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

// Time Complexity: O(V + E), Space Complexity: O(V)
void bfs(int **edges, int n, int sv) {
    bool *visited = new bool[n];
    memset(visited, false, sizeof(visited));
    queue<int> pendingVertices;
    pendingVertices.push(sv);
    visited[sv] = true;
    while (!pendingVertices.empty()) {
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();
        visited[currentVertex] = true;
        cout << currentVertex << " ";
        for (int i = 0; i < n; i++) {
            if (edges[currentVertex][i] == 1 && !visited[i]) {
                pendingVertices.push(i);
                visited[i] = true;
            }
        }
    }
}

// Time Complexity: O(V + E), Space Complexity: O(V)
void dfs(int **edges, int n, int sv, bool *visited) {
    cout << sv << " ";
    visited[sv] = true;
    for (int i = 0; i < n; i++) {
        if (edges[sv][i] == 1 && !visited[i]) {
            dfs(edges, n, i, visited);
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
        int n;  // no of vertices
        int e;  // no of edges
        cin >> n >> e;
        int **edges = new int *[n];    // Adjacency Matrix
        for (int i = 0; i < n; i++) {
            edges[i] = new int[n];
            for (int j = 0; j < n; j++) {
                edges[i][j] = 0;
            }
        }

        for (int i = 0; i < e; i++) {
            int s, d;
            cin >> s >> d;
            edges[s][d] = edges[d][s] = 1;
        }
        bool *visited = new bool[n];
        memset(visited, false, sizeof(visited));
        cout << "\ndfs: ";
        dfs(edges, n, 0, visited);
        cout << "\nbfs: ";
        bfs(edges, n, 0);

        for (int i = 0; i < n; i++) {
            delete[] edges[i];
        }
    }
    return 0;
}

/*
INPUT:
2
4
3
0 2
2 1
1 3
7
7
0 1
0 2
1 5
4 5
3 4
2 3
2 6

OUTPUT:
dfs: 0 2 1 3
bfs: 0 2 1 3
dfs: 0 1 5 4 3 2 6
bfs: 0 1 2 5 3 6 4
*/