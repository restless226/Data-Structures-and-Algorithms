///*
//PROBLEM STATEMENT:
//"Rod Cutting Problem"
//Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n.
//Determine the maximum value obtainable by cutting up the rod and selling the pieces.
// */
//
//#include <bits/stdc++.h>
//
//using namespace std;
//#define int long long
//
//
//struct Rod {
//    int length;
//    int price;
//};
//
//int rod_cutting_DP(struct Rod arr[], int n) {
//
//    // INITIALIZING LENGTH ARRAY
//    for (int i = 0; i < n; ++i) {
//        arr[i].length = i + 1;
//    }
//
//    int dp[n + 1][n + 1];    // dp matrix for MEMOIZATION
//
//    // INITIALIZATION (it corresponds to base condition in RECURSIVE SOLUTION)
//    // initializing first row and first column with all zeroes
//
//    // i->n && j->W
//    for (int i = 0; i < n + 1; ++i) {
//        for (int j = 0; j < n + 1; ++j) {
//            if (i == 0 || j == 0) {
//                dp[i][j] = 0;     // corresponds to base condition in RECURSIVE code
//            }
//        }
//    }
//
//    //    memset(dp[0],0,sizeof(dp[0][W+1]));
//
//    // i->n && j->W
//    for (int i = 1; i < n + 1; ++i) {
//        for (int j = 1; j < n + 1; ++j) {
//            if (arr[i - 1].length <= j) {
//                // minor change: dp[i-1] (int 0-1 knapsack) -> dp[i] (unbounded knapsack)
//                dp[i][j] = max(arr[i - 1].price + dp[i][j - arr[i - 1].length], dp[i - 1][j]);
//            } else if (arr[i - 1].length > j) {
//                dp[i][j] = dp[i - 1][j];
//            }
//        }
//    }
//
//    return dp[n][n];
//
//}
//
//int32_t main() {
//    cin.tie(NULL);
//    cout.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//    int n;
//    cin >> n;
//    struct Rod arr[n];
//
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i].price;
//    }
//
//    cout << "MAX PROFIT IS:" << rod_cutting_DP(arr, n) << '\n';
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//8
//1 5 8 9 10 17 17 20
//
//MAX PROFIT IS:22
// */