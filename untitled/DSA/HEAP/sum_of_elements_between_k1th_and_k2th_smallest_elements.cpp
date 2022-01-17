/*
PROBLEM STATEMENT:
Given an array A[] of N positive integers and two positive integers K1 and K2.
Find the sum of all elements between K1th and K2th smallest elements of the array.
It may be assumed that (1 <= k1 < k2 <= n).
*/

#include <bits/stdc++.h>

using namespace std;
const int mod = 1000000007;

long long solve(long long arr[], long long n, long long k1, long long k2) {
    priority_queue<long long> mxh;
    for (long long i = 0; i < n; i++) {
        mxh.push(arr[i]);
        if (mxh.size() >= k2) mxh.pop();
    }
    long long ans = 0;
    while (mxh.size() != k1) {
        ans += mxh.top();
        mxh.pop();
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
        long long n;
        cin >> n;
        long long arr[n + 5];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long long k1, k2;
        cin >> k1 >> k2;
        cout << solve(arr, n, k1, k2) << endl;
    }
    return 0;
}

/*
INPUT:
2
7
20 8 22 4 12 10 14
3 6
6
10 2 50 12 48 13
2 6

OUTPUT:
26
73
*/