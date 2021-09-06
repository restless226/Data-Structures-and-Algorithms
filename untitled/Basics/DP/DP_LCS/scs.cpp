///*
//PROBLEM STATEMENT:
//Shortest Common Supersequence (SCS)
//Given two strings str1 and str2,
//find the shortest string that has both str1 and str2 as subsequences.
//*/
//
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
//string print_SCS(int **dp, string x, string y, int n, int m) {
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
//                ans += y[j - 1];
//                j--;
//            } else {
//                ans += x[i - 1];
//                i--;
//            }
//        }
//    }
//
//    while (i > 0) {
//        ans += x[i - 1];
//        i--;
//    }
//
//    while (j > 0) {
//        ans += y[j - 1];
//        j--;
//    }
//    reverse(ans.begin(), ans.end());
//    return ans;
//
//}
//
//
//// top down approach
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
//    cout << "\nDP ARRAY BEFORE ITERATION:\n";
//    printArray(dp, n, m);
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
//    cout << "\nDP ARRAY AFTER ITERATION:\n";
//    printArray(dp, n, m);
//
//    cout << "\nSCS is : " << print_SCS(dp, x, y, n, m) << '\n';
//
//    cout << "Length of SCS is : ";
//    return dp[n][m];
//}
//
//int scs(string x, string y, int n, int m) {
//    return m + n - length_LCS_DP(x, y, n, m);
//}
//
//int32_t main() {
//    string x, y;
//    int m, n;
//    cin >> n >> m;
//    cin >> x >> y;
//
//    cout << scs(x, y, n, m) << '\n';
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//4 4
//abcd xycd
//
//DP ARRAY BEFORE ITERATION:
//0 0 0 0 0
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//
//
//DP ARRAY AFTER ITERATION:
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 1 1
//0 0 0 1 2
//
//
//SCS is : xyabcd
//Length of SCS is : 6
//
//
//5 6
//acbcf abcdaf
//
//DP ARRAY BEFORE ITERATION:
//0 0 0 0 0 0 0
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//
//
//DP ARRAY AFTER ITERATION:
//0 0 0 0 0 0 0
//0 1 1 1 1 1 1
//0 1 1 2 2 2 2
//0 1 2 2 2 2 2
//0 1 2 3 3 3 3
//0 1 2 3 3 3 4
//
//
//SCS is : acbcdaf
//Length of SCS is : 7
//*/