/*
Problem Statement:
Given an array of non-negative integers, and a value sum,
determine if there is a subset of the given set with sum equal to given sum.
*/

#include <bits/stdc++.h>

using namespace std;
#define int long long

void printArray(bool **dp, int n, int sum) {
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < sum + 1; ++j) {
            cout << dp[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}

bool subset_sum(int arr[], int n, int sum) {
    bool **dp = new bool *[n + 1];
    for (int i = 0; i < n + 1; ++i) {
        dp[i] = new bool[sum + 1];
    }
    // INITIALIZATION
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < sum + 1; ++j) {
            if (i == 0) {
                dp[i][j] = false;
            }
            if (j == 0) {
                dp[i][j] = true;
            }
        }
    }
    cout << "DP ARRAY BEFORE:\n";
    printArray(dp, n, sum);
    // ITERATION
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < sum + 1; ++j) {
            if (arr[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            } else if (arr[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << "DP ARRAY AFTER:\n";
    printArray(dp, n, sum);
    return dp[n][sum];
}

int32_t main() {
    int n, sum;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> sum;
    if (subset_sum(arr, n, sum)) {
        cout << "Subset exists with given sum\n";
    } else {
        cout << "No subset with given sum\n";
    }
    return 0;
}


/*
OUTPUT:

6
3 34 4 12 5 2
30
DP ARRAY BEFORE:
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 255 255 255 255 0 0 0 0 0 154 208 111 0 0 0 0 255 255 255 255 0 0
1 0 51 0 0 0 0 0 0 0 200 36 100 0 0 0 0 0 0 250 253 253 251 127 0 0 48 253 98 0 0
1 0 0 200 253 98 0 0 0 0 0 0 0 0 0 0 0 0 0 32 254 98 0 0 0 0 0 6 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 82 154 200
1 0 0 0 0 48 253 98 0 0 0 0 0 224 0 0 0 0 0 0 0 30 0 0 0 0 0 0 0 206 22
1 0 0 0 0 0 112 169 208 111 0 0 0 0 76 253 98 0 0 0 0 0 200 253 98 0 0 0 0 0 94

DP ARRAY AFTER:
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 1 1 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 1 1 0 0 1 0 0 0 0 1 0 0 1 1 0 0 1 0 0 0 0 0 0 0 0 0 0 0
1 0 0 1 1 1 0 1 1 1 0 0 1 0 0 1 1 1 0 1 1 1 0 0 1 0 0 0 0 0 0
1 0 1 1 1 1 1 1 1 1 1 1 1 0 1 1 1 1 1 1 1 1 1 1 1 0 1 0 0 0 0

No subset with given sum


10
1 1 2 2 3 4 5 5 6 7
1
DP ARRAY BEFORE:
1 0
1 111
1 0
1 0
1 253
1 0
1 0
1 0
1 253
1 0
1 0

DP ARRAY AFTER:
1 0
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1

Subset exists with given sum
*/