/*
PROBLEM STATEMENT:
Given a string S consisting of uppercase and lowercase characters.
The task is to sort uppercase and lowercase letters separately such that
if the ith place in the original string had an Uppercase character then
it should not have a lowercase character after being sorted and vice versa.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

string solve(string &s, int n) {
    vector<char> upper, lower;
    for (int i = 0; i < n; i++) {
        if (isupper(s[i])) upper.push_back(s[i]);
        else lower.push_back(s[i]);
    }
    sort(upper.begin(), upper.end());
    sort(lower.begin(), lower.end());
    string ans;
    int u = 0, l = 0;
    for (int i = 0; i < n; i++) {
        if (isupper(s[i])) ans.push_back(upper[u++]);
        else ans.push_back(lower[l++]);
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(s, n) << '\n';
    }
    return 0;
}

/*
INPUT:
2
12
defRTSersUXI
6
srbDKi

OUTPUT:
deeIRSfrsTUX
birDKs
*/