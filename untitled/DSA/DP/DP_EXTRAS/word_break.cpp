/*
PROBLEM STATEMENT:
Given a string A and a dictionary of n words B,
find out if A can be segmented into a space-separated sequence of dictionary words.
Note: From the dictionary B each word can be taken any number of times and in any order.
*/

#include <bits/stdc++.h>

#define MAX 12
#define int long long
using namespace std;

void printArray(bool dp[], int n) {
    for (int i = 0; i < n + 1; ++i) {
        cout << dp[i] << " ";
    }
    cout << '\n';
}

bool wb(unordered_set<string> &dict, string &A, bool dp[]) {
    int n = A.length();
    if (n == 0) {
        return true;
    }

    for (int i = 0; i < n + 1; i++) {
        dp[i] = false;
    }

    for (int i = 1; i < n + 1; i++) {
        if (dict.find(A.substr(0, i)) != dict.end() && dp[i] == false) {
            dp[i] = true;
        }
        if (dp[n]) {
            return true;
        }
        if (dp[i]) {
            for (int j = i; j <= n; j++) {
                if (!dp[j] && dict.find(A.substr(i, j - i)) != dict.end()) {
                    dp[j] = true;
                }
                if (dp[n]) {
                    return true;
                }
            }
        }
    }
    return false;
}


bool solve(vector<string> &B, string A) {
    unordered_set<string> dict;
    int n = A.length();
    bool dp[n + 1];
    for (auto &itr : B) {
        dict.insert(itr);
    }
    bool ans = wb(dict, A, dp);
    cout << "\nDP ARRAY AFTER...\n";
    printArray(dp, n);
    return ans;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    int n;
    string str;
    string A;
    vector<string> B;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> str;
            B.push_back(str);
        }
        cin >> A;

        if (solve(B, A)) {
            cout << "can be segmented\n";
        } else {
            cout << "cannot be segmented\n";
        }
    }

    return 0;
}

/*
INPUT:
2
12
i like sam sung samsung mobile ice cream icecream man go mango
ilike
4
lrbbmqb cd r owkk
lrbbmqbabowkkab

OUTPUT:
DP ARRAY AFTER...
0 1 0 0 0 1
can be segmented

DP ARRAY AFTER...
0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
cannot be segmented
*/