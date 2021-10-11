///*
//PROBLEM STATEMENT:
//Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
//Note: One can move from node u to node v only if there's an edge from u to v and
//find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the graph.
//Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void bfs(vector<int> adj[], int sv, vector<int> &ans, bool visited[]) {
//    queue<int> pendingVertices;
//    pendingVertices.push(sv);
//    visited[sv] = true;
//    while (!pendingVertices.empty()) {
//        int currentVertex = pendingVertices.front();
//        visited[currentVertex] = true;
//        ans.push_back(currentVertex);
//        pendingVertices.pop();
//        for (int &vertex : adj[currentVertex]) {
//            if (!visited[vertex]) {
//                pendingVertices.push(vertex);
//                visited[vertex] = true;
//            }
//        }
//    }
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
//        vector<int> ans;
//        bool visited[V];
//        memset(visited, -1, V);
//        bfs(adj, 0, ans, visited);
//        for (int &vertex : ans) {
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
//4
//3
//0 2
//2 1
//1 3
//7
//7
//0 1
//0 2
//1 5
//4 5
//3 4
//2 3
//2 6
//
//OUTPUT:
//0 2 1 3
//0 1 2 5 3 6 4
//*/