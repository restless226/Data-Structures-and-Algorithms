//#include <bits/stdc++.h>
//
//using namespace std;
//#define ll long long
//
//
///*
//Problem Description:
//Given an integer N, find and return the count of minimum numbers required
//to represent N as a sum of squares.
//
//That is, if N is 4,
//then we can represent it as : {1^2 + 1^2 + 1^2 + 1^2} and {2^2}.
//The output will be 1, as 1 is the minimum count of numbers required
//to represent N as sum of squares.
// */
//
//
//int min_count_recursion(int n) {
//    // Base case
//    if (n <= 3) {
//        return n;
//    }
//
//    int ans = INT_MAX;
//
//    for (int i = 1; i * i <= n; i++) {
//        ans = min(ans, 1 + min_count_recursion(n - i * i));
//    }
//    return ans;
//}
//
//
//int min_count_memoization(int n, int *dp) {
//    if (dp[n] == INT_MAX) {
//        for (int i = 1; i * i <= n; i++) {
//            dp[n] = min(dp[n], 1 + min_count_recursion(n - i * i));
//        }
//    }
//
//    return dp[n];
//}
//
//
//int min_count_helper(int n) {
//    int *dp = new int[n + 1];
//
//    for (int i = 1; i <= n; ++i) {
//        dp[i] = INT_MAX;
//    }
//
//    return min_count_memoization(n, dp);
//
//}
//
//// [ATTACKING STYLE]
//int min_count_dp(int n) {
//    int *dp = new int[n + 1];
//
//    dp[0] = 0;
//    dp[1] = 1;
//    dp[2] = 2;
//    dp[3] = 3;
//
//    for (int i = 4; i <= n; i++) {
//        dp[i] = INT_MAX;
//    }
//
//
//    // TODO
//    // [WARNING]: NOT UNDERSTOOD
//    for (int i = 1; i * i <= n; i++) {
//        for (int j = 0; i * i + j <= n; ++j) {
//            dp[i * i + j] = min(dp[i * i + j], 1 + dp[j]);
//        }
//    }
//
//    return dp[n];
//}
//
//int main() {
//
//    cin.tie(NULL);
//    cout.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//
//    int n;
//    cout << "Enter value of n:" << endl;
//    cin >> n;
//
////    cout<<"[USING SIMPLE RECURSION] min steps required are: "<<min_count_recursion(n)<<endl;
////    cout<<"[USING MEMOIZATION] min steps required are: "<<min_count_helper(n)<<endl;
//    cout << "[USING DP] min steps required are: " << min_count_dp(n) << endl;
//
//    return 0;
//}
//
///*
//OUTPUT:
//Enter value of n:
//11
//[USING DP] min steps required are: 3
//*/