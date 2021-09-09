///*
//PROBLEM STATEMENT:
//Given a string str, a partitioning of the string is a palindrome partitioning if every sub-string of the partition is a palindrome.
//Determine the fewest cuts needed for palindrome partitioning of given string.
//*/
//
//#include <bits/stdc++.h>
//
//#define MAX 501
//#define int long long
//using namespace std;
//
//bool is_palindrome(string x, int i, int j) {
//    while (i <= j) {
//        if (x[i] == x[j]) {
//            i++;
//            j--;
//        } else {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//// TODO
//// top down approach
//int pp_DP(string x){
//    int dp[x.length()][x.length()];
//
//    // INITIALIZATION
//
//    return -1;
//}
//
//int pp_MEMOIZED(string x, int i, int j) {
//    // base condition
//    // i > j -> size 0 (zero partitions required)
//    // i == j -> size 1 (zero partitions required)
//    if (i >= j) {
//        return 0;
//    }
//
//    // corner case
//    if (is_palindrome(x, i, j)) {
////        cout << "\nas x is already palindrome hence zero partitions are required\n";
//        return 0;   // as x is already palindrome hence zero partitions are required
//    }
//
//    static int dp[MAX][MAX];
//    memset(dp, -1, sizeof(dp));
//
//    // memoization block check
//    if (dp[i][j] != -1) {
//        return dp[i][j];
//    }
//
//    int min_partitions = INT_MAX;
//    int left;
//    int right;
//
//    // SCHEME-1
//    for (int k = i; k <= j - 1; k++) {   // using SCHEME - 1
//
//        // OPTIMIZATION-1...
//        if (dp[i][k] != -1) {
//            left = dp[i][k];
//        } else {
//            left = pp_MEMOIZED(x, i, k);
//        }
//
//        // OPTIMIZATION-2...
//        if (dp[k + 1][j] != -1) {
//            right = dp[k + 1][j];
//        } else {
//            right = pp_MEMOIZED(x, k + 1, j);
//        }
//
//        dp[i][j] = left + right + 1;
//
////        dp[i][j] = pp_MEMOIZED(x, i, k)
////                   + pp_MEMOIZED(x, k + 1, j)
////                   + 1; // extra cost
//        min_partitions = min(min_partitions, dp[i][j]);
//    }
//
//    return min_partitions;
//}
//
//
//int pp_RECURSIVE(string x, int i, int j) {
//    // base condition
//    // i > j -> size 0 (zero partitions required)
//    // i == j -> size 1 (zero partitions required)
//    if (i >= j) {
//        return 0;
//    }
//
//    // corner case
//    if (is_palindrome(x, i, j)) {
////        cout << "\nas x is already palindrome hence zero partitions are required\n";
//        return 0;   // as x is already palindrome hence zero partitions are required
//    }
//
//    // RECURSIVE CODE
//    int min_partitions = INT_MAX;
//    int temp_ans;
//
////    cout << "\nUSING SCHEME 1...\n";
//    for (int k = i; k <= j - 1; k++) {
//        temp_ans = pp_RECURSIVE(x, i, k)
//                   + pp_RECURSIVE(x, k + 1, j)
//                   + 1; // extra cost
//        min_partitions = min(min_partitions, temp_ans);
//    }
//
//
//////    cout << "\nUSING SCHEME 2...\n";
////    for (int k = i + 1; k <= j; k++) {
////        temp_ans = pp_RECURSIVE(x, i, k - 1)
////                   + pp_RECURSIVE(x, k, j)
////                   + 1;
////        min_partitions = min(min_partitions, temp_ans);
////    }
//
//    return min_partitions;
//}
//
//int32_t main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        string x;
//        cin >> x;
//
//        cout << "min no of partitions needed for palindrome partitioning of given string x is : ";
//        cout << "\npp_RECURSIVE -> " << pp_RECURSIVE(x, 0, x.length() - 1);
//        cout << "\npp_MEMOIZED -> " << pp_MEMOIZED(x, 0, x.length() - 1);
//    }
//
//    return 0;
//}