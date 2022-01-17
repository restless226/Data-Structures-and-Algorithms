/*
PROBLEM STATEMENT:
Given an array of n distinct elements.
Check whether the given array is a k sorted array or not.
A k sorted array is an array where each element is at most
k distance away from its target position in the sorted array.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

string solve(int arr[], int n, int k) {
    int temp[n];
    for (int i = 0; i < n; ++i) {
        temp[i] = arr[i];
    }
    sort(temp, temp + n);
    int l, h, mid;
    for (int i = 0; i < n; i++) {
        l = 0;
        h = n - 1;
        while (l <= h) {
            mid = l + (h - l) / 2;
            if (temp[mid] == arr[i]) {
                break;
            } else if (temp[mid] < arr[i]) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        if (k < abs(i - mid)) {
            return "No";
        }

    }
    return "Yes";
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> k;
        cout << solve(arr, n, k) << endl;
    }
    return 0;
}

/*
INPUT:
3
6
3 2 1 5 6 4
2
7
13 8 10 7 15 14 12
1
3
50 24 43
1

OUTPUT:
Yes
No
No
*/