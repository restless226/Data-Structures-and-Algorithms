///*
//PROBLEM STATEMENT:
//Given  a grid of n*m consisting of O's and X's.
//The task is to find the number of 'X' total shapes.
//Note: 'X' shape consists of one or more adjacent X's (diagonals not included).
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void dfs(vector<vector<char>> &grid, int i, int j, int n, int m) {
//    if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 'O') return;
//    grid[i][j] = 'O';
//    dfs(grid, i, j + 1, n, m);
//    dfs(grid, i, j - 1, n, m);
//    dfs(grid, i - 1, j, n, m);
//    dfs(grid, i + 1, j, n, m);
//}
//
//int solve(vector<vector<char>> &grid) {
//    int n = grid.size();
//    int m = grid[0].size();
//    int ans = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (grid[i][j] == 'X') {
//                dfs(grid, i, j, n, m);
//                ans++;
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
//        vector<vector<char>> grid(n, vector<char>(m, '#'));
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cin >> grid[i][j];
//            }
//        }
//        cout << solve(grid) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//3 3
//XOX
//OXO
//XXX
//
//OUTPUT:
//3
//*/