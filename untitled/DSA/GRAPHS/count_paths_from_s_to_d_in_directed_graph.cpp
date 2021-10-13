///*
//PROBLEM STATEMENT:
//Given a directed acyclic graph(DAG) with n nodes labeled from 0 to n-1.
//Given edges, s and d ,count the number of ways to reach from s to d.
//There is a directed Edge from vertex edges[i][0] to the vertex edges[i][1].
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void dfs(vector<vector<int>> &edges, int n, int s, int d, vector<bool> &visited, int &count) {
//    visited[s] = true;
//    if (s == d) {
//        count++;
//        return;
//    }
//    for (int i = 0; i < edges.size(); i++) {
//        if (edges[i][0] == s) dfs(edges, n, edges[i][1], d, visited, count);
//    }
//    visited[s] = false;
//}
//
//int solve(vector<vector<int>> &edges, int n, int s, int d) {
//    vector<bool> visited(n, false);
//    int count = 0;
//    dfs(edges, n, s, d, visited, count);
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
//        int n, m, s, d;
//        cin >> n >> m >> s >> d;
//        vector<vector<int>> edges;
//        for (int i = 0; i < m; i++) {
//            int u, v;
//            cin >> u >> v;
//            edges.push_back({u, v});
//        }
//        cout << solve(edges, n, s, d) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//4 4 0 2
//0 1
//0 3
//1 2
//3 2
//
//OUTPUT:
//2
//*/