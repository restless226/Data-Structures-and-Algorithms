/*
PROBLEM STATEMENT:
Given an array of lowercase strings A[] of size N,
determine if the strings can be chained together to form a circle.
A string X can be chained together with another string Y
if the last character of X is same as first character of Y.
If every string of the array can be chained, it will form a circle.
For example, for the array arr[] = {"for", "geek", "rig", "kaf"} the answer will be Yes
as the given strings can be chained as "for", "rig", "geek" and "kaf"

1. The idea is to create a directed graph of all characters and
then find if their is an eulerian circuit in the graph or not.
If there is an eulerian circuit, then chain can be formed, otherwise not.
Note:  directed graph has eulerian circuit only if in degree and out degree of every vertex is same,
       and all non-zero degree vertices form a single strongly connected component.

2. Detailed steps of the algorithm:
1) Create a directed graph g with number of vertices equal to the size of alphabet (i.e. 26 characters)
2) Perform for every string in the given array of strings.
     a) Add an edge from first character to last character of the given graph
3) If the created graph has eulerian circuit, then return true, else false.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

void dfs(int node, vector<bool> &visited, vector<vector<int>> &graph) {
    visited[node] = true;
    for (int i = 0; i < 26; i++) {
        if (graph[node][i] && !visited[i]) dfs(i, visited, graph);
    }
}

int solve(int n, vector<string> &A) {
    vector<vector<int>> graph(26, vector<int>(26, 0));
    vector<int> in(26, 0);
    vector<int> out(26, 0);
    for (int i = 0; i < n; i++) {
        in[A[i].front() - 'a']++;
        out[A[i].back() - 'a']++;
        graph[A[i].front() - 'a'][A[i].back() - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++) {
        if (in[i] != out[i]) return 0;
    }
    vector<bool> visited(26, false);
    for (int i = 0; i < 26; i++) {
        if (in[i]) {
            dfs(i, visited, graph);
            break;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (in[i] && !visited[i]) return 0;
    }
    return 1;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> A;
        string s;
        for (int i = 0; i < N; i++) {
            cin >> s;
            A.push_back(s);
        }
        cout << solve(N, A) << endl;
    }
    return 0;
}

/*
INPUT:
3
3
abc bcd cdf
4
ab bc cd da
4
for geek rig kaf

OUTPUT:
0
1
1
*/