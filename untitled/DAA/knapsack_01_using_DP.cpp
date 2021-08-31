///*
// * Name: Rohit Pendse
// * Roll no: 33358
// * Subject: Daa Lab Assignment 1
// *
// * Problem Statement:
// * Write a menu driven C++ program to implement 0/1 knapsack using dynamic programming.
// */
//
//#include <bits/stdc++.h>
//
//#define MAX 1001
//#define int long long
//using namespace std;
//
////static int dp[MAX][MAX];    // dp matrix for MEMOIZATION
//
//
//int knapsack_01_DP(int weights[], int values[], int n, int W) {
//    int dp[n + 1][W + 1];    // dp matrix for MEMOIZATION
//
//    // INITIALIZATION (it corresponds to base condition in RECURSIVE SOLUTION)
//    // initializing first row and first column with all zeroes
//
//    // i->n && j->W
//    for (int i = 0; i < n + 1; ++i) {
//        for (int j = 0; j < W + 1; ++j) {
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
//        for (int j = 1; j < W + 1; ++j) {
//            if (weights[i - 1] <= j) {
//                dp[i][j] = max(values[i - 1] + dp[i - 1][j - weights[i - 1]], dp[i - 1][j]);
//            } else if (weights[i - 1] > j) {
//                dp[i][j] = dp[i - 1][j];
//            }
//        }
//    }
//
//    return dp[n][W];
//}
//
//int knapsack_01_MEMOIZATION(int weights[], int values[], int n, int W) {
//    static int dp[MAX][MAX];    // dp matrix for MEMOIZATION
//    memset(dp, -1, sizeof(dp));   // initializing all entries in dp matrix with -1
//
//    // base condition
//    if (n == 0 || W == 0) {
//        return 0;
//    }
//
//    // memoization block check
//    if (dp[n][W] != -1) {
//        return dp[n][W];
//    }
//
//    // choice diagram code
//    if (weights[n - 1] <= W) {
//        // Return the maximum of (nth item included, not included)
//        return max(values[n - 1] + knapsack_01_MEMOIZATION(weights, values, n - 1, W - weights[n - 1]),
//                   knapsack_01_MEMOIZATION(weights, values, n - 1, W - weights[n - 1]));
//    } else if (weights[n - 1] > W) {
//        return knapsack_01_MEMOIZATION(weights, values, n - 1, W);
//    }
//}
//
//int knapsack_01_RECURSIVE(int weights[], int values[], int n, int W) {
//    // base condition (it corresponds to "SMALLEST VALID INPUT")
//    if (n == 0 || W == 0) {
//        return 0;
//    }
//
//    // choice diagram code
//    if (weights[n - 1] <= W) {
////        return values[n - 1] + knapsack_01_RECURSIVE(weights, values, n - 1, W - weights[n - 1]);
//        return max(values[n - 1] + knapsack_01_RECURSIVE(weights, values, n - 1, W - weights[n - 1]),
//                   knapsack_01_RECURSIVE(weights, values, n - 1, W - weights[n - 1]));
//    } else if (weights[n - 1] > W) {
//        return knapsack_01_RECURSIVE(weights, values, n - 1, W);
//    }
//}
//
//
//int32_t main() {
//
//    int n, W;
//    cout << "Enter no of items n:\n";
//    cin >> n;
//    cout << "Enter Weight of knapsack:\n";
//    cin >> W;
//
//    int weights[n];
//    int values[n];
//
//    cout << "\nEnter costs of n items:\n";
//    for (int i = 0; i < n; ++i) {
//        cin >> values[i];
//    }
//
//    cout << "\nEnter costs of n items:\n";
//    for (int i = 0; i < n; ++i) {
//        cin >> weights[i];
//    }
//
//
//    cout << "\nMAXIMUM TOTAL VALUE IS:\n";
//    cout << "USING knapsack_01_RECURSIVE() -> " << knapsack_01_RECURSIVE(weights, values, n, W) << '\n';
////    memset(dp, -1, sizeof(dp));   // initializing all entries in dp matrix with -1
//    cout << "USING knapsack_01_MEMOIZATION() -> " << knapsack_01_MEMOIZATION(weights, values, n, W) << '\n';
//    cout << "USING knapsack_01_DP() -> " << knapsack_01_DP(weights, values, n, W) << '\n';
//
//
//    return 0;
//}
//
//
///*
//OUTPUT:
//
//Enter no of items n:
//3
//Enter Weight of knapsack:
//4
//
//Enter costs of n items:
//1
//2
//3
//
//Enter costs of n items:
//4
//5
//1
//
//MAXIMUM TOTAL VALUE IS:
//USING knapsack_01_RECURSIVE() -> 3
//USING knapsack_01_MEMOIZATION() -> 3
//USING knapsack_01_DP() -> 3
//
// */