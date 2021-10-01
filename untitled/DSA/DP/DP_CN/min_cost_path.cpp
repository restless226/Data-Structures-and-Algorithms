///*
//PROBLEM STATEMENT:
//Problem Description:
//An integer matrix of size (M x N) has been given. Find out the minimum cost to reach from the cell (0, 0) to (M - 1, N - 1).
//From a cell (i,  j), you can move in three directions:
//1. ((i + 1),  j) which is, "down"
//2. (i, (j + 1)) which is, "to the right"
//3. ((i+1), (j+1)) which is, "to the diagonal"
//
//The cost of a path is defined as the sum of each cell's values through which the route passes.
//*/
//
//#include <bits/stdc++.h>
//
//#define MAX 501
//#define int long long
//using namespace std;
//
//int dp[MAX][MAX];
//
//void printArray(int m, int n) {
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << dp[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//int min_cost_path_MEMOIZED(int **grid, int m, int n, int i, int j) {
//    // base case
//    if (i == m - 1 && j == n - 1) {
//        return grid[i][j];
//    }
//
//    if (i >= m || j >= n) {
//        return INT_MAX;
//    }
//
//    // memoized block check
//    if (dp[i][j] != -1) {
//        return dp[i][j];
//    }
//
//    int down_cost;
//    int right_cost;
//    int diagonal_cost;
//
//    if (dp[i + 1][j] != -1) {
//        down_cost = dp[i + 1][j];
//    } else {
//        down_cost = min_cost_path_MEMOIZED(grid, m, n, i + 1, j);
//        dp[i + 1][j] = down_cost;
//    }
//
//    if (dp[i][j + 1] != -1) {
//        right_cost = dp[i][j + 1];
//    } else {
//        right_cost = min_cost_path_MEMOIZED(grid, m, n, i, j + 1);
//        dp[i][j + 1] = right_cost;
//    }
//
//    if (dp[i + 1][j + 1] != -1) {
//        diagonal_cost = dp[i + 1][j + 1];
//    } else {
//        diagonal_cost = min_cost_path_MEMOIZED(grid, m, n, i + 1, j + 1);
//        dp[i + 1][j + 1] = diagonal_cost;
//    }
//
////    down_cost = min_cost_path_MEMOIZED(grid, m, n, i + 1, j);
////    right_cost = min_cost_path_MEMOIZED(grid, m, n, i, j + 1);
////    diagonal_cost = min_cost_path_MEMOIZED(grid, m, n, i + 1, j + 1);
//
//    // small calculation
//    int cost = grid[i][j] + min(down_cost, min(right_cost, diagonal_cost));
//
//    dp[i][j] = cost;
//    return cost;
//}
//
//// Time complexity - 3 ^ (max(m, n))
//int min_cost_path_RECURSIVE(int **grid, int m, int n, int i, int j) {
////    cout << i << " " << j << '\n';
//    // base case
//    if (i == m - 1 && j == n - 1) {
//        return grid[i][j];
//    }
//
//    if (i >= m || j >= n) {
//        return INT_MAX;
//    }
//
//    // recursive calls
//    int down_cost = min_cost_path_RECURSIVE(grid, m, n, i + 1, j);
//    int right_cost = min_cost_path_RECURSIVE(grid, m, n, i, j + 1);
//    int diagonal_cost = min_cost_path_RECURSIVE(grid, m, n, i + 1, j + 1);
//
//    // small calculation
//    int cost = grid[i][j] + min(down_cost, min(right_cost, diagonal_cost));
//
//    return cost;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    int m, n;
//
//    while (t--) {
//        cin >> m >> n;
//        int **grid = new int *[m];
//        for (int i = 0; i < m; i++) {
//            grid[i] = new int[n];
//        }
//
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                cin >> grid[i][j];
////                dp[i][j] = -1;
//            }
//        }
//
//        cout << "\nmin cost path is : ";
//        cout << "\nRECURSIVE -> " << min_cost_path_RECURSIVE(grid, m, n, 0, 0);
//
//        memset(dp, -1, sizeof(dp));
//
////        cout << "\n\nDP MATRIX BEFORE...\n";
////        printArray(m, n);
//
//        cout << "\nMEMOIZED -> " << min_cost_path_MEMOIZED(grid, m, n, 0, 0);
//
////        cout << "\n\nDP MATRIX AFTER...\n";
////        printArray(m, n);
//    }
//
//    return 0;
//}
//
//
///*
//OUTPUT:
//
//2
//3 4
//3 4 1 2
//2 1 8 9
//4 7 8 1
//3 4
//10 6 9 0
//-23 8 9 90
//-200 0 89 200
//
//min cost path is :
//RECURSIVE -> 13
//
//DP MATRIX BEFORE...
//-1 -1 -1 -1
//-1 -1 -1 -1
//-1 -1 -1 -1
//
//
//MEMOIZED -> 13
//
//DP MATRIX AFTER...
//13 13 10 12
//12 10 9 10
//20 16 9 1
//
//
//min cost path is :
//RECURSIVE -> 76
//
//DP MATRIX BEFORE...
//-1 -1 -1 -1
//-1 -1 -1 -1
//-1 -1 -1 -1
//
//
//MEMOIZED -> 76
//
//DP MATRIX AFTER...
//76 215 218 290
//66 217 209 290
//89 289 289 200
//*/