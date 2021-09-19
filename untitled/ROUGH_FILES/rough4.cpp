//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void solve() {
//    int n;
//    int q;
//    cin >> n >> q;
//
//    int len[n];
//    for (int i = 0; i < n; i++) {
//        cin >> len[i];
//    }
//
//    sort(len, len + n);
//
//    int arr[q];
//    for (int i = 0; i < q; i++) {
//        cin >> arr[i];
//
//        int temp = 0;
//        while (temp < n) {
//            if (len[temp] >= arr[i]) {
//                break;
//            }
//            temp++;
//        }
//
//        for (int j = 1; j < temp; j++) {
//            if (len[j] + 1 >= arr[i]) {
//                cout << n - j << '\n';
//                break;
//            } else {
//                j++;
//            }
//        }
//
//
//    }
//
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
//        solve();
//    }
//
//    return 0;
//}