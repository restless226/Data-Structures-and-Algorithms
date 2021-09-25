/*
PROBLEM STATEMENT:
Given two strings 'str' and a wildcard pattern 'pattern' of length N and M respectively,
You have to print '1' if the wildcard pattern is matched with str else print '0' .

The wildcard pattern can include the characters ‘?’ and ‘*’
‘?’ – matches any single character
‘*’ – Matches any sequence of characters (including the empty sequence)

Note: The matching should cover the entire str (not partial str).
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

bool solve(string &pat, string &txt) {
    int m = pat.length();
    int n = txt.length();
    bool dp[m + 1][n + 1];

    // dp[i][j] -> is substring from 0 to in pat is matching with substring from 0 to j in txt or not

    // INITIALIZATION
    dp[0][0] = true;
    // first row
    for (int i = 1; i < n + 1; i++) {
        dp[0][i] = false;
    }
    // first column
    for (int j = 1; j < m + 1; j++) {
        if (pat[j - 1] == '*' || pat[j - 1] == '?') {
            dp[j][0] = true;
        } else {
            dp[j][0] = false;
        }
    }

    // ITERATION
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            
        }
    }
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    string pat;
    string txt;
    while (t--) {
        cin >> pat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> txt;
        cout << solve(pat, txt);
    }

    return 0;
}

/*
INPUT:


OUTPUT:

*/