/*
PROBLEM STATEMENT:
Given two strings a and b consisting of lowercase characters.
The task is to check whether two given strings are an anagram of each other or not.
An anagram of a string is another string that contains the same characters,
only the order of characters can be different.
For example, “act” and “tac” are an anagram of each other.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

bool solve(string &s1, string &s2) {
    if (s1.size() != s2.size()) return false;
    vector<int> alpha(26, 0);
    for (char &c : s1) alpha[c - 97]++;
    for (char &c : s2) alpha[c - 97]--;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] != 0) return false;
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
        string s1, s2;
        cin >> s1;
        cin >> s2;
        solve(s1, s2) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}

/*
INPUT:
4
act tac
geeksforgeeks geeksforgeeks
allergy allergic
b d

OUTPUT:
YES
YES
NO
NO
*/