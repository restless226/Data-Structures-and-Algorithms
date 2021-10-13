///*
//PROBLEM STATEMENT:
//
//*/
//
//#include <bits/stdc++.h>
//#define int long long
//using namespace std;
//
//int solve(vector<vector<int>>& grid) {
//    int n = grid.size();
//    int dp[n][n];
//    memset(dp, 0, sizeof(dp));
//    dp[0][0] = grid[0][0];
//    for (int i = 1; i < n; i++) {
//        dp[i][0] = grid[i][0] + dp[i - 1][0];
//    }
//    for (int i = 1; i < n; i++) {
//        dp[0][i] += grid[0][i] + dp[0][i - 1];
//    }
//    for (int i = 1; i < n; i++) {
//        for (int j = 1; j < n; j++) {
//            dp[i][j] = grid[i][j] + min(min(dp[i - 1][j], dp[i][j - 1]));
//        }
//    }
//    return dp[n - 1][n - 1];
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
//        vector<vector<int>>grid(n, vector<int>(n, -1));
//        for(int i = 0; i < n; i++){
//            for(int j = 0; j < n; j++){
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
//
//
//OUTPUT:
//
//*/