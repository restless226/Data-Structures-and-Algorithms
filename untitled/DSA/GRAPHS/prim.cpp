///*
//PROBLEM STATEMENT:
//Given a weighted, undirected and connected graph of V vertices and E edges.
//The task is to find the sum of weights of the edges of the Minimum Spanning Tree.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int V, vector<vector<int>> adj[]) {
//    vector<int> key(V, INT_MAX);
//    vector<bool> visited(V, false);
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//    int sum = 0;
//    key[0] = 0;
//    pq.push({0, 0});
//    while (!pq.empty()) {
//        int u = pq.top().second;
//        pq.pop();
//        if (visited[u]) continue;
//        visited[u] = true;
//        sum += key[u];
//        for (auto &adjacent:adj[u]) {
//            int v = adjacent[0];
//            int w = adjacent[1];
//            if (!visited[v] && w < key[v]) {
//                key[v] = w;
//                pq.push({key[v], v});
//            }
//        }
//    }
//    return sum;
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
//        cout << solve(V, adj) << "\n";
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
//4
//19
//35
//28
//*/