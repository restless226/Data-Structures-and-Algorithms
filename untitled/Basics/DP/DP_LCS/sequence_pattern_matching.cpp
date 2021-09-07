///*
//Sequence Pattern Matching
//PROBLEM STATEMENT:
//Is string x a subsequence of string y
//if yes -> return true
//else -> return false
//*/
//
//#include <bits/stdc++.h>
//
//#include <utility>
//
//#define int long long
//using namespace std;
//
//void printArray(int **dp, int n, int m) {
//    for (int i = 0; i < n + 1; ++i) {
//        for (int j = 0; j < m + 1; ++j) {
//            cout << dp[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//// top down approach
//int lcs(string x, string y, int n, int m) {
//
////    int dp[n + 1][m + 1];
//    int **dp = new int *[n + 1];
//
//    for (int i = 0; i < n + 1; i++) {
//        dp[i] = new int[m + 1];
//    }
//
//    // INITIALIZATION
//    // it corresponds to base condition in RECURSIVE SOLUTION
//    for (int i = 0; i < n + 1; i++) {
//        dp[i][0] = 0;
//    }
//
//    for (int j = 0; j < m + 1; j++) {
//        dp[0][j] = 0;
//    }
//
////    cout << "\nDP ARRAY BEFORE ITERATION:\n";
////    printArray(dp, n, m);
//
//    // ITERATIVE DP CODE
//    for (int i = 1; i < n + 1; i++) {
//        for (int j = 1; j < m + 1; j++) {
//            // choice diagram code
//            if (x[i - 1] == y[j - 1]) {
//                dp[i][j] = 1 + dp[i - 1][j - 1];
//            } else {
//                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
//            }
//        }
//    }
//
////    cout << "\nDP ARRAY AFTER ITERATION:\n";
////    printArray(dp, n, m);
//
//    return dp[n][m];
//
//}
//
//
//bool sequence_pattern_matching(string x, string y, int n, int m) {
//    if ((n > m) || n == 0 || m == 0) {
//        return false;
//    }
//
//    if (n == lcs(x, y, n, m)) {
//        return true;
//    }
//    return false;
//
//}
//
//int32_t main() {
//    int t;
//    cin >> t;
//    string x, y;
//
//    while (t--) {
//        cin >> x >> y;
//        if (sequence_pattern_matching(x, y, x.length(), y.length())) {
//            cout << "\nstring x is a subsequence of string y";
//        } else {
//            cout << "\nstring x is not a subsequence of string y";
//        }
//    }
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//3
//axy adxcpy
//axyz adxcpy
//rohit pendse
//
//string x is a subsequence of string y
//string x is not a subsequence of string y
//string x is not a subsequence of string y
//*/