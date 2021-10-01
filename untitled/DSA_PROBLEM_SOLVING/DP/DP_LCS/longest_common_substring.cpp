//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
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
//
//
//int length_LC_substring(string x, string y, int n, int m) {
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
////    cout << "\nDP ARRAY BEFORE ITERATION:\n";
////    printArray(dp, n, m);
//
//    int ans = 0;
//    /* substring is always continuous unlike subsequence */
//    // ITERATIVE DP CODE
//    for (int i = 1; i < n + 1; i++) {
//        for (int j = 1; j < m + 1; j++) {
//            // choice diagram code
//            if (x[i - 1] == y[j - 1]) {     // continuous
//                dp[i][j] = 1 + dp[i - 1][j - 1];
//                ans = max(ans, dp[i][j]);
//            } else {    // discontinuous - male length of substring as 0
////                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
//                dp[i][j] = 0;
//            }
//        }
//    }
//
////    cout << "\nDP ARRAY AFTER ITERATION:\n";
////    printArray(dp, n, m);
//
//    return ans;
//}
//
//int32_t main() {
//
//
//    string x, y;
//    int m, n;
//    cin >> n >> m;
//    cin >> x >> y;
//
//    cout << "Length of Longest Common Substring is : " << length_LC_substring(x, y, n, m) << '\n';
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//6 6
//ABCDGH
//ACDGHR
//
//Length of Longest Common Substring is :
//
//DP ARRAY BEFORE ITERATION:
//0 0 0 0 0 0 0
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//
//
//DP ARRAY AFTER ITERATION:
//0 0 0 0 0 0 0
//0 1 0 0 0 0 0
//0 0 0 0 0 0 0
//0 0 1 0 0 0 0
//0 0 0 2 0 0 0
//0 0 0 0 3 0 0
//0 0 0 0 0 4 0
//
//4
//*/