/*
PROBLEM STATEMENT:
Given an array of strings, return all groups of strings that are anagrams.
The groups must be created in order of their appearance in the original array.

Expected Time Complexity: O(N*|S|*log|S|), where |S| is the length of the strings.
Expected Auxiliary Space: O(N*|S|), where |S| is the length of the strings.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

vector<vector<string>> solve(vector<string> &list) {
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> group;
    string temp;
    for (int i = 0; i < list.size(); i++) {
        temp = list[i];
        sort(list[i].begin(), list[i].end());
        group[list[i]].push_back(temp);
    }
    for (auto &itr:group) ans.push_back(itr.second);
    return ans;
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
        vector<string> list(n);
        for (int i = 0; i < n; ++i) cin >> list[i];
        vector<vector<string> > ans = solve(list);
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
    return 0;
}

/*
INPUT:
3
5
act god cat dog tac
3
no on is
6
eat tea tan ate nat bat

OUTPUT:
act cat tac
god dog
is
no on
bat
eat tea ate
tan nat
*/