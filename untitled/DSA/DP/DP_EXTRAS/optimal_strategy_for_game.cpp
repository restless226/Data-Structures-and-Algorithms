///*
//PROBLEM STATEMENT:
//You are given an array A of size N.
//The array contains integers and is of even length.
//The elements of the array represent N coin of values V1, V2, ....Vn.
//You play against an opponent in an alternating way.
//
//In each turn, a player selects either the first or last coin from the row,
//removes it from the row permanently, and receives the value of the coin.
//
//You need to determine the maximum possible amount of money you can win if you go first.
//NOTE: Both the players are playing optimally.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int dp[1003][1003];
//
//int money(int arr[], int n, int i, int j) {
//    if (i > j) return dp[i][j] = 0;
//    if (dp[i][j] != -1) return dp[i][j];
//    if (dp[i + 2][j] == -1) {
//        dp[i + 2][j] = money(arr, n, i + 2, j);
//    }
//    if (dp[i + 1][j - 1] == -1) {
//        dp[i + 1][j - 1] = money(arr, n, i + 1, j - 1);
//    }
//    if (dp[i][j - 2] == -1) {
//        dp[i][j - 2] = money(arr, n, i, j - 2);
//    }
//    return dp[i][j] = max(arr[i] + min(dp[i + 2][j], dp[i + 1][j - 1]),
//                          arr[j] + min(dp[i + 1][j - 1], dp[i][j - 2]));
//}
//
//int solve(int arr[], int n) {
//    memset(dp, -1, sizeof(dp));
//    return money(arr, n, 0, n - 1);
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        int arr[n];
//        for (int i = 0; i < n; i++)
//            cin >> arr[i];
//        cout << solve(arr, n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//4
//5 3 7 10
//4
//8 15 3 7
//
//OUTPUT:
//15
//22
//*/