/*
PROBLEM STATEMENT:
Given an array of N positive integers, print k largest elements from the array.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

vector<int> solve(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> mnh;
    for (int i = 0; i < n; i++) {
        mnh.push(arr[i]);
        if (mnh.size() > k) mnh.pop();
    }
    vector<int> ans;
    while (!mnh.empty()) {
        ans.push_back(mnh.top());
        mnh.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> result = solve(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}

/*
INPUT:
3
5 2
12 5 787 1 23
7 3
1 23 12 9 30 2 50
6 3
7 10 4 3 20 15

OUTPUT:
787 23
50 30 23
20 15 10
*/