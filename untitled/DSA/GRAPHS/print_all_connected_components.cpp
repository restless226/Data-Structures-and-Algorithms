/*
PROBLEM STATEMENT:
Given an undirected graph G(V,E), find and print all the connected components of the given graph G.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
You need to take input in main and create a function which should return all the connected components.
And then print them in the main, not inside function.
Print different components in new line. And each component should be printed in increasing order
(separated by space). Order of different components doesn't matter.
Input Format :
Line 1: Two Integers V and E (separated by space)
Next 'E' lines, each have two space-separated integers, 'a' and 'b',
denoting that there exists an edge between Vertex 'a' and Vertex 'b'.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void dfs(int **edges, int n, int sv, bool *visited, vector<int> &component) {
    visited[sv] = true;
    component.push_back(sv);
    for (int i = 0; i < n; i++) {
        if (edges[sv][i] == 1 && !visited[i]) {
            dfs(edges, n, i, visited, component);
        }
    }
}

void solve(int **edges, int n, vector<vector<int>> &ans) {
    bool *visited = new bool[n];
    memset(visited, false, sizeof(visited));
    vector<int> component;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(edges, n, i, visited, component);
            ans.push_back(component);
            component.clear();
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
        vector<vector<int>> ans;
        solve(edges, n, ans);
        for (auto &component:ans) {
            cout << "(";
            for (auto &itr:component) {
                cout << itr << " ";
            }
            cout << ")";
        }
        cout << '\n';
        for (int i = 0; i < n; i++) {
            delete[] edges[i];
        }
    }
    return 0;
}

/*
INPUT:
3
4
2
0 1
2 3
7
5
0 2
0 3
2 3
1 4
5 6
8
7
1 3
1 4
3 4
2 5
2 7
5 7
6 0


OUTPUT:
(0 1 )(2 3 )
(0 2 3 )(1 4 )(5 6 )
(0 6 )(1 3 4 )(2 5 7 )
*/