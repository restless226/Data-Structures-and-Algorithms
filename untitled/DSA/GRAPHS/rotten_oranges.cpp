///*
//PROBLEM STATEMENT:
//Given a grid of dimension nxm where each cell in the grid can have values 0, 1 or 2 which has the following meaning:
//0 : Empty cell
//1 : Cells have fresh oranges
//2 : Cells have rotten oranges
//We have to determine what is the minimum time required to rot all oranges.
//A rotten orange at index [i,j] can rot other fresh orange at indexes
//[i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//bool isValid(int i, int j, int n, int m, vector<vector<int>> &grid) {
//    return (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 1) ? true : false;
//}
//
//int solve(vector<vector<int>> &grid) {
//    int n = grid.size();
//    int m = grid[0].size();
//    queue<pair<int, int>> queue;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (grid[i][j] == 2) {
//                queue.push({i, j});
//            }
//        }
//    }
//    int timer = -1;
//    while (!queue.empty()) {
//        int size = queue.size();
//        while (size--) {
//            int x = queue.front().first;
//            int y = queue.front().second;
//            queue.pop();
//            if (isValid(x + 1, y, n, m, grid)) {
//                queue.push({x + 1, y});
//                grid[x + 1][y] = 2;
//            }
//            if (isValid(x - 1, y, n, m, grid)) {
//                queue.push({x - 1, y});
//                grid[x - 1][y] = 2;
//            }
//            if (isValid(x, y + 1, n, m, grid)) {
//                queue.push({x, y + 1});
//                grid[x][y + 1] = 2;
//            }
//            if (isValid(x, y - 1, n, m, grid)) {
//                queue.push({x, y - 1});
//                grid[x][y - 1] = 2;
//            }
//        }
//        timer++;
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (grid[i][j] == 1) {
//                return -1;
//            }
//        }
//    }
//    return timer;
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
//2
//3 3
//0 1 2
//0 1 2
//2 1 1
//1 4
//2 2 0 1
//
//OUTPUT:
//1
//-1
//*/