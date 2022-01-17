/*
PROBLEM STATEMENT:
Given a string S containing only digits, Your task is to complete the function solve()
which returns a vector containing all possible combination of valid IPv4 ip address
and takes only a string S as its only argument.
Note : Order of output doesn't matter.
Example:
For string 11211 the ip address possible are
1.1.2.11
1.1.21.1
1.12.1.1
11.2.1.1

Expected Time Complexity: O(N * N * N * N)
Expected Auxiliary Space: O(N * N * N * N)
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

void solve(string &s, vector<string> &ans) {

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
        vector<string> ans;
        solve(s, ans);
        sort(ans.begin(), ans.end());
        for (auto &u : ans) cout << u << "\n";
    }
    return 0;
}

/*
INPUT:
2
11211
1111

OUTPUT:

*/