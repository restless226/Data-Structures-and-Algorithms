/*
PROBLEM STATEMENT:
Given a string str of length N,
you have to find number of palindromic subsequence
(need not necessarily be distinct) which could be formed from the string str.
Note: You have to return the answer module 109+7;
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

void printArray(int **dp, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << dp[i][j] << "\t\t\t\t";
        }
        cout << '\n';
    }
    cout << '\n';
}

int solve(string &s) {
    int n = s.length();
    int **dp = new int *[n];
    for (int i = 0; i < n; ++i) {
        dp[i] = new int[n];
    }

    for (int g = 0; g < n; g++) {
        for (int i = 0, j = g; j < n; i++, j++) {
            if (g == 0) {   // length 1 - Trivial case
                dp[i][j] = 1;
            } else if (g == 1) {    // length 2 - Trivial case
                s[i] == s[j] ? dp[i][j] = 3 : dp[i][j] = 2;
            } else {
                if (s[i] == s[j]) {
                    dp[i][j] = (dp[i][j - 1] + dp[i + 1][j] + 1) % mod;
                } else {
                    long long a = (dp[i][j - 1] + dp[i + 1][j]) % mod;
                    long long b = dp[i + 1][j - 1];
                    dp[i][j] = ((a - b) % mod + mod) % mod;
                }
            }
        }
    }

    cout << "\n\nDP MATRIX AFTER ITERATION:\n";
    printArray(dp, n);

    return dp[0][n - 1] % mod;
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
        cout << solve(s) << '\n';
    }
    return 0;
}

/*
INPUT:
3
abcd
aab
abccbc

OUTPUT:

DP MATRIX AFTER ITERATION:
1				2				3				4
-4995072469926809587				1				2				3
-4995072469926809587				-4995072469926809587				1				2
-4995072469926809587				-4995072469926809587				-4995072469926809587				1

4


DP MATRIX AFTER ITERATION:
1				3				4
-4995072469926809587				1				2
-4995072469926809587				-4995072469926809587				1

4


DP MATRIX AFTER ITERATION:
1				2				3				5				10				16
-4995072469926809587				1				2				4				9				15
-4995072469926809587				-4995072469926809587				1				3				4				10
-4995072469926809587				-4995072469926809587				-4995072469926809587				1				2				5
-4995072469926809587				-4995072469926809587				-4995072469926809587				-4995072469926809587				1				2
-4995072469926809587				-4995072469926809587				-4995072469926809587				-4995072469926809587				-4995072469926809587				1

16
*/