/*
Problem Statement : Given two vertices sv,ev of a graph
To check whether there exists a path between them
if path exists then return the path from DFS
else return -1 or false
*/

#include <iostream>
#include <queue>

using namespace std;


vector<int> check_path(int **edges, int n, int sv, int ev, bool *visited) {
    vector<int> path;
    visited[sv] = true;
    for (int i = 0; i < n; i++) {
        if (i == sv) {
            continue;
        }
        if (edges[sv][i] == 1) {
            if (visited[i]) {
                continue;
            }
            check_path(edges, n, i, ev, visited);
        }
    }
}


int main() {
    int n;  // no of vertices
    int e;  // no of edges

    cout << "Enter no of vertices:" << endl;
    cin >> n;
    cout << "Enter no of edges:" << endl;
    cin >> e;

    int **edges = new int *[n];

    // to clear garbage values
    for (int i = 0; i < n; i++) {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++) {
            edges[i][j] = 0;
        }
    }

    // making up adjecency matrix
    for (int i = 0; i < e; i++) {
        int f, s;
        cout << "Enter first vertex in edge " << i + 1 << ":" << endl;
        cin >> f;
        cout << "Enter second vertex in edge " << i + 1 << ":" << endl;
        cin >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    int sv;
    int ev;

    cout << "Enter starting vertex:" << endl;
    cin >> sv;
    cout << "Enter ending vertex:" << endl;
    cin >> ev;

    bool *visited = new bool[n];
    for (int i = 0; i < n; ++i) {
        visited[i] = false;
    }

    check_path(edges, n, sv, ev, visited);

    return 0;
}