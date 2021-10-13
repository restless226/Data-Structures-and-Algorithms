///*
//PROBLEM STATEMENT:
//Given a directed graph and two vertices ‘u’ and ‘v’ in it.
//Find the number of possible walks from ‘u’ to ‘v’
//with exactly k edges on the walk modulo 10^9+7.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int dfs(vector<vector<int>> &adj, vector<vector<int>> dp, int u, int v, int k, int steps) {
//    if (dp[u][steps] != -1) return dp[u][steps];
//    if (u == v && k == steps) return 1;
//    if (steps >= k) return 0;
//    int count = 0;
//    for (auto &vertex:adj[u]) {
//        count += dfs(adj, dp, vertex, v, k, steps + 1);
//    }
//    return dp[u][steps] = count;
//}
//
//int solve(vector<vector<int>> &graph, int u, int v, int k) {
//    int n = graph.size();
//    vector<vector<int>> adj;
//    for (int i = 0; i < n; i++) {
//        vector<int> temp;
//        for (int j = 0; j < n; j++) {
//            if (graph[i][j]) temp.push_back(j);
//        }
//        adj.push_back(temp);
//    }
//    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
//    return dfs(adj, dp, u, v, k, 0);
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        vector<vector<int>> graph(n, vector<int>(n, 0));
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                cin >> graph[i][j];
//            }
//        }
//        int u, v, k;
//        cin >> u >> v >> k;
//        cout << solve(graph, u, v, k) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//4
//0 1 1 1
//0 0 0 1
//0 0 0 1
//0 0 0 0
//0 3 2
//5
//0 0 0 0 1
//1 1 1 1 1
//1 0 1 0 1
//0 0 1 0 0
//1 0 0 1 1
//2 4 2
//
//OUTPUT:
//2
//3
//*/