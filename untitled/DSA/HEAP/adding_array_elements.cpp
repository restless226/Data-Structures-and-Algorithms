/*
PROBLEM STATEMENT:
Given an array Arr[] of size N and an integer K,
you have to add the first two minimum elements of the array
until all the elements are greater than or equal to K and
find the number of such operations required.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int solve(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> mnh;
    for (int i = 0; i < n; i++) {
        mnh.push(arr[i]);
    }
    int ans = 0;
    while (!mnh.empty()) {
        int x = mnh.top();
        mnh.pop();
        int y = mnh.top();
        mnh.pop();
        if (x >= k and y >= k) break;
        mnh.push(x + y);
        ans++;
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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int ans = solve(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

/*
INPUT:
2
6 6
1 10 12 9 2 3
4 4
5 4 6 4

OUTPUT:
2
0
*/