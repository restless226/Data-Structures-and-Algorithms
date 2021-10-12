///*
//PROBLEM STATEMENT:
//Given a weighted, undirected and connected graph of V vertices and E edges,
//Find the shortest distance of all the vertex's from the source vertex S.
//NOTE: The Graph doesn't contain any negative weight cycle.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//vector<int> solve(int V, vector<vector<int>> adj[], int source) {
//    vector<vector<int>> graph(V, vector<int>(V, 0));
//    for (int i = 0; i < V; i++) {
//        for (int j = 0; j < adj[i].size(); j++) {
//            graph[i][adj[i][j][0]] = adj[i][j][1];
//        }
//    }
//    vector<int> distance(V, INT_MAX);
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // min-heap, (dist, fromWhichNode)
//    distance[source] = 0;
//    pq.push({distance[source], source});    // (dist, fromWhichNode)
//    while (!pq.empty()) {
//        int currentVertex = pq.top().second;
//        pq.pop();
//        for (int vertex = 0; vertex < V; vertex++) {
//            if (distance[currentVertex] + graph[currentVertex][vertex] < distance[vertex]
//                && graph[currentVertex][vertex] != 0) {
//                distance[vertex] = distance[currentVertex] + graph[currentVertex][vertex];
//                pq.push({distance[vertex], vertex});
//            }
//        }
//    }
//    return distance;
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
//        int source;
//        cin >> source;
//        vector<int> ans = solve(V, adj, source);
//        for (i = 0; i < V; i++)
//            cout << ans[i] << " ";
//        cout << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//2 1
//0 1 9
//0
//6 5
//0 3 9
//0 5 4
//1 4 4
//2 5 10
//4 5 3
//1
//
//OUTPUT:
//0 9
//11 0 17 20 4 7
//*/