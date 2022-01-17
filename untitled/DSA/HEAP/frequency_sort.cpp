/*
PROBLEM STATEMENT:
Given an array A[] of integers, sort the array according to frequency of elements.
That is elements that have higher frequency come first.
If frequencies of two elements are same, then smaller number comes first.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;
typedef pair<int, int> pii;

struct cmp {
    int operator()(const pii &p1, const pii &p2) {
        if (p1.first < p2.first) return true;
        else if (p1.first > p2.first) return false;
        else return (p1.second > p2.second) ? true : false;
    }
};

void solve(int arr[], int n, vector<int> &ans) {
    unordered_map<int, int> mp;
    priority_queue<pii, vector<pii>, cmp> mxh;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    for (auto &itr:mp) {
        mxh.push({itr.second, itr.first});
    }
    while (!mxh.empty()) {
        int temp = mxh.top().first;
        while (temp--) {
            ans.push_back(mxh.top().second);
        }
        mxh.pop();
    }
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
        int arr[n + 1];
        for (int i = 0; i < n; i++) cin >> arr[i];
        vector<int> ans;
        solve(arr, n, ans);
        for (auto &itr:ans)
            cout << itr << " ";
        cout << '\n';
    }
    return 0;
}

/*
INPUT:
2
5
5 5 4 6 4
5
9 9 9 2 5

OUTPUT:
4 4 5 5 6
9 9 9 2 5
*/