/*
PROBLEM STATEMENT:
Given an undirected graph G(V, E) and two vertices v1 and v2(as integers),
find and print the path from v1 to v2 (if exists).
Print -1 if there is no path between v1 and v2.
Find the path using BFS and print the shortest path available.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
Print the path in reverse order.
That is, print v2 first, then intermediate vertices and v1 at last.
Note : Save the input graph in Adjacency Matrix.
Input Format :
Line 1: Two Integers V and E (separated by space)
Next E lines : Two integers a and b, denoting that there exists an edge
between vertex a and vertex b (separated by space)
Line (E+2) : Two integers v1 and v2 (separated by space)
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;


void bfs(int **edges, int n, int source, int destination, vector<int> &ans) {
    bool *visited = new bool[n];
    memset(visited, false, sizeof(visited));
    queue<int> pendingVertices;
    unordered_map<int, int> mp;
    bool flag = false;
    pendingVertices.push(source);
    visited[source] = true;
    while (!pendingVertices.empty()) {
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();
        for (int i = 0; i < n; i++) {
            if (edges[currentVertex][i] == 1) {
                if (i == destination) {
                    flag = true;
                    break;
                } else if (!visited[i]) {
                    pendingVertices.push(i);
                    mp[i] = currentVertex;
                    visited[i] = true;
                }
            }
        }
    }
    if (flag) {
        ans.push_back(destination);
        while (destination != source) {
            ans.push_back(mp[destination]);
            destination = mp[destination];
        }
    }
}

void solve(int **edges, int n, int source, int destination, vector<int> &ans) {
    if (source == destination) {
        ans.push_back(source);
        return;
    }
    bfs(edges, n, source, destination, ans);
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
        vector<int> path;
        solve(edges, n, source, destination, path);
        if (path.empty()) {
            cout << "\npath does not exist";
        } else {
            for (auto itr:path) {
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