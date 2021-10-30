//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//void solve() {
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int i = 0; i < n; i++) cin >> a[i];
//    int dp[n];
//    dp[0] = 1;
//    for (int i = 1; i < n; i++) {
//        dp[i] = 1;
//        for (int j = 0; j < i; j++) {
//            if (a[i] > a[j] && dp[i] < 1 + dp[j]) {
//                dp[i] = 1 + dp[j];
//            }
//        }
//        if (dp[i] > dp[i - 1]) {
//            cout << "YES\n";
//            return;
//        }
//    }
//    cout << "NO\n";
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        solve();
//    }
//    return 0;
//}