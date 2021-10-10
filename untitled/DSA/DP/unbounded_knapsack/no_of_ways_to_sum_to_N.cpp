///*
//PROBLEM STATEMENT:
//Given a set of m distinct positive integers and a value ‘N’.
//Count the total number of ways we can form ‘N’ by  adding the array elements.
//Repetitions and different arrangements are allowed.
//NOTE: Answer can be quite large output the answer modulo 10^9+7.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(int arr[], int m, int n) {
//    int dp[n + 1];
//    memset(dp, 0, sizeof(dp));
//    dp[0] = 1;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (i >= arr[j])
//                dp[i] = (dp[i] + dp[i - arr[j]]) % mod;
//        }
//    }
//    return dp[n] % mod;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int m, n;
//        cin >> m >> n;
//        int arr[m];
//        for (int i = 0; i < m; i++)
//            cin >> arr[i];
//        cout << solve(arr, m, n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//3 7
//1 5 6
//3 3
//1 2 3
//
//OUTPUT:
//6
//4
//*/