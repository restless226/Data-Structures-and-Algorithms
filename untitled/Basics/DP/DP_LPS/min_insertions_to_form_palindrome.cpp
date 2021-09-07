///*
//PROBLEM STATEMENT:
//Given a string, find the minimum number of characters to be inserted to convert it to palindrome.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
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
//
//    return dp[n][m];
//}
//
//
//int solve(string x) {
//    string y = x;
//    reverse(y.begin(), y.end());
//    return x.length() - lcs(x, y, x.length(), y.length());
//}
//
//int32_t main() {
//    string x;
//    cin >> x;
//
//    cout << "minimum number of characters to be inserted to convert string x to palindrome is : " << solve(x);
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//acbcbda
//minimum number of characters to be inserted to convert string x to palindrome is : 2
//*/