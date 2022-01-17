/*
PROBLEM STATEMENT:
There are a total of N tasks, labeled from 0 to N-1.
Some tasks may have prerequisites, for example to do task 0
you have to first complete task 1, which is expressed as a pair: [0, 1]
Given the total number of tasks N and a list of prerequisite pairs P,
find if it is possible to finish all tasks.

1 Consider this problem as a Graph problem.
  All tasks are nodes of the graph and if task u is a prerequisite of task v,
  we will add a directed edge from node u to node v.
2 Find if a cycle exists in the directed graph.
  No topological ordering exists in case of a cycle and
  it will be impossible to do all the tasks.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

bool dfs(vector<int> adj[], int sv, vector<bool> visited, vector<bool> dfs_visited) {
    visited[sv] = true;
    dfs_visited[sv] = true;
    for (auto &vertex: adj[sv]) {
        if (!visited[vertex]) {
            if (dfs(adj, vertex, visited, dfs_visited)) {
                return true;
            }
        } else if (dfs_visited[vertex]) {
            return true;
        }
    }
    dfs_visited[sv] = false;
    return false;
}

bool solve(int V, vector<pair<int, int> > &prerequisites) {
    vector<int> adj[V];
    for (auto &pair:prerequisites) {
        adj[pair.first].push_back(pair.second);
    }
    vector<bool> visited(V, false);
    vector<bool> dfs_visited(V, false);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfs(adj, i, visited, dfs_visited)) {
                return false;
            }
        }
    }
    return true;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.emplace_back(x, y);
        }
        solve(N, prerequisites) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}

/*
INPUT:
3
4
3
1 0
2 1
3 2
2
2
0 1
1 0
44
19
1 5
1 20
4 32
16 1
19 16
21 26
24 12
26 34
26 43
27 37
31 16
33 5
35 28
36 15
37 30
39 1
40 1
40 32
41 40

OUTPUT:
Yes
No
Yes
*/