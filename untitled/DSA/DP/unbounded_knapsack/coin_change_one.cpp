///*
//PROBLEM STATEMENT:
//Given a value N, find the number of ways to make change for N cents,
//if we have infinite supply of each of S = { S1, S2, .. , SM } valued coins.
//*/
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
//int coin_change_one(int coin[], int n, int given_sum) {
//    int coin_sum = 0;
//    for (int i = 0; i < n; ++i) {
//        coin_sum += coin[i];
//    }
//    int **dp = new int *[n + 1];
//    for (int i = 0; i < n + 1; ++i) {
//        dp[i] = new int[coin_sum + 1];
//    }
//    // INITIALIZATION
//    // i->n && j->sum
//    for (int i = 0; i < n + 1; ++i) {
//        for (int j = 0; j < given_sum + 1; ++j) {
//            if (i == 0) {   // we dont have any coins
//                dp[i][j] = 0;
//            }
//            if (j == 0) {     // sum is 0
//                dp[i][j] = 1; // 1 for empty subset
//            }
//        }
//    }
//    // ITERATIVE (top down) SOLUTION CODE
//    for (int i = 1; i < n + 1; ++i) {
//        for (int j = 1; j < given_sum + 1; ++j) {
//            if (coin[i - 1] <= j) {
//                dp[i][j] = dp[i][j - coin[i - 1]] + dp[i - 1][j];
//            } else if (coin[i - 1] > j) {
//                dp[i][j] = dp[i - 1][j];
//            }
//        }
//    }
//    cout << "\nCOIN MATRIX AFTER:\n";
//    printArray(dp, n, given_sum);
//    return dp[n][given_sum];
//}
//
//int32_t main() {
//    cin.tie(NULL);
//    cout.tie(NULL);
//    ios_base::sync_with_stdio(false);
//    int n, given_sum;
//    cin >> n >> given_sum;
//    int coin[n];
//    for (int i = 0; i < n; ++i) {
//        cin >> coin[i];
//    }
//    cout << "No of ways to make change for N cents: " << coin_change_one(coin, n, given_sum) << '\n';
//    return 0;
//}
//
///*
//OUTPUT:
//
//3 5
//1 2 3
//
//No of ways to make change for N cents:
//
//COIN MATRIX BEFORE:
//1 0 0 0 0 0
//1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
//
//
//COIN MATRIX AFTER:
//1 0 0 0 0 0
//1 1 1 1 1 1
//1 1 2 2 3 3
//1 1 2 3 4 5
//
//5
//*/