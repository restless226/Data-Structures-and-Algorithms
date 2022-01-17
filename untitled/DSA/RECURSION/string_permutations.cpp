/*
PROBLEM STATEMENT:
Given a string S. The task is to find all permutations of a given string.

Time Complexity:
O(time to print one permutation * no of permutations)
O(n * n!)
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void permute(string input, int low, int high, vector<string> &ans) {
    // base condition
    if (low == high) {
        ans.push_back(input);
        return;
    }
    // hypothesis
    for (int i = low; i <= high; i++) {
        swap(input[low], input[i]);   // permute
        permute(input, low + 1, high, ans);
        swap(input[low], input[i]);   // backtrack
    }
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        string input;
        cin >> input;
        int n = input.length();
        vector<string> ans;
        permute(input, 0, n - 1, ans);
        sort(ans.begin(), ans.end());
        for (string &s : ans) {
            cout << s << " ";
        }
        cout << '\n';
    }
    return 0;
}

/*
INPUT:
2
ABC
ABSG

OUTPUT:
ABC ACB BAC BCA CAB CBA
ABGS ABSG AGBS AGSB ASBG ASGB BAGS BASG BGAS BGSA BSAG BSGA GABS GASB GBAS GBSA GSAB GSBA SABG SAGB SBAG SBGA SGAB SGBA
*/