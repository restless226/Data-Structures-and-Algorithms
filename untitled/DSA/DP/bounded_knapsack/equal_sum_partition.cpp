/*
Problem Statement:
Given an array arr[] of size N,check if it can be partitioned into two parts
such that the sum of elements in both parts is the same.
*/

#include <bits/stdc++.h>

using namespace std;
#define int long long

bool equal_sum_partition(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    if (sum % 2 != 0) {
        return false;
    }

    bool dp[n + 1][(sum / 2) + 1];

    // INITIALIZATION
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < (sum / 2) + 1; ++j) {
            if (i == 0) {
                dp[i][j] = false;
            }
            if (j == 0) {
                dp[i][j] = true;
            }
        }
    }

    // ITERATIVE (top down) SOLUTION CODE
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < (sum / 2) + 1; ++j) {
            if (arr[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            } else if (arr[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][(sum / 2)];
}

int32_t main() {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    if (equal_sum_partition(arr, n)) {
        cout << "can be partitioned\n";
    } else {
        cout << "cannot be partitioned\n";
    }

    return 0;
}
