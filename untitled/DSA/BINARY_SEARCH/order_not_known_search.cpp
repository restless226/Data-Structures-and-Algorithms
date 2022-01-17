/*
PROBLEM STATEMENT:
Given a sorted array of numbers,
find if a given number ‘key’ is present in the array.
Though we know that the array is sorted,
we don’t know if it’s sorted in ascending or descending order.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int asc_BS(int arr[], int n, int k) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k) {
            return mid;
        } else if (arr[mid] < k) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int desc_BS(int arr[], int n, int k) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k) {
            return mid;
        } else if (arr[mid] > k) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int solve(int arr[], int n, int k) {
    if (n == 1) {
        if (arr[0] == k) {
            return 0;
        }
        return -1;
    }

    if (arr[0] < arr[1]) {
        return asc_BS(arr, n, k);
    } else {
        return desc_BS(arr, n, k);
    }

}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << solve(arr, n, k) << endl;
    }
    return 0;
}
