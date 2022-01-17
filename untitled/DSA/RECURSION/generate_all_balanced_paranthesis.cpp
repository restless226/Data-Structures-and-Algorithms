/*
PROBLEM STATEMENT:
Given an integer N representing the number of pairs of parentheses,
the task is to generate all combinations of well-formed(balanced) parentheses.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void gabp(string output, int opening, int closing, vector<string> &ans) {
    // base condition
    if (opening == 0 && closing == 0) {
        ans.push_back(output);
        return;
    }
    if (opening == closing) {
        output.push_back('(');
        gabp(output, opening - 1, closing, ans);
    } else if (opening < closing) {
        if (opening == 0) {
            output.push_back(')');
            gabp(output, opening, closing - 1, ans);
        } else {
            output.push_back('(');
            gabp(output, opening - 1, closing, ans);
            output.pop_back();
            output.push_back(')');
            gabp(output, opening, closing - 1, ans);
        }
    } else if (opening > closing) {
        return;
    }
}

void solve(int n, vector<string> &ans) {
    string output;
    return gabp(output, n, n, ans);
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> ans;
        solve(n, ans);
        for (auto &itr : ans) {
            cout << itr << "\n";
        }
        cout << '\n';
    }
    return 0;
}

/*
INPUT:
3
2
3
4

OUTPUT:
(())
()()

((()))
(()())
(())()
()(())
()()()

(((())))
((()()))
((())())
((()))()
(()(()))
(()()())
(()())()
(())(())
(())()()
()((()))
()(()())
()(())()
()()(())
()()()()
*/