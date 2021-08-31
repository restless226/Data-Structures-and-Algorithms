///*
//PROBLEM STATEMENT:
//Given an integer array arr of size N, the task is to divide it into two sets S1 and S2
//such that the absolute difference between their sums is minimum and find the minimum difference
//*/
//
//#include <bits/stdc++.h>
//
//using namespace std;
//#define int long long
//
//void subset_sum(int arr[], int n, int sum, bool **dp) {
//
//    // INITIALIZATION
//    for (int i = 0; i < n + 1; ++i) {
//        for (int j = 0; j < sum + 1; ++j) {
//            if (i == 0) {
//                dp[i][j] = false;
//            }
//            if (j == 0) {
//                dp[i][j] = true;
//            }
//        }
//    }
//
//    // ITERATIVE (top down) SOLUTION CODE
//    for (int i = 1; i < n + 1; ++i) {
//        for (int j = 1; j < sum + 1; ++j) {
//            if (arr[i - 1] <= j) {
//                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
//            } else if (arr[i - 1] > j) {
//                dp[i][j] = dp[i - 1][j];
//            }
//        }
//    }
//
//}
//
//
//int min_sum_partition(int arr[], int n) {
//    /*
//    THIS PROBLEM IS SIMILAR WITH "EQUAL SUM PARTITION PROBLEM" && "SUBSET SUM PROBLEM" WE DONE BEFORE
//    To find: min(S1 - S2)
//    [S1, S2] -> [0, Range] -> [0, arr_sum]
//    Assume S1 < S2, for all S1 and S2, which means S1 is always before halfway of Range
//    S1 + S2 = Range => S2 = Range - S1
//    To find = min(Range - S1)
//    (Range - S1) is min only when S1 in max
//    To find : Range - max(S1)
//    Range corresponds to arr_sum
//    */
//
//    int sum = 0;
//
//    for (int i = 0; i < n; ++i) {
//        sum += arr[i];
//    }
//
////    cout << "SUM IS:" << sum << '\n';
////
////    bool dp[n + 1][sum + 1];
//
//    bool **dp = new bool *[n + 1];
//
//    for (int i = 0; i < n + 1; ++i) {
//        dp[i] = new bool[sum + 1];
//    }
//
//    subset_sum(arr, n, sum, dp);
//
////    cout << "DP ARRAY AFTER:\n";
////    for (int i = 0; i < n + 1; ++i) {
////        for (int j = 0; j < sum + 1; ++j) {
////            cout << dp[i][j] << " ";
////        }
////        cout << '\n';
////    }
////    cout << '\n';
//
//    for (int i = (sum / 2); i >= 0; i--) {
//        if (dp[n][i]) {
//            return sum - (2 * i);
//        }
//    }
//
//    return 0;
//}
//
//int32_t main() {
//    int n;
//    cin >> n;
//
//    int arr[n];
//
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//
//    cout << "minimum difference between sets S1 and S2 is:\n" << min_sum_partition(arr, n) << '\n';
//
//    return 0;
//}
//
//
///*
//OUTPUT:
//
//4
//1 6 5 11
//minimum difference between sets S1 and S2 is:
//
//SUM IS:23
//
//DP ARRAY AFTER:
//1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//1 1 0 0 0 0 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//1 1 0 0 0 1 1 1 0 0 0 1 1 0 0 0 0 0 0 0 0 0 0 0
//1 1 0 0 0 1 1 1 0 0 0 1 1 0 0 0 1 1 1 0 0 0 1 1
//
//1
// */