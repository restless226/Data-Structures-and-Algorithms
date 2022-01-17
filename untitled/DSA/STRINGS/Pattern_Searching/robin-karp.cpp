/*
PROBLEM STATEMENT:
Implement strStr().
Return the index of the first occurrence of pat in txt,
or -1 if pat is not part of txt.

Clarification:
What should we return when pat is an empty string?
This is a great question to ask during an interview.
For the purpose of this problem, we will return 0 when pat is an empty string.
This is consistent to C's strstr() and Java's indexOf().
*/

#include <bits/stdc++.h>

#define int long long int
using namespace std;
const int mod = 1000000007;

int solve(string &pat, string &txt) {
    if (pat.empty()) return 0;
    int hpat = 0, htxt = 0;
    int d = 26;
    int p = 5381;
    for (int i = 0; i < pat.size(); i++) {
        hpat *= d;
        hpat = hpat + (((pat[i] - 'A' + 1)) % p);
    }
    int l = 0, r = 0;
    while (r < txt.size()) {
        htxt *= d;
        htxt = htxt + ((txt[r] - 'A' + 1) % p);
        if (r - l + 1 == pat.size()) {
            if (htxt == hpat) return l;
            htxt = htxt - (((txt[l] - 'A' + 1) * pow(d, r - l)));
            l++;
        }
        r++;
    }
    return -1;
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
        cout << solve(pat, txt) << '\n';
    }
    return 0;
}

/*
INPUT:
10
batmanandrobinarebat bat
abesdu edu
cdabcdab abcd
aa a
a a
wxyz abc
hello ll
aaaaa bba
mississippi mississippi
abbbbbaabbaabaabbbaaaaabbabbbabbbbbaababaabbaabbbbbababaababbbbaaabbbbabaabaaaabbbbabbbaabbbaabbaaabaabaaaaaaaa
abbbaababbbabbbabbbbbabaaaaaaabaabaabbbbaabab

OUTPUT:
0
-1
2
0
0
-1
2
-1
0
-1
*/