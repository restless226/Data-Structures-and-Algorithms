/*
PROBLEM STATEMENT:
For given string ‘str’ of digits, find length of the longest substring of ‘str’,
such that the length of the substring is 2k digits and sum of left k digits
is equal to the sum of right k digits.

Input:
The first line of input contains an integer T denoting the number of test cases.
The description of T test cases follows.
Each test case contains a string string of length N.

Output:
Print length of the longest substring of length 2k such that sum of left k elements
is equal to right k elements and if there is no such substring print 0.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int solve(string &s) {
    int ans = 0;
    int l, r, lsum, rsum;
    int n = s.size();
    for (int i = 0; i < n - 1; i++) {
        l = i, r = i + 1, lsum = 0, rsum = 0;
        while (l >= 0 && r <= n - 1) {
            lsum += s[l] - '0';
            rsum += s[r] - '0';
            if (lsum == rsum) ans = max(ans, r - l + 1);
            l--;
            r++;
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
        string s;
        cin >> s;
        cout << solve(s) << '\n';
    }
    return 0;
}

/*
INPUT:
2
000000
1234123

OUTPUT:
6
4
*/