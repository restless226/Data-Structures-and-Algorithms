///*
//PROBLEM STATEMENT:
//Given a square grid of size N, each cell of which contains integer cost which represents a cost to traverse through that cell,
//we need to find a path from top left cell to bottom right cell by which the total cost incurred is minimum.
//From the cell (i,j) we can go (i,j-1), (i, j+1), (i-1, j), (i+1, j).
//NOTE: It is assumed that negative cost cycles do not exist in the input matrix.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//bool isValid(int i, int j, int n) {
//    return (i >= 0 && i < n && j >= 0 && j < n) ? true : false;
//}
//
//int solve(vector<vector<int>> &grid) {
//    int n = grid.size();
//    vector<vector<int>> dp(n + 1, vector<int>(n + 1, INT_MAX));
//    dp[0][0] = grid[0][0];
//    int dx[] = {1, -1, 0, 0};
//    int dy[] = {0, 0, 1, -1};
//    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,
//    greater<pair<int, pair<int, int>>>> pq;
//    pq.push({grid[0][0], {0, 0}});
//    while (!pq.empty()) {
//        int x = pq.top().second.first;
//        int y = pq.top().second.second;
//        pq.pop();
//        for (int i = 0; i < 4; i++) {
//            if (isValid(x + dx[i], y + dy[i], n) &&
//                (dp[x][y] + grid[x + dx[i]][y + dy[i]] < dp[x + dx[i]][y + dy[i]])) {
//                dp[x + dx[i]][y + dy[i]] = dp[x][y] + grid[x + dx[i]][y + dy[i]];
//                pq.push({dp[x + dx[i]][y + dy[i]], {x + dx[i], y + dy[i]}});
//            }
//
//        }
//    }
//    return dp[n - 1][n - 1];
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        vector<vector<int>> grid(n, vector<int>(n, -1));
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                cin >> grid[i][j];
//            }
//        }
//        cout << solve(grid) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//4
//9 4 9 9
//6 7 6 4
//8 3 3 7
//7 4 9 10
//
//OUTPUT:
//43
//*/