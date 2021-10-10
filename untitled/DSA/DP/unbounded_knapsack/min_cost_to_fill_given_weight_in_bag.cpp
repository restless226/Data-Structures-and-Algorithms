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
//#define MAX 101
//#define int long long
//using namespace std;
//
//int min_cost_DP(int cost[], int n, int w) {
//    int dp[n + 1][w + 1];
//    for (int i = 0; i <= w; i++) {
//        dp[0][i] = INT_MAX;
//    }
//    for (int i = 0; i <= n; i++) {
//        dp[i][0] = 0;
//    }
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= w; j++) {
//            if (cost[i - 1] != -1 && i <= j && dp[i][j - i] != INT_MAX) {
//                dp[i][j] = min(dp[i - 1][j], cost[i - 1] + dp[i][j - i]);
//            } else {
//                dp[i][j] = dp[i - 1][j];
//            }
//        }
//    }
//    return dp[n][w] == INT_MAX ? -1 : dp[n][w];
//}
//
//static int dp[MAX][MAX];
//
//int min_cost_MEMOIZED(int cost[], int n, int w) {
//    // base condition
//    if (n == 0 && w == 0) {
//        return 0;
//    }
//    if (n == 0) {
//        return 1e9;
//    }
//    if (w == 0) {
//        return 0;
//    }
//
//    // memoization block check
//    if (dp[n][w] != -1) {
//        return dp[n][w];
//    }
//
//    if (n > w || cost[n - 1] == -1) {
//        // memoization block check
//        if (dp[n - 1][w] == -1) {
//            dp[n - 1][w] = min_cost_MEMOIZED(cost, n - 1, w);
//        }
//        return dp[n][w] = dp[n - 1][w];
//    } else if (n <= w && cost[n - 1] != -1) {
//        // memoization block check
//        if (dp[n - 1][w] == -1) {
//            dp[n - 1][w] = min_cost_MEMOIZED(cost, n - 1, w);    // cost[n] excluded
//        }
//        // memoization block check
//        if (dp[n][w - n] == -1) {
//            dp[n][w - n] = min_cost_MEMOIZED(cost, n, w - n);   // cost[n] included
//        }
//
//        return dp[n][w] = min(dp[n - 1][w], cost[n - 1] + dp[n][w - n]);
//    }
//}
//
//int min_cost_RECURSIVE(int cost[], int n, int w) {
//    // base condition
//    if (n == 0 && w == 0) {
//        return 0;
//    }
//    if (n == 0) {
//        return INT_MAX;
//    }
//    if (w == 0) {
//        return 0;
//    }
//
//    // choice diagram code
//    if (n > w || cost[n - 1] == -1) {
//        return min_cost_RECURSIVE(cost, n - 1, w);
//    } else if (n <= w && cost[n - 1] != -1) {
//        return min(cost[n - 1] + min_cost_RECURSIVE(cost, n, w - n),
//                   min_cost_RECURSIVE(cost, n - 1, w));
//    }
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
//        int ans = min_cost_RECURSIVE(cost, n, w);
//        ans == INT_MAX ? cout << -1 << " " : cout << ans << " ";
//        memset(dp, -1, sizeof(dp));
//        ans = min_cost_MEMOIZED(cost, n, w);
//        ans == INT_MAX ? cout << -1 << " " : cout << ans << " ";
//        cout << min_cost_DP(cost, n, w) << '\n';
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
//14 29
//-1 25 78 40 77 66 13 96 76 92 11 67 11 94
//
//OUTPUT:
//14 14 14
//-1 -1 -1
//35 35 35
//*/