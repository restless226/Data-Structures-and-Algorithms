/*
PROBLEM STATEMENT:
Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.
You are required to complete the function encode that takes only one argument the string which is to be encoded and returns the encoded string.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

string solve(string &src) {
    string ans;
    ans.push_back(src[0]);
    int count = 1;
    for (int i = 1; i < src.size(); i++) {
        if (src[i] == src[i - 1]) {
            count++;
        } else {
            ans += to_string(count);
            ans.push_back(src[i]);
            count = 1;
        }
    }
    return ans + to_string(count);
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        string src;
        cin >> src;
        cout << solve(src) << '\n';
    }
    return 0;
}

/*
INPUT:
3
wwwwaaadexxxxxx
aaaabbbccc
abbbcdddd

OUTPUT:
w4a3d1e1x6
a4b3c3
a1b3c1d4
*/