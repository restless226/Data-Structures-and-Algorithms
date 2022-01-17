/*
PROBLEM STATEMENT:
Given a string S, find the longest palindromic substring in S.
Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S).
Palindrome string: A string which reads the same backwards.
More formally, S is palindrome if reverse(S) = S.
In case of conflict, return the substring which occurs first (with the least starting index).

Expected Time Complexity: O(|S|^2).
Expected Auxiliary Space: O(1).
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int expand(string &s, int left, int right) {
    if (s.empty() || left > right) return 0;
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}

string solve(string &s) {
    int n = s.length();
    if (n == 1) return s;
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++) {
        int len = max(expand(s, i, i), expand(s, i, i + 1));
        if (len > (end - start + 1)) {
            start = i - ((len - 1) / 2);
            end = i + (len / 2);
        }
    }
    return s.substr(start, end - start + 1);
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
        cout << solve(s) << '\n';
    }
    return 0;
}

/*
INPUT:
3
aaaabbaa
abc
racecar

OUTPUT:
aabbaa
a
racecar
*/