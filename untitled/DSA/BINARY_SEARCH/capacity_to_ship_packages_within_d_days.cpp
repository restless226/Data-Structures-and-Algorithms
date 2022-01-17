/*
PROBLEM STATEMENT:
Given an array arr[] of N weights.
Find the least weight capacity of a boat to ship all weights within D days.
NOTE: You have to load weights on the ship in the given order.

This problem is similar to "allocate min no of pages" done before
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

bool isValid(int arr[], int n, int d, int mx) {
    int days = 1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > mx) {
            days++;
            sum = arr[i];
        }
        if (days > d) {
            return false;
        }
    }
    return true;
}

int solve(int arr[], int n, int d) {
    int start = arr[0];
    int end = arr[0];
    for (int i = 1; i < n; i++) {
        end += arr[i];
        start = max(start, arr[i]);
    }

    if (n == d) {
        return start;
    }

    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isValid(arr, n, d, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
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
        int d;
        cin >> d;
        cout << solve(arr, n, d) << '\n';
    }
    return 0;
}

/*
INPUT:
2
3
1 2 1
2
3
9 8 10
3

OUTPUT:
3
10
*/