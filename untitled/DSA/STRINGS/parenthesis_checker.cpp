/*
PROBLEM STATEMENT:
Given an expression string x.
Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the function should return 'true'
for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

bool solve(string &s) {
    stack<char> stack;
    for (char &c : s) {
        if (c == '{' || c == '[' || c == '(') {
            stack.push(c);
        } else {
            if (stack.empty()) return false;
            else if (c == '}' && stack.top() != '{') return false;
            else if (c == ']' && stack.top() != '[') return false;
            else if (c == ')' && stack.top() != '(') return false;
            else stack.pop();
        }
    }
    return stack.empty() ? true : false;
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
        solve(s) ? cout << "balanced" << '\n' : cout << "not balanced" << '\n';
    }
    return 0;
}

/*
INPUT:
3
{([])}
()
([]

OUTPUT:
balanced
balanced
not balanced
*/