/*
PROBLEM STATEMENT:
Given a sorted array and a value x,
find the ceiling of x is the smallest element in array greater than or equal to x,
Assume than the array is sorted in non-decreasing order.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int bs_ceil(int arr[], int n, int x) {
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x) {
            ans = mid;
            break;
        } else if (arr[mid] < x) {
            start = mid + 1;
        } else if (arr[mid] > x) {
            ans = mid;
            end = mid - 1;
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
        int x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << bs_ceil(arr, n, x) << "\n";
    }
    return 0;
}

/*
INPUT:
4
7 0
1 2 8 10 10 12 19
7 1
1 2 8 10 10 12 19
7 5
1 2 8 10 10 12 19
7 20
1 2 8 10 10 12 19

OUTPUT:
0
0
2
-1
*/