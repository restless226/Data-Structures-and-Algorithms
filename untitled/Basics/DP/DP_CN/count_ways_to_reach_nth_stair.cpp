///*
//PROBLEM STATEMENT:
//There are N stairs, and a person standing at the bottom wants to reach the top.
//The person can climb either 1 stair or 2 stairs at a time.
//Count the number of ways, the person can reach the top (order does not matter).
//Note: Order does not matter means for n=4 {1 2 1},{2 1 1},{1 1 2} are considered same.
//
//There are n stairs, a person standing at the bottom wants to reach the top.
//The person can climb either 1 stair or 2 stairs at a time.
//Count the number of ways, the person can reach the top (order does matter).
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1e9 + 7;
//
//void printArray(int dp[], int n) {
//    for (int i = 0; i <= n; ++i) {
//        cout << dp[i] << " ";
//    }
//    cout << '\n';
//}
//
//pair<int, int> solve(int n) {
//    pair<int, int> ans;
//    int dp[n + 1];
//    dp[0] = 1;
//    dp[1] = 1;
//    for (int i = 2; i <= n; i++) {
//        dp[i] = (dp[i - 2] + 1) % mod;    // order does not matter
//    }
//
//    printArray(dp, n);
//    ans.first = dp[n] % mod;
//
//    for (int i = 2; i <= n; i++) {
//        dp[i] = (dp[i - 2] + dp[i - 1]) % mod;  // order matters
//    }
//
//    printArray(dp, n);
//    ans.second = dp[n] % mod;
//
//    return ans;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    int n;
//
//    while (t--) {
//        cin >> n;
//        pair<int, int> ans = solve(n);
//        cout << "\ntotal number of ways to reach nth stair is : ";
//        cout << "\norder does not matter : " << ans.first << " " << "\norder matters : " << ans.second << '\n';
//    }
//
//    return 0;
//}
//
///*
//INPUT:
//3
//5
//6
//7
//
//OUTPUT:
//3
//4 5 6
//1 1 2 2 3
//1 1 2 3 5
//
//total number of ways to reach nth stair is :
//order does not matter : 3
//order matters : 5
//1 1 2 2 3 3
//1 1 2 3 5 8
//
//total number of ways to reach nth stair is :
//order does not matter : 3
//order matters : 8
//1 1 2 2 3 3 4
//1 1 2 3 5 8 13
//
//total number of ways to reach nth stair is :
//order does not matter : 4
//order matters : 13
//*/