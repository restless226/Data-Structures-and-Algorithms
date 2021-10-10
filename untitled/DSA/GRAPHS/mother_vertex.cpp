///*
//PROBLEM STATEMENT:
//Given a Directed Graph, find a Mother Vertex in the Graph (if present).
//A Mother Vertex is a vertex through which we can reach all the other vertices of the Graph.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void dfs(vector<int> adj[], int sv, bool *visited, vector<int> &ans) {
//    ans.push_back(sv);
//    visited[sv] = true;
//    for (auto &vertex : adj[sv]) {
//        if (!visited[vertex]) {
//            dfs(adj, vertex, visited, ans);
//        }
//    }
//}
//
//int solve(int V, vector<int> adj[]) {
//    bool *visited = new bool[V];
//    vector<int> ans;
//    for (int i = 0; i < V; i++) {
//        memset(visited, 0, sizeof(visited));
//        dfs(adj, i, visited, ans);
//        if (ans.size() == V) {
//            return i;
//        }
//        ans.clear();
//    }
//    return -1;
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
//        }
//        int ans = solve(V, adj);
//        cout << ans << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//5 5
//1 0
//0 2
//2 1
//2 3
//3 4
//
//OUTPUT:
//0
//*/