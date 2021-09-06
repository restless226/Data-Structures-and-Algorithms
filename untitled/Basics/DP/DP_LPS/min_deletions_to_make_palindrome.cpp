///*
//PROBLEM STATEMENT:
//Minimum number of deletions to make a string palindrome
//Given a string of size ‘n’.
//The task is to remove or delete minimum number of characters from the string so that
//the resultant string is palindrome.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//
//int length_LCS_DP(string x, string y, int n, int m) {
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
//int lps(string x) {
//    string y = x;
//    reverse(y.begin(), y.end());
//
//    return length_LCS_DP(x, y, x.length(), y.length());
//}
//
//
//int min_deletions_to_make_palindrome(string x) {
//    return x.length() - lps(x);
//}
//
//int32_t main() {
//    string x;
//    cin >> x;
//    cout << "Minimum number of deletions to make string x palindrome is : " << min_deletions_to_make_palindrome(x);
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//aebcbda
//Minimum number of deletions to make string x palindrome is : 2
//*/