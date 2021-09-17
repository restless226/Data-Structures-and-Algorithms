///*
//Problem Description:
//Given an NxM matrix that contains only 0s and 1s,
//find out the size of the maximum square sub-matrix with all 0s.
//You need to return the size of the square matrix with all 0s.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void printArray(int **dp, int n, int m) {
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout << dp[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//int solve(int **arr, int n, int m) {
////    int dp[n][m];
//    int **dp = new int *[n];
//    for (int i = 0; i < n; i++) {
//        dp[i] = new int[m];
//    }
//
//    // dp[i][j] -> length of side of largest square ending at arr[i][j] with all zeroes
//
//    // INITIALIZATION
//    for (int i = 0; i < n; i++) {
//        if (arr[i][0] == 0) {
//            dp[i][0] = 1;
//        } else {
//            dp[i][0] = 0;
//        }
//    }
//
//    for (int j = 0; j < m; j++) {
//        if (arr[0][j] == 0) {
//            dp[0][j] = 1;
//        } else {
//            dp[0][j] = 0;
//        }
//    }
//
//    cout << "\n\nDP ARRAY BEFORE ITERATION...\n";
//    printArray(dp, n, m);
//
//    // ITERATION
//    for (int i = 1; i < n; i++) {
//        for (int j = 1; j < m; j++) {
//            if (arr[i][j] == 0) {
//                dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
//            } else {
//                dp[i][j] = 0;
//            }
//        }
//    }
//
//    cout << "\n\nDP ARRAY AFTER ITERATION...\n";
//    printArray(dp, n, m);
//
//    int ans = 0;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            ans = max(ans, dp[i][j]);
//        }
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
//
//    while (t--) {
//        int n, m;
//        cin >> n;
//        cin >> m;
//        int **arr = new int *[n];
//
//        for (int i = 0; i < n; i++) {
//            arr[i] = new int[m];
//        }
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cin >> arr[i][j];
//            }
//        }
//        cout << "\nsize of maximum square sub-matrix with all 0s is : " << solve(arr, n, m) << '\n';
//    }
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//4
//3 3
//0 0 0
//0 0 1
//1 0 0
//3 3
//0 0 0
//0 0 0
//0 0 0
//1 10
//0 1 0 0 1 0 1 1 0 0
//1 4
//1 1 1 1
//size of maximum square sub-matrix with all 0s is :
//
//DP ARRAY BEFORE ITERATION...
//1 1 1
//1 -4995072469926809587 -4995072469926809587
//0 -4995072469926809587 -4995072469926809587
//
//
//
//DP ARRAY AFTER ITERATION...
//1 1 1
//1 2 0
//0 1 1
//
//2
//
//size of maximum square sub-matrix with all 0s is :
//
//DP ARRAY BEFORE ITERATION...
//1 1 1
//1 -4995072469926809587 -4995072469926809587
//1 -4995072469926809587 -4995072469926809587
//
//
//
//DP ARRAY AFTER ITERATION...
//1 1 1
//1 2 2
//1 2 3
//
//3
//
//size of maximum square sub-matrix with all 0s is :
//
//
//DP ARRAY BEFORE ITERATION...
//1 0 1 1 0 1 0 0 1 1
//
//
//
//DP ARRAY AFTER ITERATION...
//1 0 1 1 0 1 0 0 1 1
//
//1
//
//size of maximum square sub-matrix with all 0s is :
//
//DP ARRAY BEFORE ITERATION...
//0 0 0 0
//
//
//
//DP ARRAY AFTER ITERATION...
//0 0 0 0
//
//0
//*/