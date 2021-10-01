///*
//Name: Rohit Pendse
//Roll no: 33358
//Subject: DAA_ASSIGNMENTS Lab Assignment 1
//Problem Statement:
//Write a menu driven C++ program to implement 0/1 knapsack using dynamic programming.
//*/
//
//#include <bits/stdc++.h>
//
//#define MAX 1001
//#define int long long
//using namespace std;
//
//void printArray(int **dp, int n, int W) {
//    for (int i = 0; i < n + 1; ++i) {
//        for (int j = 0; j < W + 1; ++j) {
//            cout << dp[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//int knapsack_01_DP(int weights[], int values[], int n, int W) {
//    int **dp = new int *[n + 1];  // dp matrix for MEMOIZATION
//    for (int i = 0; i < n + 1; i++) {
//        dp[i] = new int[W + 1];
//    }
//
////    int dp[n + 1][W + 1];
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
//    cout << "\nDP ARRAY BEFORE ITERATION...\n";
//    printArray(dp, n, W);
//
//    // ITERATIVE DP
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
//    cout << "\nDP ARRAY AFTER ITERATION...\n";
//    printArray(dp, n, W);
//
//    return dp[n][W];
//}
//
//static int dp[MAX][MAX];    // dp matrix for MEMOIZATION
//int knapsack_01_MEMOIZATION(int weights[], int values[], int n, int W) {
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
//        // memoization block check
//        if (dp[n - 1][W - weights[n - 1]] == -1) {
//            dp[n - 1][W - weights[n - 1]] = knapsack_01_MEMOIZATION(weights, values, n - 1, W - weights[n - 1]);
//        }
//        // Return the maximum of nth item (included, not included)
//        return max(values[n - 1] + dp[n - 1][W - weights[n - 1]], dp[n - 1][W - weights[n - 1]]);
//    } else if (weights[n - 1] > W) {
//        // memoization block check
//        if (dp[n - 1][W] == -1) {
//            dp[n - 1][W] = knapsack_01_MEMOIZATION(weights, values, n - 1, W);
//        }
//        return dp[n - 1][W];
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
//int32_t main() {
//
//    int t;
//    cin >> t;
//    while (t--) {
//        int n, W;
//        cin >> n;
//        cin >> W;
//        int weights[n];
//        int values[n];
//
//        for (int i = 0; i < n; ++i) {
//            cin >> values[i] >> weights[i];
//        }
//
//        cout << "\nUSING knapsack_01_RECURSIVE() ->\n";
//        cout << "MAXIMUM TOTAL VALUE IS : " << knapsack_01_RECURSIVE(weights, values, n, W) << '\n';
//
//        memset(dp, -1, sizeof(dp));   // initializing all entries in dp matrix with -1
//        cout << "\nUSING knapsack_01_MEMOIZATION() -> \n";
//        cout << "MAXIMUM TOTAL VALUE IS : " << knapsack_01_MEMOIZATION(weights, values, n, W) << '\n';
//
//        cout << "\nUSING knapsack_01_DP() -> \n";
//        cout << "MAXIMUM TOTAL VALUE IS : " << knapsack_01_DP(weights, values, n, W) << '\n';
//    }
//    return 0;
//}
//
//
///*
//INPUT:
//1
//3
//4
//1 4
//2 5
//3 1
//
//OUTPUT:
//USING knapsack_01_RECURSIVE() ->
//MAXIMUM TOTAL VALUE IS : 3
//
//USING knapsack_01_MEMOIZATION() ->
//MAXIMUM TOTAL VALUE IS : 3
//
//USING knapsack_01_DP() ->
//MAXIMUM TOTAL VALUE IS :
//DP ARRAY BEFORE ITERATION...
//0 0 0 0 0
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//
//
//DP ARRAY AFTER ITERATION...
//0 0 0 0 0
//0 0 0 0 1
//0 0 0 0 1
//0 3 3 3 3
//
//3
//*/