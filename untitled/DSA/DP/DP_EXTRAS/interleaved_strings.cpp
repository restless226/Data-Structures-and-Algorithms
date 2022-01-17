/*
PROBLEM STATEMENT:
Given strings A, B, and C, find whether C is formed by an interleaving of A and B.

An interleaving of two strings S and T is a configuration where they are divided into non-empty substrings such that:

.S = S1 + S2 + ... + SN
.T = T1 + T2 + ... + TM
.|N - M| <= 1
.The interleaving is S1 + T1+ S2 + T2 + S3 + T3 + ... or T1 + S1+ T2 + S2 + T3 + S3 ...
Note: a + b is the concatenation of strings a and b.

Return true if C is formed by an interleaving of A and B, else return false.
*/


/*
OBSERVATIONS:
1.Order of broken substrings must be same as that in given strings.
2. if one string say a is getting broken down into N parts,
   then b will definitely get broken into (n-1) or (n) or (n+1) parts.
NOTE: Only boundary elements are optional for S2 to fill
      blanks within boundaries of S1 are mandatory to fill
      |N - M| <= 1 wil be automatically taken care of.

REQUIREMENTS:
1. len(a) + len(b) = len(c).
2. Substrings of a and b should be in same order in c.
3. Count of unique characters in (a+b) should be same in c .

Each character in s3 has 2 options, it can either match with (s1-char) or (s2-char).
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

unordered_map<string, bool> mp;

// Time Complexity - O(MN)
bool is(string &s1, string &s2, string &s3, int len1, int len2, int len3, int p1, int p2, int p3) {
    // base case
    if (p3 == len3) {
        return (p1 == len1 && p2 == len2) ? true : false;
    }

    string key = to_string(p1) + " " + to_string(p2) + " " + to_string(p3);

    // memoization block check
    if (mp.find(key) != mp.end()) {
        return mp[key];
    }

    if (p1 == len1) {
        mp[key] = s2[p2] == s3[p3] ? is(s1, s2, s3, len1, len2, len3, p1, p2 + 1, p3 + 1) : false;
    }

    if (p2 == len2) {
        mp[key] = s1[p1] == s3[p3] ? is(s1, s2, s3, len1, len2, len3, p1 + 1, p2, p3 + 1) : false;
    }

    bool one = false;
    bool two = false;

    if (s1[p1] == s3[p3]) {
        one = is(s1, s2, s3, len1, len2, len3, p1 + 1, p2, p3 + 1);
    }

    if (s2[p2] == s3[p3]) {
        two = is(s1, s2, s3, len1, len2, len3, p1, p2 + 1, p3 + 1);
    }

    return mp[key] = one || two;
}

bool solve(string &s1, string &s2, string &s3) {
    mp.clear();
    int len1 = s1.length();
    int len2 = s2.length();
    int len3 = s3.length();

    if (len1 + len2 != len3) {
        return false;
    }

    return is(s1, s2, s3, len1, len2, len3, 0, 0, 0);
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    string a, b, c;
    while (t--) {
        cin >> a >> b >> c;
        if (solve(a, b, c)) {
            cout << "\ntrue";
        } else {
            cout << "\nfalse";
        }
    }

    return 0;
}

/*
INPUT:
2
xy x xxy
yx x xxy

OUTPUT:
true
false
*/