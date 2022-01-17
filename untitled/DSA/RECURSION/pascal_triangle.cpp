/*
PROBLEM STATEMENT:
Given a positive integer N, return the Nth row of pascal's triangle.
Pascal's triangle is a triangular array of the binomial coefficients formed by
summing up the elements of previous row.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int mod = 1e+7;

int nCr(int n, int r) {
    if (n == 1) {
        return n;
    }
    if (r == 0 || r == n) {
        return 1;
    }
    return (nCr(n - 1, r - 1) % mod + nCr(n - 1, r) % mod) % mod;
}

void solve(int n, vector<int> &ans) {
    vector<int> temp;
    if (n % 2 == 0) {
        for (int i = 0; i <= n; i++) {
            ans.push_back(nCr(n, i) % mod);
        }
    } else {
        for (int i = 0; i <= (n / 2); i++) {
            ans.push_back(nCr(n, i) % mod);
            temp.push_back(nCr(n, i) % mod);
        }
        for (int i = (int) temp.size() - 1; i >= 0; i--) {
            ans.push_back(temp[i]);
        }
    }
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
        vector<int> ans;
        solve(n, ans);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}

/*
INPUT:
5
0
1
2
3
4

OUTPUT:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/