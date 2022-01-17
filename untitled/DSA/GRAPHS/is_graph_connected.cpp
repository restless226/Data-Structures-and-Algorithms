/*
PROBLEM STATEMENT:
Given an undirected graph G(V,E), check if the graph G is connected graph or not.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
Input Format :
Line 1: Two Integers V and E (separated by space)
Next 'E' lines, each have two space-separated integers, 'a' and 'b',
denoting that there exists an edge between Vertex 'a' and Vertex 'b'.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void dfs(int **edges, int n, int sv, bool *visited) {
    visited[sv] = true;
    for (int i = 0; i < n; i++) {
        if (edges[sv][i] == 1 && !visited[i]) {
            dfs(edges, n, i, visited);
        }
    }
}

bool solve(int **edges, int n) {
    bool *visited = new bool[n];
    memset(visited, false, sizeof(visited));
    dfs(edges, n, 0, visited);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            return false;
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
        if (solve(edges, n)) {
            cout << "connected\n";
        } else {
            cout << "disconnected\n";
        }
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
4
0 1
0 3
1 2
2 3
4
3
0 1
1 3
0 3

OUTPUT:
connected
disconnected
*/