/*
PROBLEM STATEMENT:
Given a string of lowercase alphabets, count all possible substrings
(not necessarily distinct) that have exactly k distinct characters.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void printArray(int **dp, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << dp[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}

// pro solution
// TODO
int substr_count(string &s, int k) {
    int n = s.length();
}

// noob solution O(n^2)
int solve(string &s, int k) {
    int ans = 0;
    int n = s.length();
    int cnt[26];

    for (int i = 0; i < n; i++) {
        int dist_cnt = 0;
        memset(cnt, 0, sizeof(cnt));
        for (int j = i; j < n; j++) {
            if (cnt[s[j] - 'a'] == 0) {
                dist_cnt++;
            }
            cnt[s[j] - 'a']++;
            if (dist_cnt == k) {
                ans++;
            }
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
    string s;
    int k;
    while (t--) {
        cin >> s;
        cin >> k;
        cout << "\nno of substrings exactly k distinct characters is : " << substr_count(s, k);
    }

    return 0;
}

/*
INPUT:


OUTPUT:

*/