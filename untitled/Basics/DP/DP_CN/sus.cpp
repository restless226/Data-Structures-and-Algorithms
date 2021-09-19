///*
//Problem Description:
//Given two strings S and T,
//find length of the shortest subsequence in S which is not a subsequence in T.
//If no such subsequence is possible, return -1.
//A subsequence is a sequence that appears in the same relative order,
//but not necessarily contiguous.
//A string of length n has 2^n different possible subsequences.
//*/
//
//#include <bits/stdc++.h>
//
//#define MAX 501
//#define int long long
//using namespace std;
//
//
//int sus_DP(char *s, char *t, int m, int n) {
//    int dp[m + 1][n + 1];
//
//    // s -> rowwise, t -> columnwise
//
//    // INITIALIZATION
//    // T string is empty
//    for (int i = 0; i <= m; i++) {
//        dp[i][0] = 1;
//    }
//
//    // S string is empty
//    for (int j = 0; j <= n; j++) {
//        dp[0][j] = MAX;
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            char c = s[i - 1];
//            int k = j - 1;
//            for (; k >= 0; k--)
//                if (t[k] == c)
//                    break;
//
//            // char not present in T
//            if (k == -1) {
//                dp[i][j] = 1;
//            } else {
//                dp[i][j] = min(dp[i - 1][j], dp[i - 1][k] + 1);
//            }
//        }
//    }
//
//    int ans = dp[m][n];
//    if (ans >= MAX) {
//        ans = -1;
//    }
//
//    return ans;
//}
//
//
//static int dp[MAX][MAX];
//
//void printArray(int m, int n) {
//    for (int i = 0; i < m + 1; ++i) {
//        for (int j = 0; j < n + 1; ++j) {
//            cout << dp[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//int sus_MEMOIZED(char *s, char *t, int m, int n) {
//    // base condition
//    // S string is empty
//    if (m == 0) {
//        return INT_MAX;
//    }
//
//    // T string is empty
//    if (n == 0) {
//        return 1;
//    }
//
//    int k = 0;
//    for (; k < n; k++) {
//        if (t[k] == s[0]) {
//            break;
//        }
//    }
//
//    // char not found in T
//    if (k == n) {
//        return 1;
//    }
//
//    // memoization block check
//    int included;
//    int not_included;
//
//    if (dp[m - 1][n] != -1) {
//        not_included = dp[m - 1][n];
//    } else {
//        not_included = sus_MEMOIZED(s + 1, t, m - 1, n);  // char not included in s
//        dp[m - 1][n] = included;
//    }
//
//    if (dp[m][n - k - 1] != -1) {
//        included = dp[m][n - k - 1];
//    } else {
//        included = sus_MEMOIZED(s, t + k + 1, m, n - k - 1);  // char included in s
//        dp[m][n - k - 1] = included;
//    }
//
//    return min(not_included, 1 + included);
//}
//
//int sus_RECURSIVE(char *s, char *t, int m, int n) {
//    // base condition
//    // S string is empty
//    if (m == 0) {
//        return INT_MAX;
//    }
//
//    // T string is empty
//    if (n == 0) {
//        return 1;
//    }
//
//    int k = 0;
//    for (; k < n; k++) {
//        if (t[k] == s[0]) {
//            break;
//        }
//    }
//
//    // char not found in T
//    if (k == n) {
//        return 1;
//    }
//
//    return min(sus_RECURSIVE(s + 1, t, m - 1, n),     // char not included in s
//               1 + sus_RECURSIVE(s, t + k + 1, m, n - k - 1));    // char included in s
//}
//
//int solve(string &S, string &T) {
//    if (S == T) {
//        return -1;
//    }
//
//    int m = S.length();
//    int n = T.length();
//    char s[m];
//    char t[n];
//
//    for (int i = 0; i < m; i++) {
//        s[i] = S[i];
//    }
//
//    for (int i = 0; i < n; i++) {
//        t[i] = T[i];
//    }
//
////    int ans = sus_RECURSIVE(s, t, m, n);
//
////    memset(dp, -1, sizeof(dp));
////
////    int ans = sus_MEMOIZED(s, t, m, n);
//
//    int ans = sus_DP(s, t, m, n);
//
////    cout << "\nDP MATRIX AFTER ITERATION:\n";
////    printArray(m, n);
//
//    return ans;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int T;
//    cin >> T;
//    string s, t;
//
//    while (T--) {
//        cin >> s >> t;
//        cout << "\nlength of the shortest subsequence in s which is not a subsequence in t : "
//             << solve(s, t);
//    }
//
//    return 0;
//}
//
///*
//OUTPUT:
//1
//babab babba
//
//length of the shortest subsequence in s which is not a subsequence in t : 3
//*/