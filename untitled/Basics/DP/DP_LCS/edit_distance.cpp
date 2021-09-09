///*
//PROBLEM STATEMENT:
//Given two strings s and t. Find the minimum number of operations that need to be performed on str1 to convert it to str2.
//The possible operations are:
//1.Insert
//2.Remove
//3.Replace
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//// top down approach
//int lcs(string x, string y, int n, int m) {
//    // base condition
//    if (n == 0 || m == 0) {
//        return 0;
//    }
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
//    cout << "\nLCS length is : " << dp[n][m] << '\n';
//    return dp[n][m];
//}
//
////TODO
//int edit_distance(string x, string y) {
//    if (x == y) {
//        return 0;
//    }
//    return y.length() + x.length() - (2 * lcs(x, y, x.length(), y.length()));
//}
//
//int32_t main() {
//    string x, y;
//    cin >> x >> y;
//    cout << "\nminimum number of operations performed to convert x to y is : " << edit_distance(x, y);
//    return 0;
//}