///*
//PROBLEM STATEMENT:
//Given an undirected Connected graph of V vertices and E edges.
//A critical connection is an edge that, if removed, will make some nodes unable to reach some other nodes.
//Find all critical connections in the graph.
//Note: There are many possible orders for the answer. You are supposed to print the edges in sorted order,
//and also an edge should be in sorted order too. So if there's an edge between node 1 and 2,
//you should print it like (1,2) and not (2,1).
//
//Expected Time Complexity: O(V + E)
//Expected Auxiliary Space: O(V)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//void dfs(vector<int> adj[], bool *visited, int node, int parent, vector<int> &tin,
//         vector<int> &low, int timer, vector<vector<int>> &ans) {
//    visited[node] = true;
//    tin[node] = low[node] = timer++;
//    for (auto &vertex:adj[node]) {
//        if (vertex == parent) continue;
//        if (!visited[vertex]) {
//            dfs(adj, visited, vertex, node, tin, low, timer, ans);
//            low[node] = min(low[node], low[vertex]);
//            if (low[vertex] > tin[node]) {
//                vector<int> temp;
//                temp.push_back(node);
//                temp.push_back(vertex);
//                sort(temp.begin(), temp.end());
//                ans.push_back(temp);
//            }
//        } else {
//            low[node] = min(low[node], tin[vertex]);
//        }
//    }
//}
//
//vector<vector<int>> solve(int V, vector<int> adj[]) {
//    bool *visited = new bool[V];
//    memset(visited, false, sizeof(visited));
//    vector<int> tin(V, -1);
//    vector<int> low(V, -1);
//    vector<vector<int>> ans;
//    int timer = 0;
//    for (int i = 0; i < V; i++) {
//        if (!visited[i]) {
//            dfs(adj, visited, i, -1, tin, low, timer, ans);
//        }
//    }
//    sort(ans.begin(), ans.end());
//    return ans;
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
//            adj[v].push_back(u);
//        }
//        vector<vector<int>> ans = solve(V, adj);
//        for (int i = 0; i < ans.size(); i++)
//            cout << ans[i][0] << " " << ans[i][1] << endl;
//        cout << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//3
//2
//0 1
//0 2
//8
//11
//0 1
//0 3
//0 4
//0 7
//1 3
//1 5
//1 7
//2 7
//3 4
//5 6
//5 7
//
//OUTPUT:
//0 1
//0 2
//
//2 7
//5 6
//*/