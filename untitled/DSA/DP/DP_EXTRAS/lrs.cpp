/*
PROBLEM STATEMENT:
Given a string str, find the length of the longest repeating subsequence (LRS)
such that it can be found twice in the given string.
The two identified subsequences A and B can use the same ith character from string str
if and only if that ith character has different indices in A and B.

Expected Time Complexity: O(n2)
Expected Space Complexity: O(n2)
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

void printArray(int **dp, int n, int m) {
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < m + 1; ++j) {
            cout << dp[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}

int lcs(string x, string y, int n, int m) {
    // base condition
    if (n == 0 || m == 0) {
        return 0;
    }
    int **dp = new int *[n + 1];
    for (int i = 0; i < n + 1; i++) {
        dp[i] = new int[m + 1];
    }
    // INITIALIZATION
    for (int i = 0; i < n + 1; i++) {
        dp[i][0] = 0;
    }
    for (int j = 0; j < m + 1; j++) {
        dp[0][j] = 0;
    }
    // ITERATION
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            // choice diagram code
            if (x[i - 1] == y[j - 1] && i != j) {     // [NOTE] : minor change
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }
    cout << "\nDP ARRAY AFTER ITERATION:\n";
    printArray(dp, n, m);
    return dp[n][m];
}

int solve(string &s) {
    return lcs(s, s, s.length(), s.length());
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }
    return 0;
}

/*
INPUT:
2
axxxy
aab

OUTPUT:
DP ARRAY AFTER ITERATION:
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 1 1 1
0 0 1 1 2 2
0 0 1 2 2 2
0 0 1 2 2 2

2

DP ARRAY AFTER ITERATION:
0 0 0 0
0 0 1 1
0 1 1 1
0 1 1 1

1
*/