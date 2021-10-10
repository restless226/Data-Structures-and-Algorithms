///*
//PROBLEM STATEMENT:
//Given a disconnected undirected graph.
//1. Perform a Depth First Traversal of the graph.
//2. Perform a Breadth First Traversal of the graph.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//// Time Complexity: O(V + E), Space Complexity: O(V)
//void printBFS(int **edges, int n, int sv, bool * visited) {
//    queue<int> pendingVertices;
//    pendingVertices.push(sv);
//    visited[sv] = true;
//    while (!pendingVertices.empty()) {
//        int currentVertex = pendingVertices.front();
//        pendingVertices.pop();
//        visited[currentVertex] = true;
//        cout << currentVertex << " ";
//        for (int i = 0; i < n; i++) {
//            if (edges[currentVertex][i] == 1 && !visited[i]) {
//                pendingVertices.push(i);
//                visited[i] = true;
//            }
//        }
//    }
//}
//
//// Time Complexity: O(V + E), Space Complexity: O(V)
//void printDFS(int **edges, int n, int sv, bool *visited) {
//    cout << sv << " ";
//    visited[sv] = true;
//    for (int i = 0; i < n; i++) {
//        if (edges[sv][i] == 1 && !visited[i]) {
//            printDFS(edges, n, i, visited);
//        }
//    }
//}
//
//// bfs for a disconnected graph
//void BFS(int **edges, int n) {
//    bool * visited = new bool[n];
//    memset(visited,false,sizeof(visited));
//    for (int i = 0; i < n; i++) {
//        if(!visited[i]){
//            printBFS(edges,n,i,visited);
//        }
//    }
//}
//
//// dfs for a disconnected graph
//void DFS(int **edges, int n) {
//    bool * visited = new bool[n];
//    memset(visited,false,sizeof(visited));
//    for (int i = 0; i < n; i++) {
//        if(!visited[i]){
//            printDFS(edges,n,i,visited);
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
//        int n;  // no of vertices
//        int e;  // no of edges
//        cin >> n >> e;
//        int **edges = new int *[n];    // Adjacency Matrix
//        for (int i = 0; i < n; i++) {
//            edges[i] = new int[n];
//            for (int j = 0; j < n; j++) {
//                edges[i][j] = 0;
//            }
//        }
//
//        for (int i = 0; i < e; i++) {
//            int s, d;
//            cin >> s >> d;
//            edges[s][d] = edges[d][s] = 1;
//        }
//
//        cout << "\nDFS: ";
//        DFS(edges, n);
//        cout << "\nBFS: ";
//        BFS(edges, n);
//
//        for (int i = 0; i < n; i++) {
//            delete[] edges[i];
//        }
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//7
//5
//0 2
//0 3
//2 3
//1 4
//5 6
//
//OUTPUT:
//DFS: 0 2 3 1 4 5 6
//BFS: 0 2 3 1 4 5 6
//*/