/*
PROBLEM STATEMENT:
Given an array of n elements, where each element
is at most k away from its target position.
The task is to print array in sorted form.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

void solve(int arr[], int n, int k) {
    vector<int> temp;
    priority_queue<int, vector<int>, greater<int>> mnh;
    for (int i = 0; i < n; i++) {
        mnh.push(arr[i]);
        if (mnh.size() > k) {
            temp.push_back(mnh.top());
            mnh.pop();
        }
    }
    while (!mnh.empty()) {
        temp.push_back(mnh.top());
        mnh.pop();
    }
    for (int i = 0; i < n; i++) {
        cout << temp[i] << ' ';
    }
    cout << '\n';
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
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        solve(arr, n, k);
    }
    return 0;
}

/*
INPUT:
2
7 3
6 5 3 2 8 10 9
5 2
3 1 4 2 5

OUTPUT:
2 3 5 6 8 9 10
1 2 3 4 5
*/