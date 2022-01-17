/*
PROBLEM STATEMENT:
Given a binary string str of length N,
the task is to find the maximum count of consecutive substrings str
that can be divided into such that all the substrings are balanced
i.e. they have equal number of 0s and 1s.
If it is not possible to split str satisfying the conditions then print -1.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int solve(string &s) {
    int zeroes = 0, ones = 0;
    int count = 0;
    for (char c : s) {
        c == '0' ? zeroes++ : ones++;
        if (zeroes == ones) count++;
    }
    return (zeroes != ones) ? -1 : count;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << '\n';
    }
    return 0;
}

/*
INPUT:
4
00110011
10101
0100110101
0111100010

OUTPUT:
2
-1
4
3
*/