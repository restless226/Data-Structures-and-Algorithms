/*
PROBLEM STATEMENT:
Minimum number of deletions and insertions to transform one string into another
Given two strings ‘str1’ and ‘str2’ of size m and n respectively.
The task is to remove/delete and insert minimum number of characters from/in str1 so as to transform it into str2.
It could be possible that the same character needs to be removed/deleted from one point of str1 and inserted to some another point.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void printArray(int **dp, int n, int m) {
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < m + 1; ++j) {
            cout << dp[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}



// top down approach
int length_LCS_DP(string x, string y, int n, int m) {
    // base condition
    if (n == 0 || m == 0) {
        return 0;
    }

//    int dp[n + 1][m + 1];
    int **dp = new int *[n + 1];

    for (int i = 0; i < n + 1; i++) {
        dp[i] = new int[m + 1];
    }

    // INITIALIZATION
    // it corresponds to base condition in RECURSIVE SOLUTION
    for (int i = 0; i < n + 1; i++) {
        dp[i][0] = 0;
    }

    for (int j = 0; j < m + 1; j++) {
        dp[0][j] = 0;
    }

//    cout << "\nDP ARRAY BEFORE ITERATION:\n";
//    printArray(dp, n, m);

    // ITERATIVE DP CODE
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            // choice diagram code
            if (x[i - 1] == y[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }

//    cout << "\nDP ARRAY AFTER ITERATION:\n";
//    printArray(dp, n, m);

    return dp[n][m];
}


int solve(string x, string y, int n, int m) {
    return m + n - (2 * length_LCS_DP(x, y, n, m));
}

int32_t main() {
    string x, y;
    int m, n;
    cin >> n >> m;
    cin >> x >> y;

    cout << "Minimum number of deletions and insertions to transform x to y is : " << solve(x, y, n, m) << '\n';
    return 0;
}