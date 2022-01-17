#include <iostream>
#include <algorithm>

using namespace std;

class Edge {
public:
    int source;
    int dest;
    int weight;
};

bool cmp(Edge a, Edge b) {
    if (a.weight <= b.weight) {
        return true;
    }
    return false;
}


int findParent(int vertex, int *parent) {
    if (parent[vertex] == vertex) {
        return vertex;
    }
    return findParent(parent[vertex], parent);
}

void Kruskal(Edge *input, int n, int E) {
    // sorting input-array based on weights
    sort(input, input + E, cmp);

    Edge *output = new Edge[n - 1];

    int *parent = new int[n];

    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }

    int count = 0;
    int i = 0;

    while (count != n - 1) {
        Edge currentEdge = input[i];

        // Check if we can add currentEdge in MST or not
        int sourceParent = findParent(currentEdge.source, parent);
        int destParent = findParent(currentEdge.dest, parent);

        if (sourceParent != destParent) {
            output[count] = currentEdge;
            count++;

            parent[sourceParent] = destParent;
        }
        i++;
    }

    cout << "Printing MST..." << endl;
    cout << "source" << "   " << "destination" << " " << "weight" << endl;
    for (int j = 0; j < n - 1; j++) {
        if (output[j].source < output[j].dest) {
            cout << output[j].source << "           " << output[j].dest << "                " << output[j].weight
                 << endl;
        } else {
            cout << output[j].dest << "            " << output[j].source << "                " << output[j].weight
                 << endl;
        }
    }

}

int main() {

    int n;  // vertices
    int E;  // edges

    cout << "Enter no of vertices:" << endl;
    cin >> n;

    cout << "Enter no of edges:" << endl;
    cin >> E;

    Edge *input = new Edge[E];

    for (int i = 0; i < E; i++) {
        cout << "Enter source vertex in Edge:" << endl;
        cin >> input[i].source;

        cout << "Enter destination vertex in Edge:" << endl;
        cin >> input[i].dest;

        cout << "Enter weight of Edge:" << endl;
        cin >> input[i].weight;

        cout << '\n';
    }

    Kruskal(input, n, E);

    return 0;
}