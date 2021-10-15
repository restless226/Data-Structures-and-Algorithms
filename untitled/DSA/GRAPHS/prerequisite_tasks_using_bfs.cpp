///*
//PROBLEM STATEMENT:
//There are a total of N tasks, labeled from 0 to N-1.
//Some tasks may have prerequisites, for example to do task 0
//you have to first complete task 1, which is expressed as a pair: [0, 1]
//Given the total number of tasks N and a list of prerequisite pairs P,
//find if it is possible to finish all tasks.
//
//1 Consider this problem as a Graph problem.
//  All tasks are nodes of the graph and if task u is a prerequisite of task v,
//  we will add a directed edge from node u to node v.
//2 Find if a cycle exists in the directed graph.
//  No topological ordering exists in case of a cycle and
//  it will be impossible to do all the tasks.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//bool solve(int V, vector<pair<int, int> > &prerequisites) {
//    vector<int> adj[V];
//    for (auto &pair:prerequisites) {
//        adj[pair.first].push_back(pair.second);
//    }
//    queue<int> queue;
//    vector<int> indegree(V, 0);
//    int count = 0;
//    for (int i = 0; i < V; i++) {
//        for (auto &vertex: adj[i]) {
//            indegree[vertex]++;
//        }
//    }
//    for (int vertex = 0; vertex < V; vertex++) {
//        if (indegree[vertex] == 0) {
//            queue.push(vertex);
//        }
//    }
//    while (!queue.empty()) {
//        int currentVertex = queue.front();
//        count++;
//        queue.pop();
//        for (int &vertex : adj[currentVertex]) {
//            indegree[vertex]--;
//            if (indegree[vertex] == 0) {
//                queue.push(vertex);
//            }
//        }
//    }
//    return count == V ? true : false;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int N, P;
//        vector<pair<int, int> > prerequisites;
//        cin >> N;
//        cin >> P;
//        for (int i = 0; i < P; ++i) {
//            int x, y;
//            cin >> x >> y;
//            prerequisites.emplace_back(x, y);
//        }
//        solve(N, prerequisites) ? cout << "Yes\n" : cout << "No\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//4
//3
//1 0
//2 1
//3 2
//2
//2
//0 1
//1 0
//44
//19
//1 5
//1 20
//4 32
//16 1
//19 16
//21 26
//24 12
//26 34
//26 43
//27 37
//31 16
//33 5
//35 28
//36 15
//37 30
//39 1
//40 1
//40 32
//41 40
//
//OUTPUT:
//Yes
//No
//Yes
//*/