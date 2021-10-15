///*
//PROBLEM STATEMENT:
//Given a grid of dimension nxm containing 0s and 1s.
//Find the unit area of the largest region of 1s.
//Region of 1's is a group of 1's connected 8-directionally
//(horizontally, vertically, diagonally).
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int dfs(vector<vector<int>> &grid, int i, int j, int n, int m) {
//    if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0) return 0;
//    grid[i][j] = 0;
//    return (1 + dfs(grid, i, j + 1, n, m) + dfs(grid, i, j - 1, n, m)
//            + dfs(grid, i - 1, j, n, m) + dfs(grid, i + 1, j, n, m)
//            + dfs(grid, i - 1, j - 1, n, m) + dfs(grid, i - 1, j + 1, n, m)
//            + dfs(grid, i + 1, j - 1, n, m) + dfs(grid, i + 1, j + 1, n, m));
//}
//
//int solve(vector<vector<int>> &grid) {
//    int n = grid.size();
//    int m = grid[0].size();
//    int ans = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (grid[i][j] == 1) {
//                ans = max(ans, dfs(grid, i, j, n, m));
//            }
//        }
//    }
//    return ans;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n, m;
//        cin >> n >> m;
//        vector<vector<int>> grid(n, vector<int>(m, -1));
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
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
//3
//3 4
//1 1 1 0
//0 0 1 0
//0 0 0 1
//1 2
//0 1
//5 8
//0 1 1 1 1 1 1 1
//0 0 0 0 0 0 0 0
//0 0 0 1 0 0 0 1
//0 1 0 0 0 0 1 0
//1 1 1 0 0 1 0 0
//
//OUTPUT:
//5
//1
//7
//*/