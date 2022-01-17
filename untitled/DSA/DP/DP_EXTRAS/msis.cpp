/*
PROBLEM STATEMENT:
Given an array arr of N positive integers,
the task is to find the maximum sum increasing subsequence(msis) of the given array.

PREREQUISITE:
Longest Increasing Subsequence (LIS)
NOTE: Every LIS may/may not be MSIS
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

// Time Complexity - O(n^2)
int msis(int arr[], int n) {
    int dp[n];
    for (int i = 0; i < n; i++) {
        dp[i] = arr[i];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && dp[i] < arr[i] + dp[j]) {
                dp[i] = arr[i] + dp[j];
            }
        }
    }
    int ans = 0;
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
        cout << "\nmaximum sum increasing subsequence is : " << msis(arr, n);
    }

    return 0;
}

/*
INPUT:
1
7
20 8 27 37 9 12 46

OUTPUT:
maximum sum increasing subsequence is : 130
*/