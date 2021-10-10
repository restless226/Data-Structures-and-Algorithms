///*
//PROBLEM STATEMENT:
//Given a connected undirected graph.
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
//void dfs(int **edges, int n, int sv, vector<int> &ans) {
//    bool *visited = new bool[n];
//    memset(visited, false, sizeof(visited));
//    stack<int> pendingVertices;
//    pendingVertices.push(sv);
//    while (!pendingVertices.empty()) {
//        int currentVertex = pendingVertices.top();
//        pendingVertices.pop();
//        if (visited[currentVertex]) {
//            continue;
//        }
//        ans.push_back(currentVertex);
//        visited[currentVertex] = true;
//        for (int i = n - 1; i >= 0; i--) {
//            if (edges[currentVertex][i] == 1 && !visited[i]) {
//                pendingVertices.push(i);
//            }
//        }
//    }
//}
//
//int32_t main() {
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
//        for (int i = 0; i < e; i++) {
//            int s, d;
//            cin >> s >> d;
//            edges[s][d] = edges[d][s] = 1;
//        }
//        vector<int> ans;
//        cout << "\ndfs using stack: ";
//        dfs(edges, n, 0, ans);
//        for (int i = 0; i < n; i++) {
//            cout << ans[i] << " ";
//        }
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
//dfs using stack: 0 2 1 3
//dfs using stack: 0 1 5 4 3 2 6
//*/