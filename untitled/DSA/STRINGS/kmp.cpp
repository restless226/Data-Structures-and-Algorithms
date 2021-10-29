/*
PROBLEM STATEMENT:
Given two strings, one is a text string, txt and other is a pattern string, pat.
The task is to print the indexes of all the occurrences of pattern string in the text string.
For printing, Starting Index of a string should be taken as 1.

Pattern searching is an important problem in computer science.
When we search for a string in notepad/word file or browser or database,
pattern searching algorithms are used to show the search results.

Naive Pattern Searching:
Slide the pattern over text one by one and check for a match.
If a match is found, then slides by 1 again to check for subsequent matches.
The worst case complexity of the Naive algorithm is O(m(n-m+1))
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

vector<int> solve(string &pat, string &txt) {

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


OUTPUT:

*/