/*
PROBLEM STATEMENT:
Given a sorted array arr[] of size N and an integer K.
The task is to check if K is present in the array or not using ternary search.
If element is present return its index else return -1.
Ternary Search - It is a divide and conquer algorithm that can be used
to find an element in an array. In this algorithm, we divide the given array
into three parts and determine which has the key (searched element).
*/

#include <bits/stdc++.h>

#define int long long int
using namespace std;
const int mod = 1000000007;

int solve(int a[], int n, int k) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (a[mid1] == k) return mid1;
        if (a[mid2] == k) return mid2;
        if (k < a[mid1]) r = mid1 - 1;
        else if (k > a[mid2]) l = mid2 + 1;
        else {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solve(a, n, k) << '\n';
    }
    return 0;
}

/*
INPUT:
3
7 8
1 2 8 10 11 12 19
7 11
1 2 8 10 11 12 19
9 5
1 2 3 4 8 10 10 12 19

OUTPUT:
2
4
-1
*/