///*
//PROBLEM STATEMENT:
//Given a weighted, undirected and connected graph of V vertices and E edges.
//The task is to find the sum of weights of the edges of the Minimum Spanning Tree.
//
//Expected Time Complexity: O(ElogV).
//Expected Auxiliary Space: O(V2).
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//struct Edge {
//public:
//    int u;
//    int v;
//    int w;
//};
//
//bool cmp(Edge e1, Edge e2) {
//    return e1.w < e2.w;
//}
//
//int findParent(int vertex, vector<int> parent) {
//    if (parent[vertex] == vertex) {
//        return vertex;
//    }
//    return parent[vertex] = findParent(parent[vertex], parent);
//}
//
//void printMST(vector<Edge> &edge) {
//    for (auto &vertex:edge) {
//        if (vertex.u < vertex.v) {
//            cout << vertex.u << " " << vertex.v << " " << vertex.w << '\n';
//        } else {
//            cout << vertex.v << " " << vertex.u << " " << vertex.w << '\n';
//        }
//    }
//    cout << '\n';
//}
//
//void union_by_rank(int u, int v, vector<int> &parent, vector<int> &rank) {
//    u = findParent(u, parent);
//    v = findParent(v, parent);
//    if (rank[u] < rank[v]) {
//        parent[u] = v;
//    } else if (rank[v] < rank[u]) {
//        parent[v] = u;
//    } else {
//        parent[v] = u;
//        rank[u]++;
//    }
//}
//
//int solve(int V, vector<vector<int>> adj[]) {
//    vector<vector<int>> graph(V, vector<int>(V, -1));
//    vector<Edge> input;
//    for (int i = 0; i < V; i++) {
//        for (auto &adjacent:adj[i]) {
//            graph[i][adjacent[0]] = adjacent[1];
//        }
//    }
//    for (int i = 0; i < V; i++) {
//        for (int j = i; j < V; j++) {
//            if (graph[i][j] != -1) input.push_back({i, j, graph[i][j]});
//        }
//    }
//    sort(input.begin(), input.end(), cmp);
//    cout << "\nINPUT ARRAY...\n";
//    printMST(input);
//    vector<int> rank(V, 0);
//    vector<int> parent(V);
//    for (int i = 0; i < V; i++) {
//        parent[i] = i;    // as each vertex is parent of itself initially
//    }
//    int cost = 0;
//    vector<Edge> output;
//    for (auto &currentEdge : input) {
//        int sourceParent = findParent(currentEdge.u, parent);
//        int destParent = findParent(currentEdge.v, parent);
//        // checking whether addition of edge will introduce a cycle or not
//        if (sourceParent != destParent) {
//            cost += currentEdge.w;
//            output.push_back(currentEdge);
//            union_by_rank(currentEdge.u, currentEdge.v, parent, rank);
//        }
//    }
//    cout << "\nOUTPUT ARRAY...\n";
//    printMST(output);
//    return cost;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int V, E;
//        cin >> V >> E;
//        vector<vector<int>> adj[V];
//        int i = 0;
//        while (i++ < E) {
//            int u, v, w;
//            cin >> u >> v >> w;
//            vector<int> t1, t2;
//            t1.push_back(v);
//            t1.push_back(w);
//            adj[u].push_back(t1);
//            t2.push_back(u);
//            t2.push_back(w);
//            adj[v].push_back(t2);
//        }
//        cout << solve(V, adj) << "\n\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//4
//3 3
//0 1 5
//1 2 3
//0 2 1
//6 11
//1 3 1
//0 1 2
//0 3 3
//0 2 4
//4 5 5
//2 3 6
//3 5 7
//2 1 8
//2 4 9
//2 5 10
//3 4 11
//7 7
//0 1 3
//1 3 3
//1 5 10
//2 4 6
//2 6 9
//3 6 8
//4 5 6
//6 5
//0 3 9
//0 4 2
//0 5 2
//1 3 5
//2 3 10
//
//OUTPUT:
//INPUT ARRAY...
//0 2 1
//1 2 3
//0 1 5
//
//
//OUTPUT ARRAY...
//0 2 1
//1 2 3
//
//4
//
//
//INPUT ARRAY...
//1 3 1
//0 1 2
//0 3 3
//0 2 4
//4 5 5
//2 3 6
//3 5 7
//1 2 8
//2 4 9
//2 5 10
//3 4 11
//
//
//OUTPUT ARRAY...
//1 3 1
//0 1 2
//0 2 4
//4 5 5
//3 5 7
//
//19
//
//
//INPUT ARRAY...
//1 3 3
//0 1 3
//4 5 6
//2 4 6
//3 6 8
//2 6 9
//1 5 10
//
//
//OUTPUT ARRAY...
//1 3 3
//0 1 3
//4 5 6
//2 4 6
//3 6 8
//2 6 9
//
//35
//
//
//INPUT ARRAY...
//0 5 2
//0 4 2
//1 3 5
//0 3 9
//2 3 10
//
//
//OUTPUT ARRAY...
//0 5 2
//0 4 2
//1 3 5
//0 3 9
//2 3 10
//
//28
//*/