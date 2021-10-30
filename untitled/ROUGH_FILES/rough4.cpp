//#include <bits/stdc++.h>
//
//#define int long long int
//using namespace std;
//const int mod = 1000000007;
//
//bool solve() {
//    int n;
//    cin >> n;
//    int a[n];
//    int count = 0;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//        if (a[i] % (i + 2) == 0) count++;
//    }
//    if (a[0] % 2 == 0) return false;
//    if (count >= n - 1) return false;
//    return true;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        solve() ? cout << "YES\n" : cout << "NO\n";
//    }
//    return 0;
//}