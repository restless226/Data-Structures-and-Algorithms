/*
PROBLEM STATEMENT:
Given a positive integer N, count all possible distinct binary strings of length N
such that there are no consecutive 1’s.Output your answer modulo 10^9 + 7.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int solve(int n) {
    int end_with_zeroes[n];
    int end_with_ones[n];
    end_with_zeroes[0] = 1;
    end_with_ones[0] = 1;
    for (int i = 1; i < n; i++) {
        int temp = end_with_zeroes[i - 1];
        end_with_zeroes[i] = (end_with_zeroes[i - 1] + end_with_ones[i - 1]) % mod;
        end_with_ones[i] = temp % mod;
    }
    return (end_with_zeroes[n - 1] + end_with_ones[n - 1]) % mod;
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
        cout << solve(n) << '\n';
    }
    return 0;
}

/*
INPUT:
3
2
3
4


OUTPUT:
3
5
8
*/