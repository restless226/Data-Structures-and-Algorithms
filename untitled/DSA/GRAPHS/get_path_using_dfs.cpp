/*
PROBLEM STATEMENT:
Given an undirected graph G(V, E) and two vertices v1 and v2(as integers),
find and print the path from v1 to v2 (if exists).
Print -1 if there is no path between v1 and v2.
Find the path using DFS and print the first path that you encountered.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
Print the path in reverse order.
That is, print v2 first, then intermediate vertices and v1 at last.
Note : Save the input graph in Adjacency Matrix.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

vector<int> dfs(int **edges, int n, int source, int destination, bool *visited) {
    if (source == destination) {
        vector<int> temp;
        temp.push_back(source);
        return temp;
    }
    vector<int> ans;
    visited[source] = true;
    for (int i = 0; i < n; i++) {
        if (edges[source][i] == 1 && !visited[i]) {
            vector<int> temp = dfs(edges, n, i, destination, visited);
            if (!temp.empty()) {
                ans = temp;
                break;
            }
        }
    }
    if (!ans.empty()) {
        ans.push_back(source);
    }
    return ans;
}

vector<int> solve(int **edges, int n, int source, int destination) {
    bool *visited = new bool[n];
    memset(visited, false, sizeof(visited));
    vector<int> ans = dfs(edges, n, source, destination, visited);
    return ans;
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
        int source, destination;
        cin >> source >> destination;
        vector<int> ans = solve(edges, n, source, destination);
        if (ans.empty()) {
            cout << "\npath does not exist";
        } else {
            for (auto itr :ans) {
                cout << itr << " ";
            }
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
1 3
6
3
5 3
0 1
3 4
0 3

OUTPUT:
3 0 1
path does not exist
*/