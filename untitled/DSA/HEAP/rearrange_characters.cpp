/*
PROBLEM STATEMENT:
Given a string S with repeated characters.
The task is to rearrange characters in a string
such that no two adjacent characters are the same.
Note: The string has only lowercase English alphabets and
it can have multiple solutions. Return any one of them.
If the string cannot be generated return "-1".
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

string solve(string &str) {
    int n = str.length();
    unordered_map<char, int> mp;
    priority_queue<pair<int, char>> mxh;
    for (char &c:str) {
        mp[c]++;
        if (mp[c] > (n + 1) / 2) return "-1";
    }
    for (auto &itr:mp) {
        mxh.push({itr.second, itr.first});
    }
    string ans(n, ' ');
    auto top = mxh.top();
    mxh.pop();
    int index = 0;
    while (top.first--) {
        ans[index] = top.second;
        index += 2;
    }
    while (!mxh.empty()) {
        top = mxh.top();
        mxh.pop();
        while (top.first--) {
            index = (index >= n) ? 1 : index;
            ans[index] = top.second;
            index += 2;
        }
    }
    return ans;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << solve(str) << '\n';
    }
    return 0;
}

/*
INPUT:
4
aaab
aaabb
geeksforgeeks
bbbbb

OUTPUT:
-1
ababa
ekegegersosfk
-1
*/