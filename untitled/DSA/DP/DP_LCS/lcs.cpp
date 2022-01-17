/*
PROBLEM STATEMENT:
Longest Common Subsequence Problem solution using Memoization
Given two sequences, find the length of longest subsequence present in both of them.
A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous.
*/

/* (Length of SCS) = (m + n) - (Length of LCS) */

#include <bits/stdc++.h>

#define MAX 1001
using namespace std;

int LCS_recursive(string x, string y, int n, int m) {
    // base condition
    if (n == 0 || m == 0) {
        return 0;
    }

    // choice diagram code
    if (x[n - 1] == y[m - 1]) {
        return 1 + LCS_recursive(x, y, n - 1, m - 1);
    } else {
        return max(LCS_recursive(x, y, n, m - 1), LCS_recursive(x, y, n - 1, m));
    }
}

int LCS_memoized(string x, string y, int n, int m) {
    static int dp[MAX][MAX];
    memset(dp, -1, sizeof(dp));   // initializing all entries in dp matrix with -1

    // base condition
    if (n == 0 || m == 0) {
        return 0;
    }

    // memoization block check
    if (dp[n][m] != -1) {
        return dp[n][m];
    }

    // choice diagram code
    if (x[n - 1] == y[m - 1]) {
        return 1 + LCS_memoized(x, y, n - 1, m - 1);
    } else {
        return max(LCS_memoized(x, y, n, m - 1), LCS_memoized(x, y, n - 1, m));
    }
}

string print_LCS(int **dp, string x, string y, int n, int m) {
    string ans;
    int i = n;
    int j = m;
    while (i > 0 && j > 0) {

        if (x[i - 1] == y[j - 1]) {
            ans += x[i - 1];
            i--;
            j--;
        } else {
            if (dp[i][j - 1] > dp[i - 1][j]) {
                j--;
            } else {
                i--;
            }
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

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

    cout << "\nDP ARRAY BEFORE ITERATION:\n";
    printArray(dp, n, m);

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

    cout << "\nDP ARRAY AFTER ITERATION:\n";
    printArray(dp, n, m);

    cout << "\nLCS is : " << print_LCS(dp, x, y, n, m);
    cout << "\nLCS_DP -> LCS length is : ";
    return dp[n][m];
}

int main() {
    int t;
    cin >> t;

    string x, y;
    int m, n;

    while (t--) {
        cin >> n >> m;
        cin >> x >> y;

        cout << '\n';
        cout << "\nLCS_recursive -> LCS length is : " << LCS_recursive(x, y, n, m);
        cout << "\nLCS_memoized -> LCS length is : " << LCS_memoized(x, y, n, m);
        cout << length_LCS_DP(x, y, n, m);
        cout << '\n';
    }


    return 0;
}

/*
OUTPUT:

3
6 7
abcdgh abedfhg
5 6
acbcf abcdaf
6 6
ABCDGH AEDFHR

LCS_recursive -> LCS length is : 4
LCS_memoized -> LCS length is : 4
DP ARRAY BEFORE ITERATION:
0 0 0 0 0 0 0 0
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939


DP ARRAY AFTER ITERATION:
0 0 0 0 0 0 0 0
0 1 1 1 1 1 1 1
0 1 2 2 2 2 2 2
0 1 2 2 2 2 2 2
0 1 2 2 3 3 3 3
0 1 2 2 3 3 3 4
0 1 2 2 3 3 4 4


LCS is : abdg
LCS_DP -> LCS length is : 4


LCS_recursive -> LCS length is : 4
LCS_memoized -> LCS length is : 4
DP ARRAY BEFORE ITERATION:
0 0 0 0 0 0 0
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939


DP ARRAY AFTER ITERATION:
0 0 0 0 0 0 0
0 1 1 1 1 1 1
0 1 1 2 2 2 2
0 1 2 2 2 2 2
0 1 2 3 3 3 3
0 1 2 3 3 3 4


LCS is : abcf
LCS_DP -> LCS length is : 4



LCS_recursive -> LCS length is : 3
LCS_memoized -> LCS length is : 3
DP ARRAY BEFORE ITERATION:
0 0 0 0 0 0 0
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939
0 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939 -1163005939


DP ARRAY AFTER ITERATION:
0 0 0 0 0 0 0
0 1 1 1 1 1 1
0 1 1 1 1 1 1
0 1 1 1 1 1 1
0 1 1 2 2 2 2
0 1 1 2 2 2 2
0 1 1 2 2 3 3


LCS is : ADH
LCS_DP -> LCS length is : 3
*/