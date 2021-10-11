///*
//PROBLEM STATEMENT:
//Given a connected undirected graph. Perform a Depth First Traversal of the graph.
//Note: Use recursive approach to find the DFS traversal of the graph
//starting from the 0th vertex from left to right according to the graph..
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void dfs(vector<int> adj[], int sv, vector<int> &ans, bool visited[]) {
//    ans.push_back(sv);
//    visited[sv] = true;
//    for (auto &vertex : adj[sv]) {
//        if (!visited[vertex]) {
//            dfs(adj, vertex, ans, visited);
//        }
//    }
//}
//
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
//            adj[v].push_back(u);
//        }
//
//        vector<int> ans;
//        bool visited[V];
//        memset(visited, -1, V);
//        dfs(adj, 0, ans, visited);
//        for (int &vertex : ans) {
//            cout << vertex << " ";
//        }
//        cout << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//4
//3
//0 2
//2 1
//1 3
//7
//7
//0 1
//0 2
//1 5
//4 5
//3 4
//2 3
//2 6
//
//OUTPUT:
//0 2 1 3
//0 1 5 4 3 2 6
//*/