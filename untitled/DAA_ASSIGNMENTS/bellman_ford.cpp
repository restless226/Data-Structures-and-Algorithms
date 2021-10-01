///*
//PROBLEM STATEMENT:
//
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void print_path(int s, int d, vector<int> &parent) {
//    if (parent[d] == d) {
//        cout << d;
//        return;
//    }
//    print_path(s, parent[d], parent);
//}
//
//int bellman_ford(vector<int> &dist, vector<int> &parent, vector<pair<int, pair<int, int>>> edge_list, int n,
//                 int source) {
//    dist[source] = 0;
//    for (int i = 1; i <= n; i++) {
//        int done = 1;
//
//        for (auto j:edge_list) {
//            int u, v, weight;
//            u = j.first;
//            v = j.second.first;
//            weight = j.second.second;
//
//            if (dist[u] != INT_MAX && dist[v] > dist[u] + weight) {
//                done = 0;
//                dist[v] = dist[u] + weight;
//                parent[v] = u;
//            }
//        }
//        if (done) {
//            break;
//        }
//    }
//    // loop to check for negative edge cycle
//    for (auto j:edge_list) {
//        int u, v, weight;
//        u = j.first;
//        v = j.second.first;
//        weight = j.second.second;
//        if (dist[u] != INT_MAX && dist[v] > dist[u] + weight) {
//            return 0;
//        }
//    }
//    return 1;
//
//}
//
//int validate(int source, int dest, int vertices, vector<pair<int, pair<int, int>>> edge_list) {
//
//}
//
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int vertices;
//    int edges;
//
//    cin >> vertices >> edges;
//    vector<pair<int, int>> adj[vertices + 1];
//    vector<pair<int, pair<int, int>>> edge_list;
//
//    while (edges--) {
//        int s, d, w;
//        cin >> s >> d >> w;
//        if (!validate(s, d, vertices, edge_list)) {
//            return 0;
//        }
//        adj[s].push_back({d, w});
//        edge_list.push_back({s, {d, w}});
//    }
//
//    vector<int> dist(vertices + 1);
//    vector<int> parent(vertices + 1);
//
//    for (int i = 0; i <= vertices; i++) {
//        dist[i] = INT_MAX;
//        parent[i] = i;
//    }
//
//    if (bellman_ford(dist, parent, edge_list, vertices, 1)) {
//        for (int i = 2; i <= vertices; i++) {
//            cout << "path from 1 to " << i << " : ";
//            print_path(1, i, parent);
//            cout << endl;
//            cout<<'\n'<<'\n';
//        }
//    }else{
//        cout << "Negative weight cycle exists\n";
//    }
//
//    return 0;
//}
//
///*
//INPUT:
//7 10
//1 2 6
//1 3 5
//1 4 5
//3 2 -2
//4 3 -2
//3 5 1
//2 5 -1
//4 6 -1
//6 7 3
//5 7 3
//
//OUTPUT:
//
//*/