/*
PROBLEM STATEMENT:
Given a string of both uppercase and lowercase alphabets,
the task is to print the string with alternate occurrences of any character dropped
(including space and consider upper and lowercase as same).
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

string solve(string &s) {
    unordered_map<char, int> mp;
    string ans;
    for (int i = 0; i < s.length(); i++) {
        char temp = tolower(s[i]);
        mp[temp]++;
        if (mp[temp] & 1) ans += s[i];
    }
    return ans;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        cout << solve(s) << '\n';
    }
    return 0;
}

/*
INPUT:
2
It is a long day dear.
Geeks for geeks

OUTPUT:
It sa longdy ear.
Geks fore
*/