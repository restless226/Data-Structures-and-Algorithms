///*
//Problem Description:
//A thief wants to loot houses.
//He knows the amount of money in each house.
//He cannot loot two consecutive houses.
//Find the maximum amount of money he can loot.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int a[], int n) {
//    int dp[n];
//    dp[0] = a[0];
//    dp[1] = max(a[1], a[0]);
//
//    for (int i = 2; i < n; i++) {
//        dp[i] = max(a[i] + dp[i - 2], dp[i - 1]);
//    }
//
//    return dp[n - 1];
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
//        int n;
//        cin >> n;
//
//        int a[n];
//
//        for (int i = 0; i < n; i++) {
//            cin >> a[i];
//        }
//        cout << "maximum amount of money can be looted is : " << solve(a, n) << '\n';
//    }
//
//    return 0;
//}
//
///*
//OUTPUT:
//1
//6
//5 5 10 100 10 5
//maximum amount of money can be looted is : 110
//*/