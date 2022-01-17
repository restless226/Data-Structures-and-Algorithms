/*
Name: Rohit Pendse
Roll no: 33358
Subject: LP Practical Examination
Assignment: Bellman Ford (Assignment no 6)
*/

#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define pii pair<int, int>
#define vi vector<int>

bool bellman(vi &distance, vi &parent, vector<pair<int, pii>> &edge_list, int vertices, int s) {
    distance[s] = 0;
    // relaxing all edges (n - 1 times)
    for (int i = 1; i <= vertices - 1; i++) {
        for (auto &edge: edge_list) {
            int u, v, cost;
            u = edge.first;
            v = edge.second.first;
            cost = edge.second.second;
            if (distance[u] != INT_MAX && distance[u] + cost < distance[v]) {
                distance[v] = distance[u] + cost;
                parent[v] = u;
            }
        }
    }

    // checking for negative weight cycle
    for (auto &edge: edge_list) {
        int u, v, cost;
        u = edge.first;
        v = edge.second.first;
        cost = edge.second.second;
        if (distance[u] != INT_MAX && distance[u] + cost < distance[v]) {
            return false;
        }
    }
    return true;
}

void printPath(int s, int d, vector<int> &parent) {
    if (parent[d] == d) {
        cout << d;
        return;
    }
    printPath(s, parent[d], parent);
    cout << "=>" << d;
}

int32_t main() {
    cout << "Enter no of test cases:\n";
    int t;
    cin >> t;
    while (t--) {
        int edges, vertices;
        cout << "Enter no of vertices:";
        cin >> vertices;
        cout << "Enter no of edges:";
        cin >> edges;

        vector<pair<int, pii>> edge_list;

        cout << "Enter all edges in sv dv cost format:\n";
        while (edges--) {
            int s, d, cost;
            cin >> s >> d >> cost;
            edge_list.push_back({s, {d, cost}});
        }

        vi distance(vertices + 1);
        vi parent(vertices + 1);

        for (int i = 0; i <= vertices; i++) {
            distance[i] = INT_MAX;  // since no vertex is explored yet
            parent[i] = i;  // initially every vertex is its parent
        }

        if (bellman(distance, parent, edge_list, vertices, 1)) {
            for (int i = 2; i <= vertices; i++) {
                cout << "path from source vertex 1 to destination vertex " << i << " is: ";
                printPath(1, i, parent);
                cout << "\nMinimum distance: " << distance[i] << '\n';
            }
        } else {
            cout << "[WARNING!!!] Negative weight cycle exists, hence no shortest path possible\n";
        }
    }
    return 0;
}


/*
TESTCASE 1: (edges have positive cost)
Enter no of vertices:6
Enter no of edges:7
Enter all edges in sv dv cost format:
1 2 3
1 4 5
2 3 7
2 5 2
3 6 9
4 5 4
5 6 6

path from source vertex 1 to destination vertex 2 is: 1=>2
Minimum distance: 3
path from source vertex 1 to destination vertex 3 is: 1=>2=>3
Minimum distance: 10
path from source vertex 1 to destination vertex 4 is: 1=>4
Minimum distance: 5
path from source vertex 1 to destination vertex 5 is: 1=>2=>5
Minimum distance: 5
path from source vertex 1 to destination vertex 6 is: 1=>2=>5=>6
Minimum distance: 11


TESTCASE 2: (Graph having edges with negative cost)
Enter no of vertices:7
Enter no of edges:10
Enter all edges in sv dv cost format:
1 2 6
1 3 5
1 4 5
3 2 -2
4 3 -2
3 5 1
2 5 -1
4 6 -1
6 7 3
5 7 3

path from source vertex 1 to destination vertex 2 is: 1=>4=>3=>2
Minimum distance: 1
path from source vertex 1 to destination vertex 3 is: 1=>4=>3
Minimum distance: 3
path from source vertex 1 to destination vertex 4 is: 1=>4
Minimum distance: 5
path from source vertex 1 to destination vertex 5 is: 1=>4=>3=>2=>5
Minimum distance: 0
path from source vertex 1 to destination vertex 6 is: 1=>4=>6
Minimum distance: 4
path from source vertex 1 to destination vertex 7 is: 1=>4=>3=>2=>5=>7
Minimum distance: 3


TESTCASE 3: (graph has negative weight cycle)
Enter no of test cases:
1
Enter no of vertices:4
Enter no of edges:4
Enter all edges in sv dv cost format:
1 2 5
2 3 1
3 4 2
4 2 -4

[WARNING] Negative weight cycle exists
 no shortest path possible

TESTCASE 4: (EXTRA)
Enter no of test cases:
1
Enter no of vertices:6
Enter no of edges:7
Enter all edges in sv dv cost format:
4 3 6
6 4 1
1 2 5
2 6 -3
2 3 -2
4 5 -2
3 5 3
path from source vertex 1 to destination vertex 2 is: 1=>2
Minimum distance: 5
path from source vertex 1 to destination vertex 3 is: 1=>2=>3
Minimum distance: 3
path from source vertex 1 to destination vertex 4 is: 1=>2=>6=>4
Minimum distance: 3
path from source vertex 1 to destination vertex 5 is: 1=>2=>6=>4=>5
Minimum distance: 1
path from source vertex 1 to destination vertex 6 is: 1=>2=>6
Minimum distance: 2
*/