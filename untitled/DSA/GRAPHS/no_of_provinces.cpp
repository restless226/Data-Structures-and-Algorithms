///*
//PROBLEM STATEMENT:
//Given a graph with V vertices. Find the number of Provinces.
//Note: A province is a group of directly or indirectly connected cities and no other cities outside of the group.
//
//Expected Time Complexity: O(V2)
//Expected Auxiliary Space: O(V)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//void dfs(int V, vector<vector<int>> &adj, int i, vector<bool> &visited) {
//    visited[i] = true;
//    for (int j = 0; j < V; j++) {
//        if (adj[i][j] == 1 && !visited[j]) {
//            dfs(V, adj, j, visited);
//        }
//    }
//}
//
//int solve(vector<vector<int>> &adj, int V) {
//    vector<bool> visited(V, false);
//    int count = 0;
//    for (int i = 0; i < V; i++) {
//        if (!visited[i]) {
//            dfs(V, adj, i, visited);
//            count++;
//        }
//    }
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
//        int V, x;
//        cin >> V;
//        vector<vector<int>> adj;
//        for (int i = 0; i < V; i++) {
//            vector<int> temp;
//            for (int j = 0; j < V; j++) {
//                cin >> x;
//                temp.push_back(x);
//            }
//            adj.push_back(temp);
//        }
//        cout << solve(adj, V) << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//3
//1 0 1
//0 1 0
//1 0 1
//
//OUTPUT:
//2
//*/