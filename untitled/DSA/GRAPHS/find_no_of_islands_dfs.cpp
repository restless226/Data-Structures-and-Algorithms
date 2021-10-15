///*
//PROBLEM STATEMENT:
//Given a grid consisting of '0's(Water) and '1's(Land). Find the number of islands.
//Note: An island is surrounded by water and is formed by connecting adjacent lands
//horizontally or vertically or diagonally i.e., in all 8 directions.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void dfs(vector<vector<char>> &grid, int i, int j, vector<vector<bool>> &visited, int n, int m) {
//    if (i < 0 || j < 0 || i >= n || j >= m) return;
//    if (grid[i][j] == '1' && !visited[i][j]) {
//        visited[i][j] = true;
//        dfs(grid, i, j + 1, visited, n, m);
//        dfs(grid, i, j - 1, visited, n, m);
//        dfs(grid, i - 1, j, visited, n, m);
//        dfs(grid, i + 1, j, visited, n, m);
//        dfs(grid, i - 1, j - 1, visited, n, m);
//        dfs(grid, i - 1, j + 1, visited, n, m);
//        dfs(grid, i + 1, j - 1, visited, n, m);
//        dfs(grid, i + 1, j + 1, visited, n, m);
//    }
//}
//
//int solve(vector<vector<char>> &grid) {
//    int n = grid.size();
//    int m = grid[0].size();
//    vector<vector<bool>> visited(n, vector<bool>(m, false));
//    int ans = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (!visited[i][j] && grid[i][j] == '1') {
//                dfs(grid, i, j, visited, n, m);
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
//        int ans = solve(grid);
//        cout << ans << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//4
//2
//0 1
//1 0
//1 1
//1 0
//2
//7
//0 1 1 1 0 0 0
//0 0 1 1 0 1 0
//4
//4
//1 1 1 0
//0 1 0 0
//0 0 0 1
//1 0 1 1
//
//OUTPUT:
//1
//2
//3
//*/