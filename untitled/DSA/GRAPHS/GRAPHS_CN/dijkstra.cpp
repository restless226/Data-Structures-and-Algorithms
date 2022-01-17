/*
PROBLEM STATEMENT:
Given an undirected, connected and weighted graph G(V, E)
with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
Find and print the shortest distance from the source vertex (i.e. Vertex 0)
to all other vertices (including source vertex also) using Dijkstra's Algorithm.
Print the ith vertex number and the distance from source in one line separated by space.
Print different vertices in different lines.

Time Complexity: O(n2)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int findMinVertex(vector<int> distance, vector<bool> &visited, int n) {
    int minVertex = -1;
    for (int i = 0; i < n; ++i) {
        if (!visited[i] && (minVertex == -1 || distance[i] < distance[minVertex])) {
            minVertex = i;
        }
    }
    return minVertex;
}

vector<int> solve(int **edges, int n) {
    vector<bool> visited(n, false);
    vector<int> distance(n, INT_MAX);
    distance[0] = 0;    // source vertex is 0
    for (int i = 0; i < n - 1; ++i) {
        int minVertex = findMinVertex(distance, visited, n);
        visited[minVertex] = true;
        for (int j = 0; j < n; ++j) {
            if (edges[minVertex][j] != 0 && !visited[j]) {
                int currentDistance = distance[minVertex] + edges[minVertex][j];
                if (currentDistance < distance[j]) {
                    distance[j] = currentDistance;
                }
            }
        }
    }
    return distance;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, e;
        cin >> n >> e;
        int **edges = new int *[n];
        for (int i = 0; i < n; i++) {
            edges[i] = new int[n];
            for (int j = 0; j < n; j++) {
                edges[i][j] = 0;
            }
        }
        for (int i = 0; i < e; i++) {
            int f, s, weight;
            cin >> f >> s >> weight;
            edges[f][s] = edges[s][f] = weight;
        }
        vector<int> distance = solve(edges, n);
        for (auto &vertex:distance) {
            cout << vertex << " ";
        }
        cout << '\n';
        for (int i = 0; i < n; i++) {
            delete[] edges[i];
        }
        delete[] edges;
    }
    return 0;
}
/*
INPUT:
2
5
7
0 1 4
0 2 8
1 3 5
1 2 2
2 3 5
2 4 9
3 4 4
4
4
0 1 3
0 3 5
1 2 1
2 3 8

OUTPUT:
0 4 6 9 13
0 3 4 5
*/
