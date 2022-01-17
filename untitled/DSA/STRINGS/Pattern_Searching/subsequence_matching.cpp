/*
PROBLEM STATEMENT:
Given an all upper case string str,
check if it is a combination of one or more of the following:
1) R
2) RY
3) RYY
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

bool solve(string &s) {
    if (s[0] != 'R') return false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'R' && s[i] != 'Y') return false;
    }
    for (int i = 0; i < s.size() - 3; i++) {
        if (s.substr(i, 3) == "YYY") return false;
    }
    return true;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        if (solve(str)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

/*
INPUT:
2
RWR
RRYY

OUTPUT:
NO
YES
*/