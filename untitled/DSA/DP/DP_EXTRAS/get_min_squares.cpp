///*
//Problem Description:
//Given an integer N, find and return the count of minimum numbers required to represent N as a sum of squares.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//
//int min_squares_DP(int n) {
//    int dp[n + 1];
//
//    // INITIALIZATION
//    for (int i = 0; i < 4; i++) {
//        dp[i] = i;
//    }
//    for (int i = 4; i <= n; i++) {
//        dp[i] = INT_MAX;
//    }
//
//    // ITERATIVE DP CODE
//    for (int i = 1; i * i <= n; i++) {
//        for (int j = 0; i * i + j <= n; j++) {
//            dp[i * i + j] = min(dp[i * i + j], 1 + dp[j]);
//        }
//    }
//
//    return dp[n];
//}
//
//int dp[10001];
//
//int min_squares_MEMOIZED(int n) {
//    // Base case
//    if (n <= 3) {
//        return n;
//    }
//
//    // memoization block check
//    if (dp[n] != -1) {
//        return dp[n];
//    }
//
//    int ans = INT_MAX;
//    for (int i = 1; i * i <= n; i++) {
//        ans = min(ans, 1 + min_squares_MEMOIZED(n - (i * i)));
//    }
//
//    dp[n] = ans;
//    return ans;
//}
//
//int min_squares_RECURSIVE(int n) {
//    // Base case
//    if (n <= 3) {
//        return n;
//    }
//
//    int ans = INT_MAX;
//    for (int i = 1; i * i <= n; i++) {
//        ans = min(ans, 1 + min_squares_RECURSIVE(n - (i * i)));
//    }
//
//    return ans;
//}
//
//int32_t main() {
//    cin.tie(NULL);
//    cout.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    int n;
//
//    while (t--) {
//        cin >> n;
//        cout << "\ncount of minimum numbers required to represent N as a sum of squares is : ";
//
//        cout << "\nRECURSIVE -> " << min_squares_RECURSIVE(n);
//
//        memset(dp, -1, sizeof(dp));
//        cout << "\nMEMOIZED -> " << min_squares_MEMOIZED(n);
//        cout << "\nDP -> " << min_squares_DP(n);
//
//    }
//    return 0;
//}
//
///*
//OUTPUT:
//1 11
//
//count of minimum numbers required to represent N as a sum of squares is :
//RECURSIVE -> 3
//MEMOIZED -> 3
//DP -> 3
//*/