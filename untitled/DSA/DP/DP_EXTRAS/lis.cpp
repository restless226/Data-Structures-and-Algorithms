/*
PROBLEM STATEMENT:
LONGEST INCREASING SUBSEQUENCE (LIS)
Given an array of integers,
find the length of the longest (strictly) increasing subsequence from the given array.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

// Time Complexity - O(n^2)
int lis(int arr[], int n) {
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && dp[i] < 1 + dp[j]) {
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
    cin.tie(NULL);
    cout.tie(NULL);
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
        cout << "length of the longest increasing subsequence is : " << lis(arr, n) << '\n';
    }

    return 0;
}

/*
OUTPUT:
2
6
5 8 3 7 9 1
7
4 3 9 7 6 8 20
length of the longest increasing subsequence is : 3
length of the longest increasing subsequence is : 4
*/