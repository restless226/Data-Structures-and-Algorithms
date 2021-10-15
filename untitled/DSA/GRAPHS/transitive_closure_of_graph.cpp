///*
//PROBLEM STATEMENT:
//Given a directed graph, find out if a vertex j is reachable from another vertex i
//for all vertex pairs (i, j) in the given graph.
//Here reachable mean that there is a path from vertex i to j.
//The reach-ability matrix is called transitive closure of a graph.
//The directed graph is represented by adjacency list graph where there are N vertices.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void dfs(vector<vector<int>> &graph, int vertex, int adjacent, vector<bool> &visited, vector<vector<int>> &ans) {
//    visited[vertex] = true;
//    ans[adjacent][vertex] = 1;
//    for (int i = 0; i < graph[vertex].size(); i++) {
//        if (graph[vertex][i] == 1 && !visited[i]) dfs(graph, i, adjacent, visited, ans);
//    }
//}
//
//vector<vector<int>> solve(int N, vector<vector<int>> &graph) {
//    vector<vector<int>> ans(N, vector<int>(N, 0));
//    vector<bool> visited(N, false);
//    for (int vertex = 0; vertex < N; vertex++) {
//        dfs(graph, vertex, vertex, visited, ans);
//        visited = vector<bool>(N, false);
//    }
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
//        int N;
//        cin >> N;
//        vector<vector<int>> graph(N, vector<int>(N, -1));
//        for (int i = 0; i < N; i++)
//            for (int j = 0; j < N; j++)
//                cin >> graph[i][j];
//        vector<vector<int>> ans = solve(N, graph);
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < N; j++)
//                cout << ans[i][j] << " ";
//            cout << "\n";
//        }
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//4
//1 1 0 1
//0 1 1 0
//0 0 1 1
//0 0 0 1
//
//OUTPUT:
//1 1 1 1
//0 1 1 1
//0 0 1 1
//0 0 0 1
//*/