///*
//Target Sum Problem Statement:
//Given a list of non-negative integers, a1, a2, ..., an, and a target, S.
//Now you have 2 symbols + and -. For each integer, you should choose one from + and - as its new symbol.
// */
//
//#include <bits/stdc++.h>
//
//using namespace std;
//#define int long long
//
//void printArray(int **dp, int n, int sum) {
//    for (int i = 0; i < n + 1; ++i) {
//        for (int j = 0; j < sum + 1; ++j) {
//            cout << dp[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//int count_subsets_with_given_sum(int arr[], int n, int subset_1_sum, int **dp) {
//
//    // INITIALIZATION
//    // i->n && j->sum
//    for (int i = 0; i < n + 1; ++i) {
//        for (int j = 0; j < subset_1_sum + 1; ++j) {
//            if (i == 0) {
//                dp[i][j] = 0;
//            }
//            if (j == 0) {   // j==0 tells that sum is 0
//                dp[i][j] = 1; // 1 for empty subset
//            }
//        }
//    }
//
//    cout << "\nDP ARRAY BEFORE:\n";
//    printArray(dp, n, subset_1_sum);
//
//    // ITERATIVE (top down) SOLUTION CODE
//    for (int i = 1; i < n + 1; ++i) {
//        for (int j = 1; j < subset_1_sum + 1; ++j) {
//            if (arr[i - 1] <= j) {
//                dp[i][j] = (dp[i - 1][j - arr[i - 1]] + dp[i - 1][j]) % ((int) pow(10, 9) + 7);
//            } else if (arr[i - 1] > j) {
//                dp[i][j] = dp[i - 1][j] % ((int) pow(10, 9) + 7);
//            }
//        }
//    }
//
//    cout << "\nDP ARRAY AFTER:\n";
//    printArray(dp, n, subset_1_sum);
//
//    return dp[n][subset_1_sum] % ((int) pow(10, 9) + 7);
//}
//
//
//int target_sum_solve(int arr[], int n, int target_sum) {
//
//    // THIS PROBLEM IS SIMILAR TO "count_subsets_with_given_difference" which we have done before
//    // "target_sum" here is same as "diff" in COUNT_SUBSETS_WITH_GIVEN_DIFFERENCE problem
//    int arr_sum = 0;
//    for (int i = 0; i < n; ++i) {
//        arr_sum += arr[i];
//    }
//
//    int subset_1_sum = (target_sum + arr_sum) / 2;
//
//    int **dp = new int *[n + 1];
//    for (int i = 0; i < n + 1; ++i) {
//        dp[i] = new int[subset_1_sum + 1];
//    }
//
//    return count_subsets_with_given_sum(arr, n, subset_1_sum, dp);
//
//}
//
//int32_t main() {
//    int n, target_sum;
//    cin >> n >> target_sum;
//
//    int arr[n];
//
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//
//    cout<<target_sum_solve(arr, n, target_sum)<<'\n';
//    return 0;
//}
//
//
///*
//OUTPUT:
//
//4 1
//1 1 2 3
//
//DP ARRAY BEFORE:
//1 0 0 0 0
//1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//
//
//DP ARRAY AFTER:
//1 0 0 0 0
//1 1 0 0 0
//1 2 1 0 0
//1 2 2 2 1
//1 2 2 3 3
//
//3
// */