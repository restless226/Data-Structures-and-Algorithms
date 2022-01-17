/*
PROBLEM STATEMENT:
Given two strings s and p.
Find the smallest window in the string s consisting of all the characters
(including duplicates) of the string p.
Return "-1" in case there is no such window present.
In case there are multiple such windows of same length,
return the one with the least starting index.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

string solve(string &s, string &p) {

}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        string s, p;
        cin >> s;
        cin >> p;
        cout << solve(s, p) << '\n';
    }
    return 0;
}

/*
INPUT:
2
timetopractice
toc
zoomlazapzo
oza

OUTPUT:
toprac
apzo
*/