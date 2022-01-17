/*
PROBLEM STATEMENT:
You are given N pairs of numbers.
In every pair, the first number is always smaller than the second number.
A pair (c, d) can follow another pair (a, b) if b < c.
Chain of pairs can be formed in this fashion.
You have to find the longest chain which can be formed from the given set of pairs.

PREREQUISITE: LIS
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    return p1.first < p2.first ? true : false;
}

int solve(pair<int, int> chain[], int n) {
    sort(chain, chain + n, cmp);
    int dp[n];
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
    }
    int ans = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (chain[i].first > chain[j].second && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    int n;
    while (t--) {
        cin >> n;

        pair<int, int> chain[n];
        for (int i = 0; i < n; i++) {
            cin >> chain[i].first >> chain[i].second;
        }
        cout << "length of longest chain is : " << solve(chain, n) << '\n';
    }

    return 0;
}

/*
INPUT:
1
5
5 24 39 60 15 28 27 40 50 90

OUTPUT:
length of longest chain is : 3
*/