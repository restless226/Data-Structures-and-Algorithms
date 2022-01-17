/*
PROBLEM STATEMENT:
Given a sequence of matrices, find the most efficient way to multiply these matrices together.
The efficient way is the one that involves the least number of multiplications.
*/

#include <bits/stdc++.h>

#define MAX 101
#define int long long
using namespace std;

// TODO
// top down approach
int mcm_DP(int arr[], int n) {

    int dp[n][n];

    // INITIALIZATION

}

// bottom up approach (with optimization)
int mcm_memoized(int arr[], int i, int j) {
    // base condition
    // i > j -> size 0 (not allowed)
    // i == j -> size 1 (not allowed)
    if (i >= j) {
        return 0;
    }

    int dp[MAX][MAX];
    memset(dp, -1, sizeof(dp));

    // memoization block check
    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    int min_cost = INT_MAX;
    int left;
    int right;

    // SCHEME-1
    for (int k = i; k <= j - 1; k++) {   // using SCHEME - 1
        // OPTIMIZATION-1...
        if (dp[i][k] != -1) {
            left = dp[i][k];
        } else {
            left = mcm_memoized(arr, i, k);
            dp[i][k] = left;
        }

        // OPTIMIZATION-2...
        if (dp[k + 1][j] != -1) {
            right = dp[k + 1][j];
        } else {
            right = mcm_memoized(arr, k + 1, j);
            dp[k + 1][j] = right;
        }

        dp[i][j] = left + right + arr[i - 1] * arr[k] * arr[j];
//        dp[i][j] = mcm_memoized(arr, i, k)
//                   + mcm_memoized(arr, k + 1, j)
//                   + arr[i - 1] * arr[k] * arr[j]; // extra cost
        min_cost = min(min_cost, dp[i][j]);
    }

    return min_cost;
}

int mcm_recursive(int arr[], int i, int j) {
    // base condition
    // i > j -> size 0 (not allowed)
    // i == j -> size 1 (not allowed)
    if (i >= j) {
        return 0;
    }


    int min_cost = INT_MAX;
    int temp_ans;

//    cout << "\nUSING SCHEME 1...\n";
    for (int k = i; k <= j - 1; k++) {   // using SCHEME - 1
        temp_ans = mcm_recursive(arr, i, k)
                   + mcm_recursive(arr, k + 1, j)
                   + arr[i - 1] * arr[k] * arr[j]; // extra cost
        min_cost = min(min_cost, temp_ans);
    }

//    cout << "\nUSING SCHEME 2...\n";
//    for (int k = i + 1; k <= j; k++) {   // using SCHEME - 2
//        temp_ans = mcm_recursive(arr, i, k - 1)
//                   + mcm_recursive(arr, k, j)
//                   + arr[i - 1] * arr[k - 1] * arr[j];
//        min_cost = min(min_cost, temp_ans);
//    }

    return min_cost;
}

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << "min cost with least number of multiplications is : \n";
        cout << "\nMCM RECURSIVE -> " << mcm_recursive(arr, 1, n - 1);
        cout << "\nMCM MEMOIZED -> " << mcm_memoized(arr, 1, n - 1);
        cout << "\nMCM DP TOP DOWN -> " << mcm_DP(arr, n);
    }


    return 0;
}