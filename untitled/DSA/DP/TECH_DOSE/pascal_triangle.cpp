///*
//PROBLEM STATEMENT:
//Given a positive integer N, return the Nth row of pascal's triangle.
//Pascal's triangle is a triangular array of the binomial coefficients formed by
//summing up the elements of previous row.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//const int mod = 1000000007;
//
//void solve(int n, vector<int> &ans) {
//    int dp[n + 1][n + 1];
//    memset(dp, 0, sizeof(dp));
//    dp[0][0] = 1;
//    for (int i = 1; i <= n; i++) {
//        dp[i][0] = 1;
//        for (int j = 1; j <= n; j++) {
//            dp[i][j] = (dp[i - 1][j - 1] % mod + dp[i - 1][j] % mod) % mod;
//        }
//    }
//    for (int i = 0; i <= n; i++) {
//        ans.push_back(dp[n][i]);
//    }
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
//        vector<int> ans;
//        solve(n, ans);
//        for (int i = 0; i < ans.size(); i++) {
//            cout << ans[i] << " ";
//        }
//        cout << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//7
//0
//1
//2
//3
//4
//5
//17
//
//
//OUTPUT:
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
//1 17 136 680 2380 6188 12376 19448 24310 24310 19448 12376 6188 2380 680 136 17 1
//*/