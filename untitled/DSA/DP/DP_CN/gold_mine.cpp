///*
//PROBLEM STATEMENT:
//Given a gold mine called M of (n x m) dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner can start from any row in the first column. From a given cell, the miner can move
//
//1.to the cell diagonally up towards the right
//2.to the right
//3.to the cell diagonally down towards the right
//Find out maximum amount of gold which he can collect.
//*/
//
//#include <bits/stdc++.h>
//
//#define MAX 52
//#define int long long
//using namespace std;
//
//int dp[MAX][MAX];
//
//void printArray(int n, int m) {
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout << dp[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//// top down approach
//int gold_mine_dp(int n, int m, vector<vector<int>> grid) {
//    memset(dp, 0, sizeof(dp));
//    for (int j = m - 1; j >= 0; j--) {
//        for (int i = 0; i < n; i++) {
//            if (j == m - 1)     // last column
//                dp[i][j] = grid[i][j];
//            else if (i == 0)    // first row
//                dp[i][j] = grid[i][j] + max(dp[i][j + 1], dp[i + 1][j + 1]);
//            else if (i == n - 1)    // last row
//                dp[i][j] = grid[i][j] + max(dp[i][j + 1], dp[i - 1][j + 1]);
//            else    // all other cases
//                dp[i][j] = grid[i][j] + max(dp[i][j + 1], max(dp[i - 1][j + 1], dp[i + 1][j + 1]));
//        }
//    }
//    int ans = 0;
//    for (int i = 0; i < n; i++) {
//        ans = max(ans, dp[i][0]);
//    }
//    return ans;
//}
//
//
//// bottom up approach
//int gold_mine(vector<vector<int>> &grid, int n, int m, int i, int j) {
//    // base case
//    if (i >= n || j >= m || i < 0 || j < 0) {
//        return 0;
//    }
//
//    if (j == m - 1) {
//        return grid[i][j];
//    }
//
//    // memoized block check
//    if (dp[i][j] != -1) {
//        return dp[i][j];
//    }
//
//    int dr_up_cost;
//    int right_cost;
//    int dr_down_cost;
//
//    // memoized block check
//    if (dp[i - 1][j + 1] != -1) {
//        dr_up_cost = dp[i - 1][j + 1];
//    } else {
//        dr_up_cost = dp[i - 1][j + 1] = gold_mine(grid, n, m, i - 1, j + 1);
//    }
//
//    // memoized block check
//    if (dp[i][j + 1] != -1) {
//        right_cost = dp[i][j + 1];
//    } else {
//        right_cost = dp[i][j + 1] = gold_mine(grid, n, m, i, j + 1);
//    }
//
//    // memoized block check
//    if (dp[i + 1][j + 1] != -1) {
//        dr_down_cost = dp[i + 1][j + 1];
//    } else {
//        dr_down_cost = dp[i + 1][j + 1] = gold_mine(grid, n, m, i + 1, j + 1);
//    }
//
//    // small calculation
//    int profit = grid[i][j] + max(right_cost, max(dr_up_cost, dr_down_cost));
//
//    return dp[i][j] = profit;
//}
//
//
//int solve(int n, int m, vector<vector<int>> &grid) {
//    memset(dp, -1, sizeof(dp));
//
//    cout << "\n\nDP MATRIX BEFORE...\n";
//    printArray(n, m);
//
//    int ans = -1;
//    for (int i = 0; i < n; i++) {
//        if (dp[i][0] == -1) {
//            ans = max(ans, gold_mine(grid, n, m, i, 0));
//        }
////        cout << "\nans = " << ans;
//    }
//
//    cout << "\n\nDP MATRIX AFTER...\n";
//    printArray(n, m);
//    return ans;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    int n, m;
//
//    while (t--) {
//        cin >> n >> m;
//
//        vector<vector<int>> grid(n, vector<int>(m, 0));
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cin >> grid[i][j];
//            }
//        }
//
//        cout << "\nmaximum amount of gold which can be collected is : \n";
//        cout << solve(n, m, grid) << " " << gold_mine_dp(n, m, grid) << "\n";
//    }
//
//    return 0;
//}
//
///*
//INPUT:
//2
//4 4
//1 3 1 5
//2 2 4 1
//5 0 2 3
//0 6 1 2
//3 3
//1 3 3
//2 1 4
//0 6 4
//
//OUTPUT:
//maximum amount of gold which can be collected is :
//
//
//DP MATRIX BEFORE...
//-1 -1 -1 -1
//-1 -1 -1 -1
//-1 -1 -1 -1
//-1 -1 -1 -1
//
//
//
//DP MATRIX AFTER...
//13 12 6 5
//14 11 9 1
//16 9 5 3
//11 11 4 2
//
//16 16
//
//maximum amount of gold which can be collected is :
//
//
//DP MATRIX BEFORE...
//-1 -1 -1
//-1 -1 -1
//-1 -1 -1
//
//
//
//DP MATRIX AFTER...
//8 7 3
//12 5 4
//10 10 4
//
//12 12
//*/