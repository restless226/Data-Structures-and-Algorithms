///*
//PROBLEM STATEMENT:
//Given N friends, each one can remain single or can be paired up with some other friend.
//Each friend can be paired only once. Find out the total number of ways in which
//friends can remain single or can be paired up.
//Note: Since answer can be very large, return your answer mod 10^9+7.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//const int mod = 1000000007;
//
//void printArray(int dp[], int n) {
//    for (int i = 0; i < n + 1; ++i) {
//        cout << dp[i] << " ";
//    }
//    cout << '\n';
//}
//
//int solve(int n) {
//    int dp[n + 1];
//    dp[0] = dp[1] = 1;
//    dp[2] = 2;
//    for (int i = 3; i <= n; i++) {
//        dp[i] = (dp[i - 1]) % mod + ((i - 1) * dp[i - 2]) % mod;
//        dp[i] %= mod;
//    }
//    cout << "\nBELL ARRAY...\n";
//    printArray(dp, n);
//    return dp[n] % mod;
//}
//
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        cout << solve(n);
//    }
//}
//
///*
//INPUT:
//3
//4
//6
//10
//
//OUTPUT:
//BELL ARRAY...
//1 1 2 4 10
//10
//BELL ARRAY...
//1 1 2 4 10 26 76
//76
//BELL ARRAY...
//1 1 2 4 10 26 76 232 764 2620 9496
//9496
//*/