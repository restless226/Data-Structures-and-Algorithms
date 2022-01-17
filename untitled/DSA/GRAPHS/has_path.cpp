/*
PROBLEM STATEMENT:
Given a Directed Graph and two vertices in it,
check whether there is a path from the first given vertex to second.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

bool dfs(int **edges, int n, int source, int destination, bool *visited) {
    visited[source] = true;
    for (int i = 0; i < n; i++) {
        if (edges[source][i] == 1) {
            if (i == destination) {
                return true;
            } else if (!visited[i]) {
                return dfs(edges, n, source, i, visited);
            }
        }
    }
    return false;
}

bool bfs(int **edges, int n, int source, int destination) {
    bool *visited = new bool[n];
    memset(visited, false, sizeof(visited));
    queue<int> pendingVertices;
    pendingVertices.push(source);
    visited[source] = true;
    while (!pendingVertices.empty()) {
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();
        for (int i = 0; i < n; i++) {
            if (edges[currentVertex][i] == 1) {
                if (i == destination) {
                    return true;
                } else if (!visited[i]) {
                    pendingVertices.push(i);
                    visited[i] = true;
                }
            }
        }
    }
    return false;
}

pair<bool, bool> solve(int **edges, int n, int source, int destination) {
    if (source == destination) {
        return {true, true};
    }
    bool *visited = new bool[n];
    memset(visited, false, sizeof(visited));
    pair<bool, bool> ans;
    ans.first = dfs(edges, n, source, destination, visited);
    ans.second = bfs(edges, n, source, destination);
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
            edges[s][d] = 1;
        }
        int source, destination;
        cin >> source >> destination;
        pair<bool, bool> ans = solve(edges, n, source, destination);
        if (ans.first && ans.second) {
            cout << "\npath exists";
        } else {
            cout << "\npath not exists";
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
6
0 1
0 2
1 2
2 0
2 3
3 3
1 3
4
6
0 1
0 2
1 2
2 0
2 3
3 3
3 0

OUTPUT:
path exists
path not exists
*/