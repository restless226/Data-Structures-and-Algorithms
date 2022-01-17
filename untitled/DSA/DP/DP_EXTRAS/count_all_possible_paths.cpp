/*
PROBLEM STATEMENT:
The task is to count all the possible paths from top left to bottom right of a m X n matrix
with the constraints that from each cell you can either move only to right or down.
*/

#include <bits/stdc++.h>

using namespace std;

long long int dp[101][101];
const long long int mod = 1e9 + 7;

void printArray(long long int m, long long int n) {
    for (long long int i = 0; i < m; ++i) {
        for (long long int j = 0; j < n; ++j) {
            cout << dp[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}

long long int solve(long long int m, long long int n) {
    for (long long int i = 0; i < m; i++) {
        dp[i][0] = 1;
    }

    for (long long int j = 0; j < n; j++) {
        dp[0][j] = 1;
    }

    cout << "\nDP ARRAY BEFORE ITERATION...\n";
    printArray(m, n);

    for (long long int i = 1; i < m; i++) {
        for (long long int j = 1; j < n; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
        }

    }

    cout << "\nDP ARRAY AFTER ITERATION...\n";
    printArray(m, n);

    return dp[m - 1][n - 1] % mod;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    long long int t;
    cin >> t;
    long long int m, n;

    while (t--) {
        cin >> m >> n;
        cout << "\ntotal no of possible paths from top left to bottom right is : " << solve(m, n);
    }

    return 0;
}

/*
INPUT:
1
3 3

OUTPUT:
total no of possible paths from top left to bottom right is :
DP ARRAY BEFORE ITERATION...
1 1 1
1 0 0
1 0 0


DP ARRAY AFTER ITERATION...
1 1 1
1 2 3
1 3 6

6
*/