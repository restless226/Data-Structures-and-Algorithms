/*
PROBLEM STATEMENT:
You are given a string s of lower case english alphabets.
You can choose any two characters in the string and
replace all the occurences of the first character with the second character and
replace all the occurences of the second character with the first character.
Your aim is to find the lexicographically smallest string
that can be obtained by doing this operation at most once.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

string solve(string &s) {
    int n = s.length();
    set<char> set;
    for (int i = 0; i < n; i++) {
        set.insert(s[i]);
    }
    for (int i = 0; i < n; i++) {
        set.erase(s[i]);
        if (set.empty()) {
            break;
        }
        if (*set.begin() < s[i]) {
            int ch = s[i];
            for (int j = 0; j < n; j++) {
                if (s[j] == *set.begin()) {
                    s[j] = ch;
                } else if (s[j] == ch) {
                    s[j] = *set.begin();
                }
            }
            break;
        }
    }
    return s;
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
ccad
abba
adcba


OUTPUT:
aacd
abba
abcda
*/