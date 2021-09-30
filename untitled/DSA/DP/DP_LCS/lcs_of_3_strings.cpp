///*
//PROBLEM STATEMENT:
//Given 3 strings A, B and C, the task is to find
//the length of longest common sub-sequence in all three given sequences.
//*/
//
//#include <bits/stdc++.h>
//
//#define MAX 21
//#define int long long
//using namespace std;
//
//static int dp[MAX][MAX][MAX];
//
//// bottom up (memoized approach)
//int solve(string &x, string &y, string &z, int n1, int n2, int n3) {
//    // base condition
//    if (n1 == 0 || n2 == 0 || n3 == 0) {
//        return 0;
//    }
//
//    // memoization block check
//    if (dp[n1][n2][n3] != -1) {
//        return dp[n1][n2][n3];
//    }
//
//    // choice diagram code
//    if (x[n1 - 1] == y[n2 - 1] && x[n1 - 1] == z[n3 - 1]) {
//        return 1 + solve(x, y, z, n1 - 1, n2 - 1, n3 - 1);
//    } else {
//        int val1, val2, val3, val4, val5, val6;
//        int max1, max2;
//
//        if (dp[n1 - 1][n2][n3] != -1) {
//            val1 = dp[n1 - 1][n2][n3];
//        } else {
//            val1 = dp[n1 - 1][n2][n3] = (solve(x, y, z, n1 - 1, n2, n3));
//        }
//
//        if (dp[n1][n2 - 1][n3] != -1) {
//            val2 = dp[n1][n2 - 1][n3];
//        } else {
//            val2 = dp[n1][n2 - 1][n3] = (solve(x, y, z, n1, n2 - 1, n3));
//        }
//
//        if (dp[n1][n2][n3 - 1] != -1) {
//            val3 = dp[n1][n2][n3 - 1];
//        } else {
//            val3 = dp[n1][n2][n3 - 1] = (solve(x, y, z, n1, n2, n3 - 1));
//        }
//
//        if (dp[n1 - 1][n2 - 1][n3] != -1) {
//            val4 = dp[n1 - 1][n2 - 1][n3];
//        } else {
//            val4 = dp[n1 - 1][n2 - 1][n3] = (solve(x, y, z, n1 - 1, n2 - 1, n3));
//        }
//
//        if (dp[n1 - 1][n2][n3 - 1] != -1) {
//            val5 = dp[n1 - 1][n2][n3 - 1];
//        } else {
//            val5 = dp[n1 - 1][n2][n3 - 1] = (solve(x, y, z, n1 - 1, n2, n3 - 1));
//        }
//
//        if (dp[n1][n2 - 1][n3 - 1] != -1) {
//            val6 = dp[n1][n2 - 1][n3 - 1];
//        } else {
//            val6 = dp[n1][n2 - 1][n3 - 1] = (solve(x, y, z, n1, n2 - 1, n3 - 1));
//        }
//
//        max1 = max(val1, max(val2, val3));
//        max2 = max(val4, max(val5, val6));
//
//        return max(max1, max2);
//    }
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    int n1, n2, n3;
//    string x, y, z;
//
//    while (t--) {
//        cin >> n1 >> n2 >> n3;
//        cin >> x >> y >> z;
//        memset(dp, -1, sizeof(dp));   // initializing all entries in dp matrix with -1
//        cout << "\nlength of LCS is : " << solve(x, y, z, n1, n2, n3) << '\n';
//    }
//
//    return 0;
//}
//
///*
//INPUT:
//1
//5 8 13
//geeks geeksfor geeksforgeeks
//
//OUTPUT:
//length of LCS is : 5
//*/