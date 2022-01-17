/*
PROBLEM STATEMENT:
Given two strings, one is a text string, txt and other is a pattern string, pat.
The task is to print the indexes of all the occurrences of pattern string in the text string.
For printing, Starting Index of a string should be taken as 1.

Pattern searching is an important problem in computer science.
When we search for a string in notepad/word file or browser or database,
pattern searching algorithms are used to show the search results.

Naive Pattern_Searching:
Slide the pattern over text one by one and check for a match.
If a match is found, then slides by 1 again to check for subsequent matches.
The worst case complexity of the Naive algorithm is O(m(n-m+1))
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

// Time Complexity => O(n^3)
vector<int> prefix_naive(string &s) {
    int n = s.size();
    vector<int> prefix(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (s.substr(0, j) == s.substr(i - j + 1, j)) prefix[i] = j;
        }
    }
    return prefix;
}

// Time Complexity => O(n)
vector<int> prefix_optimized(string &s) {
    int n = s.size();
    vector<int> prefix(n, 0);
    for (int i = 1; i < n; i++) {
        int j = prefix[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = prefix[j - 1];
        }
        if (s[i] == s[j]) j++;
        prefix[i] = j;
    }
    return prefix;
}

vector<int> solve(string &pat, string &txt) {
    vector<int> prefix = prefix_optimized(pat);
    vector<int> ans;
    int i = 0, j = 0;
    while (i < txt.size()) {
        if (txt[i] == pat[j]) {
            i++;
            j++;
        } else {
            if (j != 0) j = prefix[j - 1];
            else i++;
        }
        if (j == pat.size()) {
            ans.push_back(i - pat.size() + 1);
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
    while (t--) {
        string txt, pat;
        cin >> txt;
        cin >> pat;
        vector<int> ans = solve(pat, txt);
        if (ans.size() == 0) cout << -1 << endl;
        else {
            for (int i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

/*
INPUT:
2
batmanandrobinarebat
bat
abesdu
edu

OUTPUT:
1 18
-1
*/