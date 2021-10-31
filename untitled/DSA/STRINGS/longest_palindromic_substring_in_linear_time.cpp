/*
PROBLEM STATEMENT:
Given a string, find the longest substring which is palindrome in Linear time O(N).

Input:
The first line of input contains an integer T denoting the no of test cases .
Then T test cases follow. The only line of each test case contains a string.

Output:
For each test case print the Longest Palindromic Substring.
If there are multiple such substrings of same length,
print the one which appears first in the input string.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

string solve(string &s) {

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
2
babcbabcbaccba
forgeeksskeegfor

OUTPUT:
abcbabcba
geeksskeeg
*/