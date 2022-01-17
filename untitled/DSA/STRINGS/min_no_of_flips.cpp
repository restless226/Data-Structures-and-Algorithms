/*
PROBLEM STATEMENT:
Given a binary string, that is it contains only 0s and 1s.
We need to make this string a sequence of
alternate characters by flipping some of the bits,
our goal is to minimize the number of bits to be flipped.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int solve(string &s) {
    int changes1 = 0, changes2 = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i % 2 == 0 && s[i] == '1') || (i % 2 != 0 && s[i] == '0')) changes1++;
    }
    for (int i = 0; i < s.length(); i++) {
        if ((i % 2 == 0 && s[i] == '0') || (i % 2 != 0 && s[i] == '1')) changes2++;
    }
    return min(changes1, changes2);
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
001
0001010111

OUTPUT:
1
2
*/