///*
//PROBLEM STATEMENT:
//Given a grid of size n*n filled with 0, 1, 2, 3.
//Check whether there is a path possible from the source to destination.
//You can traverse up, down, right and left.
//The description of cells is as follows:
//A value of cell 1 means Source.
//A value of cell 2 means Destination.
//A value of cell 3 means Blank cell.
//A value of cell 0 means Wall.
//NOTE: There are only a single source and a single destination.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//vector<int> dx = {-1, 0, 1, 0};
//vector<int> dy = {0, -1, 0, 1};
//
//bool dfs(vector<vector<int>> &grid, int i, int j, int n) {
//    if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] == 0) return false;
//    if (grid[i][j] == 2) return true;
//    grid[i][j] = 0;
//    for (int k = 0; k < 4; k++) {
//        if (dfs(grid, i + dx[k], j + dy[k], n)) return true;
//    }
//    return false;
//}
//
//bool isValid(int x, int y, int n) {
//    return (x < 0 || x >= n || y < 0 || y >= n) ? false : true;
//}
//
//bool solve(vector<vector<int>> &grid) {
//    int n = grid.size();
//    queue<pair<int, int>> queue;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (grid[i][j] == 1) {
//                return dfs(grid, i, j, n);
//                queue.push({i, j});
//                break;
//            }
//        }
//    }
//    while (!queue.empty()) {
//        int x = queue.front().first;
//        int y = queue.front().second;
//        queue.pop();
//        for (int i = 0; i < 4; i++) {
//            if (isValid(x + dx[i], y + dy[i], n)) {
//                if (grid[x + dx[i]][y + dy[i]] == 2) return true;
//                if (grid[x + dx[i]][y + dy[i]] == 3) {
//                    grid[x + dx[i]][y + dy[i]] = 0;
//                    queue.push({x + dx[i], y + dy[i]});
//                }
//            }
//        }
//    }
//    return false;
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
//        cout << solve(grid) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//5
//3 0 3 0 0
//3 0 0 0 3
//3 3 3 3 3
//0 2 3 0 0
//3 0 0 1 3
//2
//1 3
//3 2
//8
//3 3 3 3 0 0 3 0
//1 3 3 3 3 3 3 2
//3 3 0 3 0 3 3 3
//3 3 3 0 0 3 3 0
//0 3 3 3 3 3 3 3
//0 0 0 3 3 0 3 3
//0 3 0 3 3 3 3 0
//3 3 3 0 3 3 3 3
//
//
//OUTPUT:
//0
//1
//1
//*/