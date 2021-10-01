///*
//PROBLEM STATEMENT;
//Longest Palindromic Subsequence
//Given a sequence, find the length of the longest palindromic subsequence in it.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//string print_LCS(int **dp, string x, string y, int n, int m) {
//    string ans;
//    int i = n;
//    int j = m;
//    while (i > 0 && j > 0) {
//
//        if (x[i - 1] == y[j - 1]) {
//            ans += x[i - 1];
//            i--;
//            j--;
//        } else {
//            if (dp[i][j - 1] > dp[i - 1][j]) {
//                j--;
//            } else {
//                i--;
//            }
//        }
//    }
//
//    reverse(ans.begin(), ans.end());
//    return ans;
//
//}
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
//
//    cout << "LPS is : " << print_LCS(dp, x, y, n, m);
//    cout << "\nLength of LPS : ";
//    return dp[n][m];
//}
//
//
//void lps(string x) {
//    string y = x;
//    reverse(y.begin(), y.end());
//
//    cout << length_LCS_DP(x, y, x.length(), y.length());
//}
//
//int32_t main() {
//    string x;
//    cin >> x;
//
//    lps(x);
//
//    return 0;
//}
///*
//OUTPUT:
//
//agbcba
//
//LPS is : abcba
//Length of LPS : 5
//*/