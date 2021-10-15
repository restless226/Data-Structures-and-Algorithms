///*
//PROBLEM STATEMENT:
//Given a Directed Graph with V vertices and E edges,
//Find the members of strongly connected components in the graph.
//
//A directed graph is strongly connected if there is a path between all pairs of vertices.
//A strongly connected component (SCC) of a directed graph is a maximal strongly connected subgraph.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void dfs(vector<int> adj[], int node, vector<bool> &visited, stack<int> &stack) {
//    visited[node] = true;
//    for (auto &vertex : adj[node]) {
//        if (!visited[vertex]) {
//            dfs(adj, vertex, visited, stack);
//        }
//    }
//    stack.push(node);
//}
//
//void rev_dfs(int node, vector<bool> &visited, vector<int> transpose[], vector<int> &temp) {
//    temp.push_back(node);
//    visited[node] = true;
//    for (auto &vertex:transpose[node]) {
//        if (!visited[vertex]) rev_dfs(vertex, visited, transpose, temp);
//    }
//}
//
//int solve(int V, vector<int> adj[], vector<vector<int>> &ans) {
//    vector<bool> visited(V, false);
//    stack<int> stack;
//    for (int i = 0; i < V; i++) {
//        if (!visited[i]) {
//            dfs(adj, i, visited, stack);
//        }
//    }
//    vector<int> transpose[V];
//    for (int i = 0; i < V; i++) {
//        visited[i] = false;
//        for (auto &node:adj[i]) {
//            transpose[node].push_back(i);
//        }
//    }
//    vector<int> temp;
//    while (!stack.empty()) {
//        int node = stack.top();
//        stack.pop();
//        if (!visited[node]) {
//            rev_dfs(node, visited, transpose, temp);
//            if (!temp.empty())ans.push_back(temp);
//            sort(temp.begin(), temp.end());
//            temp.clear();
//        }
//    }
//    sort(ans.begin(), ans.end());
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
//        vector<vector<int>> ans;
//        solve(V, adj, ans);
//        for (int i = 0; i < ans.size(); i++) {
//            for (int j = 0; j < ans[i].size(); j++) {
//                if (j == ans[i].size() - 1)
//                    cout << ans[i][j];
//                else
//                    cout << ans[i][j] << " ";
//            }
//            cout << ',';
//        }
//        cout << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//5
//5
//1 0
//0 2
//2 1
//0 3
//3 4
//5
//5
//2 0
//0 1
//1 3
//3 4
//1 2
//
//OUTPUT:
//0 1 2,3,4,
//0 2 1,3,4,
//*/