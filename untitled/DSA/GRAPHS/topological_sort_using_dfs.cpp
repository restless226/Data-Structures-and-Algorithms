///*
//PROBLEM STATEMENT:
//Given a Directed Acyclic Graph (DAG) with V vertices and E edges,
//Find any Topological Sorting of that Graph.
//
//Expected Time Complexity: O(V + E)
//Expected Auxiliary Space: O(V)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void dfs(vector<int> adj[], int node, bool *visited, vector<int> &ans) {
//    visited[node] = true;
//    for (auto &vertex : adj[node]) {
//        if (!visited[vertex]) {
//            dfs(adj, vertex, visited, ans);
//        }
//    }
//    ans.push_back(node);
//}
//
//void solve(int V, vector<int> adj[], vector<int> &ans) {
//    bool *visited = new bool[V];
//    memset(visited, false, sizeof(visited));
//    for (int i = 0; i < V; i++) {
//        if (!visited[i]) {
//            dfs(adj, i, visited, ans);
//        }
//    }
//    reverse(ans.begin(), ans.end());
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int N, E;
//        cin >> E >> N;
//        int u, v;
//        vector<int> adj[N];
//        for (int i = 0; i < E; i++) {
//            cin >> u >> v;
//            adj[u].push_back(v);
//        }
//        vector<int> ans;
//        solve(N, adj, ans);
//        for (int &vertex:ans) {
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
//3
//4
//3 0
//1 0
//2 0
//6
//6
//2 3
//3 1
//4 0
//4 1
//5 0
//5 2
//
//OUTPUT:
//3 2 1 0
//5 4 2 3 1 0
//*/