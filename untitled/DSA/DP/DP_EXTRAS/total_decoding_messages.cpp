/*
PROBLEM STATEMENT:
A top secret message containing letters from A-Z is being encoded to numbers using the following mapping:

'A' -> 1
'B' -> 2
...
'Z' -> 26

You are an FBI agent. You have to determine the total number of ways that message can be decoded.
NOTE: An empty digit sequence is considered to have one decoding.
It may be assumed that the input contains valid digits from 0 to 9 and
If there are leading 0’s, extra trailing 0’s and two or more consecutive 0’s then it is an invalid string.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int solve(string &s) {
    int n = s.length();
    if (n == 1 && s[0] != '0')
        return 1;
    if (s[0] == '0')
        return 0;
    int dp[n + 1];
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = 0;
        if (s[i - 1] > '0')
            dp[i] = dp[i - 1];
        if (s[i - 2] == '1' || s[i - 2] == '2' && s[i - 1] < '7')
            dp[i] = (dp[i] + dp[i - 2]) % mod;
    }
    return dp[n] % mod;
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
123
27
12519

OUTPUT:
3
1
6
*/