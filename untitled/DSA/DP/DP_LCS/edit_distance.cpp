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
//void printArray(int **dp, int m, int n) {
//    for (int i = 0; i < m + 1; ++i) {
//        for (int j = 0; j < n + 1; ++j) {
//            cout << dp[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//// top down approach
//int edit_distance_DP(string x, string y) {
//
////    int dp[m + 1][n + 1];
//    int m = x.length();
//    int n = y.length();
//
//    int **dp = new int *[m + 1];
//
//    for (int i = 0; i < m + 1; i++) {
//        dp[i] = new int[n + 1];
//    }
//
//    // INITIALIZATION
//
//    // first row
//    for (int j = 0; j < n + 1; j++) {
//        dp[0][j] = j;
//    }
//
//    // first column
//    for (int i = 0; i < m + 1; i++) {
//        dp[i][0] = i;
//    }
//
//    cout << "\n\nDP ARRAY BEFORE ITERATION...\n";
//    printArray(dp, m, n);
//
//    // ITERATIVE DP CODE
//    // dp[i][j]=minimum number of edit operations required to transform x[0....(i-1)] to y[0...(j-1)]
//    for (int i = 1; i < m + 1; i++) {
//        for (int j = 1; j < n + 1; j++) {
//            if (x[i - 1] == y[j - 1]) {
//                dp[i][j] = dp[i - 1][j - 1];
//            } else {
//                // insert count
//                int insert_count = 1 + dp[i - 1][j];
//
//                // delete count
//                int delete_count = 1 + dp[i][j - 1];
//
//                // replace count
//                int replace_count = 1 + dp[i - 1][j - 1];
//
//                dp[i][j] = min(replace_count, min(insert_count, delete_count));
//            }
//        }
//    }
//
//    cout << "\n\nDP ARRAY AFTER ITERATION...\n";
//    printArray(dp, m, n);
//
//    return dp[m][n];
//}
//
//int edit_distance_MEMOIZED(string x, string y, int **dp) {
//    // base condition
//    if (x.empty() || y.empty()) {
//        return max(x.length(), y.length());
//    }
//
//    int m = x.length();
//    int n = y.length();
//
//    // memoization block check
//    if (dp[m][n] != -1) {
//        return dp[m][n];
//    }
//
//    int ans;
//
//    if (x[0] == y[0]) {
//        ans = edit_distance_MEMOIZED(x.substr(1), y.substr(1), dp);
//    } else {
//        // insert count
//        int insert_count = 1 + edit_distance_MEMOIZED(x.substr(1), y, dp);
//
//        // delete count
//        int delete_count = 1 + edit_distance_MEMOIZED(x, y.substr(1), dp);
//
//        // replace count
//        int replace_count = 1 + edit_distance_MEMOIZED(x.substr(1), y.substr(1), dp);
//
//        ans = min(replace_count, min(insert_count, delete_count));
//    }
//
//    dp[m][n] = ans;
//    return ans;
//}
//
//int edit_distance_RECURSIVE(string x, string y) {
//    // base condition
//    if (x.empty() || y.empty()) {
//        return max(x.length(), y.length());
//    }
//
//    if (x[0] == y[0]) {
//        return edit_distance_RECURSIVE(x.substr(1), y.substr(1));
//    } else {
//        // insert count
//        int insert_count = 1 + edit_distance_RECURSIVE(x.substr(1), y);
//
//        // delete count
//        int delete_count = 1 + edit_distance_RECURSIVE(x, y.substr(1));
//
//        // replace count
//        int replace_count = 1 + edit_distance_RECURSIVE(x.substr(1), y.substr(1));
//
//        return min(replace_count, min(insert_count, delete_count));
//    }
//}
//
//int32_t main() {
//    int t;
//    cin >> t;
//    string x, y;
//
//    while (t--) {
//        cin >> x;
//        cin >> y;
//        cout << "\nminimum number of operations performed to convert x to y is : ";
//        cout << "\nedit_distance_RECURSIVE -> " << edit_distance_RECURSIVE(x, y);
//
//        int m = x.length();
//        int n = y.length();
//
//        int **dp = new int *[m + 1];
//
//        for (int i = 0; i < m + 1; i++) {
//            dp[i] = new int[n + 1];
//        }
//
//        // INITIALIZING ALL ENTRIES TO -1
//        // [NOTE]: memset() does not work in this case
//        for (int i = 0; i < m + 1; i++) {
//            for (int j = 0; j < n + 1; j++) {
//                dp[i][j] = -1;
//            }
//        }
//
//        cout << "\nedit_distance_MEMOIZED -> " << edit_distance_MEMOIZED(x, y, dp);
//
//        cout << "\nedit_distance_DP -> " << edit_distance_DP(x, y);
//    }
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//3
//abcd axdze
//whgtdwhgtdg aswcfg
//abcdf afd
//
//minimum number of operations performed to convert x to y is :
//edit_distance_RECURSIVE -> 4
//edit_distance_MEMOIZED -> 4
//edit_distance_DP ->
//
//DP ARRAY BEFORE ITERATION...
//0 1 2 3 4 5
//1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//2 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//3 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//4 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//
//
//
//DP ARRAY AFTER ITERATION...
//0 1 2 3 4 5
//1 0 1 2 3 4
//2 1 1 2 3 4
//3 2 2 2 3 4
//4 3 3 2 3 4
//
//4
//minimum number of operations performed to convert x to y is :
//edit_distance_RECURSIVE -> 9
//edit_distance_MEMOIZED -> 9
//edit_distance_DP ->
//
//DP ARRAY BEFORE ITERATION...
//0 1 2 3 4 5 6
//1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//2 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//3 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//4 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//5 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//6 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//7 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//8 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//9 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//10 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//11 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//
//
//
//DP ARRAY AFTER ITERATION...
//0 1 2 3 4 5 6
//1 1 2 2 3 4 5
//2 2 2 3 3 4 5
//3 3 3 3 4 4 4
//4 4 4 4 4 5 5
//5 5 5 5 5 5 6
//6 6 6 5 6 6 6
//7 7 7 6 6 7 7
//8 8 8 7 7 7 7
//9 9 9 8 8 8 8
//10 10 10 9 9 9 9
//11 11 11 10 10 10 9
//
//9
//
//minimum number of operations performed to convert x to y is :
//edit_distance_RECURSIVE -> 3
//edit_distance_MEMOIZED -> 3
//edit_distance_DP ->
//
//DP ARRAY BEFORE ITERATION...
//0 1 2 3
//1 -4995072469926809587 -4995072469926809587 -4995072469926809587
//2 -4995072469926809587 -4995072469926809587 -4995072469926809587
//3 -4995072469926809587 -4995072469926809587 -4995072469926809587
//4 -4995072469926809587 -4995072469926809587 -4995072469926809587
//5 -4995072469926809587 -4995072469926809587 -4995072469926809587
//
//
//
//DP ARRAY AFTER ITERATION...
//0 1 2 3
//1 0 1 2
//2 1 1 2
//3 2 2 2
//4 3 3 2
//5 4 3 3
//
//3
//*/