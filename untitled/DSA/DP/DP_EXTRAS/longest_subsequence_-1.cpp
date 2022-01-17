/*
PROBLEM STATEMENT:
Given an array A[] of size N,
find the longest subsequence such that difference between adjacent elements is one.

PREREQUISITE: LIS
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int solve(int arr[], int n) {
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (dp[i] < 1 + dp[j] && abs(arr[i] - arr[j]) == 1) {
                dp[i] = 1 + dp[j];
            }
        }
    }
    int ans = 1;
    for (int i = 0; i < n; i++) {
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << solve(arr, n) << '\n';
    }

    return 0;
}

/*
INPUT:
2
5
1 2 3 4 5
7
10 9 4 5 4 8 6

OUTPUT:
5
3
*/