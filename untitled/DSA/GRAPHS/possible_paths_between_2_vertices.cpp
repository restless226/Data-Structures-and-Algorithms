///*
//PROBLEM STATEMENT:
//Given a Directed Graph. Count the total number of ways or paths
//that exist between two vertices in the directed graph.
//These paths doesnt contain any cycle.
//NOTE: Graph doesn't contain multiple edges, self loop and cycles and
//the two vertices( source and destination) are denoted in the example.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void dfs(vector<int> adj[], int source, int destination, bool *visited, int &count) {
//    if (source == destination) {
//        count++;
//        return;
//    }
//    visited[source] = true;
//    for (auto &vertex: adj[source]) {
//        if (!visited[vertex]) {
//            dfs(adj, vertex, destination, visited, count);
//        }
//    }
//    visited[source] = false;
//}
//
//int solve(int V, vector<int> adj[], int source, int destination) {
//    bool *visited = new bool[V];
//    memset(visited, false, sizeof(visited));
//    int count = 0;
//    dfs(adj, source, destination, visited, count);
//    return count;
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
//        vector<int> adj[V];
//        for (int i = 0; i < E; i++) {
//            int u, v;
//            cin >> u >> v;
//            adj[u].push_back(v);
//            // adj[v].push_back(u);
//        }
//        int source, destination;
//        cin >> source >> destination;
//        cout << solve(V, adj, source, destination) << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//5
//7
//0 1
//0 2
//0 4
//1 3
//1 4
//2 4
//3 2
//0 4
//4
//5
//0 1
//0 3
//1 2
//1 3
//2 3
//0 3
//
//OUTPUT:
//4
//3
//*/