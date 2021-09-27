///*
//PROBLEM STATEMENT:
//Given an integer x, find the square root of x.
//If x is not a perfect square, then return floor(√x).
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//double precision = 1e-6;
//
//double multiply(double mid, int n) {
//    double ans = 1;
//    for (int i = 0; i < n; i++) {
//        ans *= mid;
//    }
//    return ans;
//}
//
//double solve(double x, int n) {
//    double start = 1;
//    double end = x;
//    while (end - start > precision) {
//        double mid = (start) + (end - start) / 2;
//        if (multiply(mid, n) < x) {
//            start = mid;
//        } else {
//            end = mid;
//        }
//    }
//    return end;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        double x;
//        int n;
//        cin >> x >> n;
//        cout << pow(x, 1.0 / n) << " " << solve(x, n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//4
//2 2
//64 3
//125 3
//76 4
//
//OUTPUT:
//1.41421 1.41421
//4 4
//5 5
//2.95259 2.95259
//*/