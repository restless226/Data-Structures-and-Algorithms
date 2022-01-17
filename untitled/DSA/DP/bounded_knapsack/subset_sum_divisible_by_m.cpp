/*
PROBLEM STATEMENT:
Given a set of n non-negative integers, and a value m,
determine if there is a subset of the given set with sum divisible by m.
*/

#include <bits/stdc++.h>

#define MAX 101
#define int long long
using namespace std;

int dp[1001][1001];

int solve(vector<int> num, int n, int m, int ans) {
    if (ans % m == 0 && ans != 0) {
        return 1;
    }
    if (n == 0) {
        return 0;
    }
    if (dp[n][ans] != -1) {
        return dp[n][ans];
    }
    dp[n][ans] = solve(num, n - 1, m, ans + num[n - 1]) || solve(num, n - 1, m, ans);
    return dp[n][ans];
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        memset(dp, -1, sizeof(dp));
        int ans = solve(nums, n, m, 0);
        cout << ans << "\n";
    }
    return 0;
}

/*
INPUT:
2
4 6
3 1 7 5
3 5
1 2 6

OUTPUT:
1
0
*/