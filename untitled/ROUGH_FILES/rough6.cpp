//#include <bits/stdc++.h>
//
//#define int long long int
//using namespace std;
//const int mod = 1000000007;
//
//int solve() {
//    int n, k;
//    cin >> n >> k;
//    if (n == 1) return 0;
//    else if (n == 2) return 1;
//    float power = log2(k);
//    int steps = ceil(power) + 1;
//    steps += ceil((n - (int) pow(2, power + 1)) / k);
//    return steps;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        cout << solve() << '\n';
//    }
//    return 0;
//}