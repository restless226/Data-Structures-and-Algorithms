#include <iostream>

using namespace std;

int findMinVertex(int *distance, bool *visited, int n) {
    int minVertex = -1;

    for (int i = 0; i < n; ++i) {
        if (!visited[i] && (minVertex == -1 || distance[i] < distance[minVertex])) {
            minVertex = i;
        }
    }

    return minVertex;
}

void dijikstras(int **edges, int n) {
    bool *visited = new bool[n];
    int *distance = new int[n];

    for (int i = 0; i < n; ++i) {
        visited[i] = false;
        distance[i] = INT_MAX;
    }

    // assuming source-vertex as 0
    distance[0] = 0;


    for (int i = 0; i < n - 1; i++) {
        int minVertex = findMinVertex(distance, visited, n);

        visited[minVertex] = true;

        // Explore neighbours of minVertex
        for (int j = 0; j < n; ++j) {
            if (edges[minVertex][j] != 0 && !visited[j]) {
                int currentDistance = distance[minVertex] + edges[minVertex][j];

                if (currentDistance < distance[j]) {
                    distance[j] = currentDistance;
                }
            }
        }
    }

    cout << "Printing min distance from source vertex '0' to every other vertex is..." << endl;
    for (int i = 0; i < n; ++i) {
        cout << i << " " << distance[i] << endl;
    }

    delete[] distance;
    delete[] visited;


}

int main() {
    int n, e;

    cout << "Enter no of vertices:" << endl;
    cin >> n;

    cout << "Enter no of edges:" << endl;
    cin >> e;
    cout << endl;

    int **edges = new int *[n];   // adjacency matrix

    for (int i = 0; i < n; i++) {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++) {
            edges[i][j] = 0;
        }
    }

    cout << "Enter edges:" << endl;

    for (int i = 0; i < e; i++) {
        int f, s, weight;

        cout << "Enter first vertex of edge:" << endl;
        cin >> f;

        cout << "Enter second vertex of edge:" << endl;
        cin >> s;

        cout << "Enter weight of edge:" << endl;
        cin >> weight;
        cout << endl;

        edges[f][s] = edges[s][f] = weight; // filling entries in adjencency matrix
    }

    dijikstras(edges, n);

    for (int i = 0; i < n; i++) {
        delete edges[i];
    }

    delete[] edges;

    return 0;
}