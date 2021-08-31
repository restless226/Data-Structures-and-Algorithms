//#include <bits/stdc++.h>
//
//using namespace std;
//#define int long long
//
//bool check(int cows, int positions[], int n, int distance) {
//
//    int count = 1;    // as we have already placed first cow at positions[0]
//    int last_position_possible = positions[0];
//
//    for (int i = 1; i < n; ++i) {
//        if (positions[i] - last_position_possible >= distance) {
//            last_position_possible = positions[i];
//            count++;
//        }
//
//        if (count == cows) {
//            return true;
//        }
//    }
//
//    return false;
//}
//
//int count_no_of_subsets_with_given_diff(int positions[], int n, int cows) {
//
//    sort(positions, positions + n);
//
//    int ans = -1;
//    int start = 0;  // min distance possible
//    int end = positions[n - 1] - positions[0];    // max distance possible
//
//    while (start <= end) {
//        int mid = start + (end - start) / 2;
//
//        if (check(cows, positions, n, mid)) {
//            ans = mid;
//            start = mid + 1;
//        } else {
//            end = mid - 1;
//        }
//
//    }
//
//    return ans;
//
//}
//
//int32_t main() {
//    cin.tie(NULL);
//    cout.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//
//    int t, n, c;
//    cin >> t;
//
//    while (t--) {
//        cin >> n >> c;
//
//        int positions[n];
//
//        for (int i = 0; i < n; ++i) {
//            cin >> positions[i];
//        }
//
//        cout << count_no_of_subsets_with_given_diff(positions, n, c) << '\n';
//    }
//
//
//    return 0;
//}
//
///*
//OUTPUT:
//1
//5 3
//1 2 8 4 9
//3
// */