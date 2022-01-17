/*
PROBLEM STATEMENT:
Given a number n. The task is to find the smallest number
whose factorial contains at least n trailing zeroes.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

// returns true if mid value contains at least n trailing zeroes
bool check(int mid, int n) {
    int temp = mid, count = 0, f = 5;
    while (f <= temp) {
        count += temp / f;
        f = f * 5;
    }
    return (count >= n);
}

int solve(int n) {
    if (n == 1) {
        return 5;
    }
    int start = 0;
    int end = n * 5;
    while (start < end) {
        int mid = (start + end) >> 1;
        if (check(mid, n)) {
            end = mid;
        } else {
            start = mid + 1;
        }
    }
    return start;
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
4
6
15
19
84

OUTPUT:
25
65
80
345
*/