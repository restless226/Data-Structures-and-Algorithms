///*
//PROBLEM STATEMENT:
//Given an array cost[] of positive integers of size N and an integer W,
//cost[i] represents the cost of ‘i’ kg packet of oranges,
//the task is to find the minimum cost to buy W kgs of oranges.
//If it is not possible to buy exactly W kg oranges then the output will be -1
//NOTE:
//1. cost[i] = -1 means that ‘i’ kg packet of orange is unavailable
//2. It may be assumed that there is infinite supply of all available packet types.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int cost[], int n, int w) {
//    int dp[w + 1][n + 1];
//    for (int i = 0; i <= w; i++) {
//        dp[0][i] = 0;
//    }
//    for (int i = 0; i <= n; i++) {
//        dp[i][0] = INT_MAX;
//    }
//    for (int i = 1; i <= w; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (cost[j - 1] != -1 && j <= i && dp[i - j][j] != INT_MAX) {
//                dp[i][j] = min(dp[i][j - 1], cost[j - 1] + dp[i - j][j]);
//            } else {
//                dp[i][j] = dp[i][j - 1];
//            }
//        }
//    }
//    return dp[w][n] == INT_MAX ? -1 : dp[w][n];
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n, w;
//        cin >> n >> w;
//        int cost[n];
//        for (int i = 0; i < n; i++) {
//            cin >> cost[i];
//        }
//        cout << solve(cost, n, w) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//5 5
//20 10 4 50 100
//5 5
//-1 -1 4 3 -1
//
//OUTPUT:
//14
//-1
//*/