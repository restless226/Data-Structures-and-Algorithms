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
//bool isValid(int x, int y, int n, int m) {
//    return (x < 0 || x >= n || y < 0 || y >= m) ? false : true;
//}
//
//void bfs(vector<vector<char>> &grid, int n, int m, int i, int j) {
//    queue<pair<int, int>> queue;
//    grid[i][j] = 'O';
//    queue.push({i, j});
//    while (!queue.empty()) {
//        int x = queue.front().first;
//        int y = queue.front().second;
//        queue.pop();
//        if (isValid(x + 1, y, n, m) && grid[x + 1][y] == 'X') {
//            grid[x + 1][y] = 'O';
//            queue.push({x + 1, y});
//        }
//        if (isValid(x - 1, y, n, m) && grid[x - 1][y] == 'X') {
//            grid[x - 1][y] = 'O';
//            queue.push({x - 1, y});
//        }
//        if (isValid(x, y + 1, n, m) && grid[x][y + 1] == 'X') {
//            grid[x][y + 1] = 'O';
//            queue.push({x, y + 1});
//        }
//        if (isValid(x, y - 1, n, m) && grid[x][y - 1] == 'X') {
//            grid[x][y - 1] = 'O';
//            queue.push({x, y - 1});
//        }
//    }
//}
//
//int solve(vector<vector<char>> &grid) {
//    int n = grid.size();
//    int m = grid[0].size();
//    int ans = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (grid[i][j] == 'X') {
//                bfs(grid, n, m, i, j);
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