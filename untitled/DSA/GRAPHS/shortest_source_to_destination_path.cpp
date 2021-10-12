///*
//PROBLEM STATEMENT:
//Given a 2D binary matrix A(0-based index) of dimensions NxM.
//Find the minimum number of steps required to reach from (0,0) to (X, Y).
//Note: You can only move left, right, up and down, and only through cells that contain 1.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//
//bool check(int i, int j, int n, int m) {
//    return (i < 0 || i >= n || j < 0 || j >= m) ? false : true;
//}
//
//int solve(int n, int m, vector<vector<int>> &grid, int X, int Y) {
//    if (X == 0 && Y == 0) return 0;
//    if (grid[0][0] == 0 || grid[X][Y] == 0) return -1;
//    int steps = 0;
//    queue<pair<int, int>> queue;
//    queue.push({0, 0});
//    int dx[] = {-1, 1, 0, 0};
//    int dy[] = {0, 0, -1, 1};
//    while (!queue.empty()) {
//        int size = queue.size();
//        while (size--) {
//            pair<int, int> pair = queue.front();
//            queue.pop();
//            int x = pair.first;
//            int y = pair.second;
//            if (x == X && y == Y) {
//                return steps;
//            }
//            for (int k = 0; k < 4; k++) {
//                int i = x + dx[k];
//                int j = y + dy[k];
//                if (check(i, j, n, m) && grid[i][j] == 1) {
//                    queue.push({i, j});
//                    grid[i][j] = 0;
//                }
//            }
//        }
//        steps++;
//    }
//    return -1;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n, m, X, Y;
//        cin >> n >> m;
//        vector<vector<int>> grid(n, vector<int>(m));
//        for (int i = 0; i < n; i++)
//            for (int j = 0; j < m; j++) cin >> grid[i][j];
//        cin >> X >> Y;
//        cout << solve(n, m, grid, X, Y) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//3 4
//1 0 0 0
//1 1 0 1
//0 1 1 1
//2 3
//3 4
//1 1 1 1
//0 0 0 1
//0 0 0 1
//0 3
//
//OUTPUT:
//5
//3
//*/