/*
PROBLEM STATEMENT:
Given an array of points where points[i] = [xi, yi]
represents a point on the X-Y plane and an integer k,
return the k closest points to the origin (0, 0).
The distance between two points on the X-Y plane is the
Euclidean distance (i.e., √(x1 - x2)2 + (y1 - y2)2).
You may return the answer in any order.
The answer is guaranteed to be unique (except for the order that it is in).
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

vector<vector<int>> solve(vector<vector<int>> &points, int k) {
    int n = points.size();
    vector<vector<int>> ans;
    priority_queue<pair<double, vector<int>>> mxh;
    for (int i = 0; i < n; i++) {
        double dist = sqrt((points[i][0] * points[i][0]) + (points[i][1] * points[i][1]));
        mxh.push({dist, {points[i][0], points[i][1]}});
        if (mxh.size() > k) mxh.pop();
    }
    while (!mxh.empty()) {
        ans.push_back({mxh.top().second[0], mxh.top().second[1]});
        mxh.pop();
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
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        int k;
        cin >> k;
        vector<vector<int>> ans = solve(points, k);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i][0] << " " << ans[i][1] << '\n';
        }
        cout << '\n';
    }
    return 0;
}

/*
INPUT:
4
2
1 3
-2 2
1
3
3 3
5 -1
-2 4
2
3
-5 4
-6 -5
4 6
2
2
9997 9997
9996 9998
1

OUTPUT:
-2 2

-2 4
3 3

4 6
-5 4

9997 9997
*/