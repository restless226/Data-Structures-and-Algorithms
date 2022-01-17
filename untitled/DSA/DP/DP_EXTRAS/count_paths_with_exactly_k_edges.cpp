/*
PROBLEM STATEMENT:
Given a directed graph and two vertices ‘u’ and ‘v’ in it.
Find the number of possible walks from ‘u’ to ‘v’
with exactly k edges on the walk modulo 10^9+7.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int solve(vector<vector<int>> &graph, int u, int v, int k) {
    const int mod = 1000000007;
    int n = graph.size();
    int dp[n][n][k + 1];
    for (int j = 0; j <= k; j++) {
        for (int i = 0; i < n; i++) {
            for (int vertex = 0; vertex < n; vertex++) {
                dp[i][vertex][j] = 0;
                if (j == 0 && i == vertex)
                    dp[i][vertex][j] = 1;
                if (j == 1 && graph[i][vertex] == 1)
                    dp[i][vertex][j] = 1;
                if (j > 1) {
                    for (int adjacent = 0; adjacent < n; adjacent++) {
                        if (graph[i][adjacent] == 1) {
                            dp[i][vertex][j] = (dp[i][vertex][j] % mod + dp[adjacent][vertex][j - 1] % mod) % mod;
                        }
                    }
                }
            }
        }
    }
    return dp[u][v][k];
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> graph(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> graph[i][j];
            }
        }
        int u, v, k;
        cin >> u >> v >> k;
        cout << solve(graph, u, v, k) << "\n";
    }
    return 0;
}

/*
INPUT:
2
4
0 1 1 1
0 0 0 1
0 0 0 1
0 0 0 0
0 3 2
5
0 0 0 0 1
1 1 1 1 1
1 0 1 0 1
0 0 1 0 0
1 0 0 1 1
2 4 2

OUTPUT:
2
3
*/