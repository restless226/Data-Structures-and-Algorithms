///*
//PROBLEM STATEMENT:
//Given an undirected graph of V vertices and E edges and another edge (c-d),
//the task is to find if the given edge is a bridge in graph,
//i.e., removing the edge disconnects the graph.
//
//Expected Time Complexity: O(V + E).
//Expected Auxiliary Space: O(V).
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void dfs(vector<int> adj[], int sv, bool visited[]) {
//    visited[sv] = true;
//    for (auto &vertex:adj[sv]) {
//        if (!visited[vertex]) {
//            dfs(adj, vertex,visited);
//        }
//    }
//}
//
//int solve(int V, vector<int> adj[], int c, int d) {
//    bool visited[V];
//    int included = 0;
//    int excluded = 0;
//    memset(visited, false, sizeof(visited));
//    for (int i = 0; i < V; i++) {
//        if(!visited[i]){
//            dfs(adj, i,visited);
//            included++;
//        }
//    }
//    for(int i = 0 ; i < adj[c].size() ; i++){
//        if(adj[c][i] == d){
//            adj[c].erase(adj[c].begin() + i);
//            break;
//        }
//    }
//    for(int i = 0 ; i < adj[d].size() ; i++){
//        if(adj[d][i] == c){
//            adj[d].erase(adj[d].begin() + i);
//            break;
//        }
//    }
//    memset(visited, false, sizeof(visited));
//    for (int i = 0; i < V; i++) {
//        if(!visited[i]){
//            dfs(adj, i,visited);
//            excluded++;
//        }
//    }
//    return included == excluded ? 0 : 1;
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
//        int i = 0;
//        while (i++ < E) {
//            int u, v;
//            cin >> u >> v;
//            adj[u].push_back(v);
//            adj[v].push_back(u);
//        }
//
//        int c, d;
//        cin >> c >> d;
//
//        cout << solve(V, adj, c, d) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//4
//4
//3
//0 1
//1 2
//2 3
//1 2
//5
//5
//1 0
//1 2
//0 2
//0 3
//0 4
//0 2
//5
//5
//1 0
//1 2
//0 2
//0 3
//0 4
//0 3
//9
//12
//0 2
//1 4
//1 5
//2 3
//2 4
//4 5
//3 0
//6 3
//6 7
//7 8
//8 6
//8 2
//3 6
//
//OUTPUT:
//1
//0
//1
//0
//*/