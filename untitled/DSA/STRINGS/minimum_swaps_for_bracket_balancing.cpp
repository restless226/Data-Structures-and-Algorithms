/*
PROBLEM STATEMENT:
You are given a string S of 2N characters consisting of N ‘[‘ brackets and N ‘]’ brackets.
A string is considered balanced if it can be represented
in the for S2[S1] where S1 and S2 are balanced strings.
We can make an unbalanced string balanced by swapping adjacent characters.
Calculate the minimum number of swaps necessary to make a string balanced.
NOTE - Strings S1 and S2 can be empty.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int solve(string &s) {
    stack<char> stack;
    for (char &c : s) {
        if (c == '[') {
            stack.push(c);
        } else if (!stack.empty()) {
            stack.pop();
        }
    }
    return stack.size();
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
]][[
[]][][
[[][]]

OUTPUT:

*/