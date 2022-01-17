/*
PROBLEM STATEMENT:
Given an undirected, connected and weighted graph G(V, E) with V number of vertices
(which are numbered from 0 to V-1) and E number of edges.
Find and print the Minimum Spanning Tree (MST) using Kruskal's algorithm.
For printing MST follow the steps -
1. In one line, print an edge which is part of MST in the format - v1 v2 w
where, v1 and v2 are the vertices of the edge which is included in MST and whose weight is w.
And v1  <= v2 i.e. print the smaller vertex first while printing an edge.
2. Print V-1 edges in above format in different lines.
Note : Order of different edges doesn't matter.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

struct Edge {
public:
    int source;
    int destination;
    int weight;
};

bool cmp(Edge e1, Edge e2) {
    return e1.weight < e2.weight;
}

int findParent(int v, int *parent) {
    if (parent[v] == v) {
        return v;
    }
    return findParent(parent[v], parent);
}

void printMST(Edge *output, int V) {
    for (int vertex = 0; vertex < V - 1; vertex++) {
        if (output[vertex].source < output[vertex].destination) {
            cout << output[vertex].source << " " << output[vertex].destination << " " << output[vertex].weight << '\n';
        } else {
            cout << output[vertex].destination << " " << output[vertex].source << " " << output[vertex].weight << '\n';
        }
    }
}

void solve(Edge *input, int V, int E) {
    sort(input, input + E, cmp);
    Edge *output = new Edge[V - 1];
    int *parent = new int[V];
    for (int i = 0; i < V; i++) {
        parent[i] = i;    // as each vertex is parent of itself initially
    }
    int count = 0;
    int index = 0;
    while (count < V - 1) {
        Edge currentEdge = input[index];
        // to check if we can add currentEdge in MST or not
        int sourceParent = findParent(currentEdge.source, parent);
        int destParent = findParent(currentEdge.destination, parent);
        // checking whether addition of edge will introduce a cycle or not
        if (sourceParent != destParent) {
            output[count] = currentEdge;
            count++;
            parent[sourceParent] = destParent;
        }
        index++;
    }
    printMST(output, V);
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        Edge *input = new Edge[E];
        for (int i = 0; i < E; i++) {
            int s, d, w;
            cin >> s >> d >> w;
            input[i].source = s;
            input[i].destination = d;
            input[i].weight = w;
        }
        solve(input, V, E);
    }
    return 0;
}

/*
INPUT:
1
6 11
1 3 1
0 1 2
0 3 3
0 2 4
4 5 5
2 3 6
3 5 7
2 1 8
2 4 9
2 5 10
3 4 11

OUTPUT:
1 3 1
0 1 2
0 2 4
4 5 5
3 5 7

*/