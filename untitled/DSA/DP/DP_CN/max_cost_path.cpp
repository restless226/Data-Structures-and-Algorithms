///*
//PROBLEM STATEMENT:
//Given a NxN matrix of positive integers.
//There are only three possible moves from a cell Matrix[r][c].
//1.Matrix [r+1] [c]
//2.Matrix [r+1] [c-1]
//3.Matrix [r+1] [c+1]
//Starting from any column in row 0
//return the largest sum of any of the paths up to row N-1.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int dp[501][501];
//
//void printArray(int n) {
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << dp[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//int max_cost_path_MEMOIZED(vector<vector<int>> &grid, int n, int i, int j) {
//    // base case
//    if (i >= n || j >= n || i < 0 || j < 0) {
//        return 0;
//    }
//
//    // memoized block check
//    if (dp[i][j] != -1) {
//        return dp[i][j];
//    }
//
//    int down_cost = INT_MIN;
//    int left_diagonal_cost = INT_MIN;
//    int right_diagonal_cost = INT_MIN;
//
//    if (dp[i + 1][j] != -1) {
//        down_cost = dp[i + 1][j];
//    } else {
//        down_cost = max_cost_path_MEMOIZED(grid, n, i + 1, j);
//        dp[i + 1][j] = down_cost;
//    }
//
//    if (dp[i + 1][j - 1] != -1) {
//        left_diagonal_cost = dp[i + 1][j - 1];
//    } else {
//        left_diagonal_cost = max_cost_path_MEMOIZED(grid, n, i + 1, j - 1);
//        dp[i + 1][j - 1] = left_diagonal_cost;
//    }
//
//    if (dp[i + 1][j + 1] != -1) {
//        right_diagonal_cost = dp[i + 1][j + 1];
//    } else {
//        right_diagonal_cost = max_cost_path_MEMOIZED(grid, n, i + 1, j + 1);
//        dp[i + 1][j + 1] = right_diagonal_cost;
//    }
//
//    // small calculation
//    int cost = grid[i][j] + max(down_cost, max(left_diagonal_cost, right_diagonal_cost));
//
//    dp[i][j] = cost;
//    return cost;
//}
//
//int maximumPath(int n, vector<vector<int>> grid) {
//    // code here
//    memset(dp, -1, sizeof(dp));
//
//    cout << "\n\nDP MATRIX BEFORE...\n";
//    printArray(n);
//
//    int ans = 1;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (dp[i][j] == -1) {
//                ans = max(ans, max_cost_path_MEMOIZED(grid, n, i, j));
//            }
//        }
//        cout << "\nans = " << ans;
//    }
//
//    cout << "\n\nDP MATRIX AFTER...\n";
//    printArray(n);
//    return ans;
//}
//
//
//int32_t main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        vector<vector<int>> grid(n, vector<int>(n, 0));
//        for (int i = 0; i < n * n; i++)
//            cin >> grid[(i / n)][i % n];
//
//
//        cout << maximumPath(n, grid) << "\n";
//    }
//    return 0;
//}
//
///*
//OUTPUT:
//
//3
//1
//1
//2
//348 391 618 193
//6
//24 694 697 904 252 703 194 425 515 375 269 697 111 418 947 212 208 8 763 276 826 490 700 674 750 222 441 924 163 978 841 538 23 889 441 275
//
//DP MATRIX BEFORE...
//-1
//
//
//ans = 1
//
//DP MATRIX AFTER...
//1
//
//1
//
//
//DP MATRIX BEFORE...
//-1 -1
//-1 -1
//
//
//ans = 1009
//ans = 1009
//
//DP MATRIX AFTER...
//966 1009
//618 193
//
//1009
//
//
//
//DP MATRIX BEFORE...
//-1 -1 -1 -1 -1 -1
//-1 -1 -1 -1 -1 -1
//-1 -1 -1 -1 -1 -1
//-1 -1 -1 -1 -1 -1
//-1 -1 -1 -1 -1 -1
//-1 -1 -1 -1 -1 -1
//
//
//ans = 5005
//ans = 5005
//ans = 5005
//ans = 5005
//ans = 5005
//ans = 5005
//
//DP MATRIX AFTER...
//4035 4795 4798 5005 4213 4121
//3251 4011 4101 3961 3120 3418
//2465 3057 3586 2851 2721 2521
//2354 1867 2639 2303 2513 2093
//1591 1063 1330 1813 1052 1419
//841 538 23 889 441 275
//
//5005
//*/