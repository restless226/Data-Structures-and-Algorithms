/*
PROBLEM STATEMENT:
Given an array arr[] of length n. Find all possible unique permutations of the array.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void permute(vector<int> &input, int low, int high, set<vector<int>> &set) {
    // base condition
    if (low == high) {
        set.insert(input);
        return;
    }
    // hypothesis
    for (int i = low; i <= high; i++) {
        swap(input[low], input[i]);   // permute
        permute(input, low + 1, high, set);
        swap(input[low], input[i]);   // backtrack
    }
}

vector<vector<int>> solve(vector<int> &input, int n) {
    set<vector<int>> set;
    vector<vector<int>> ans;
    permute(input, 0, n - 1, set);
    for (auto &vector:set) {
        ans.push_back(vector);
    }
    sort(ans.begin(), ans.end());
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<vector<int>> ans = solve(arr, n);
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < n; j++) {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}

/*
INPUT:
2
2
4 5
3
1 2 1

OUTPUT:
4 5
5 4

1 1 2
1 2 1
2 1 1
*/