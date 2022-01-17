/*
PROBLEM STATEMENT:
Given an array arr[] of N integers.
A subsequence of arr[] is called Bitonic
if it is first increasing then decreasing.
Print the max sum bitonic subsequence.

PREREQUISITE: LIS
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int solve(int arr[], int n) {
    int msibs[n];
    int msdbs[n];
    for (int i = 0; i < n; i++) {
        msibs[i] = msdbs[i] = arr[i];
    }
    // compute msibs values from left to right
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && msibs[i] < arr[i] + msibs[j]) {
                msibs[i] = arr[i] + msibs[j];
            }
        }
    }
    // compute msdbs values from right to left
    for (int i = n - 2; i >= 0; i--) {
        for (int j = n - 1; j > i; j--) {
            if (arr[i] > arr[j] && msdbs[i] < arr[i] + msdbs[j]) {
                msdbs[i] = arr[i] + msdbs[j];
            }
        }
    }

    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        ans = max(ans, msibs[i] + msdbs[i] - arr[i]);
    }
    return ans;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << "max sum of bitonic subsequence is : " << solve(arr, n) << '\n';
    }
    return 0;
}

/*
INPUT:
2
6
80 60 30 40 20 10
9
1 15 51 45 33 100 12 8 9

OUTPUT:
max sum of bitonic subsequence is : 210
max sum of bitonic subsequence is : 188
*/