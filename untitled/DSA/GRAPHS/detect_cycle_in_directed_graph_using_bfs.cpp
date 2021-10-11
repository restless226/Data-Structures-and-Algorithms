///*
//PROBLEM STATEMENT:
//Given a Directed Graph with V vertices (Numbered from 0 to V-1)
//and E edges, check whether it contains any cycle or not.
//
//PREREQUISITE : Kahn's Algorithm
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//bool solve(int V, vector<int> adj[]) {
//    queue<int> pendingVertices;
//    vector<int> indegree(V, 0);
//    int count = 0;
//    for (int i = 0; i < V; i++) {
//        for (auto &vertex: adj[i]) {
//            indegree[vertex]++;
//        }
//    }
//    for (int vertex = 0; vertex < V; vertex++) {
//        if (indegree[vertex] == 0) {
//            pendingVertices.push(vertex);
//        }
//    }
//    while (!pendingVertices.empty()) {
//        int currentVertex = pendingVertices.front();
//        count++;
//        pendingVertices.pop();
//        for (int &vertex : adj[currentVertex]) {
//            indegree[vertex]--;
//            if (indegree[vertex] == 0) {
//                pendingVertices.push(vertex);
//            }
//        }
//    }
//    return count == V ? false : true;
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
//        cout << solve(V, adj) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//4
//6
//5
//5 3
//3 1
//1 2
//2 4
//4 0
//4
//4
//0 1
//1 2
//2 3
//3 3
//11
//11
//7 0
//0 4
//4 5
//5 6
//6 8
//8 9
//9 3
//3 2
//2 1
//1 10
//4 6
//4 5
//2 0
//0 1
//1 3
//3 1
//1 0
//
//OUTPUT:
//0
//1
//0
//1
//*/