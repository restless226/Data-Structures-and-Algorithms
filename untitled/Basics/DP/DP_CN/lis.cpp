///*
//PROBLEM STATEMENT:
//Given an array of integers,
//find the length of the longest (strictly) increasing subsequence from the given array.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int lis(int a[], int n) {
//    int dp[n];
//    dp[0] = 1;
//
//    for (int i = 1; i < n; i++) {
//        dp[i] = 1;
//        for (int j = i - 1; j >= 0; j--) {
//            if (a[j] > a[i]) {
//                continue;
//            }
//            int possibleAns = dp[j] + 1;
//            dp[i] = max(dp[i], possibleAns);
//        }
//    }
//
//    int ans = 1;
//    for (int i = 0; i < n; i++) {
//        ans = max(ans, dp[i]);
//    }
//
//    return ans;
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
//        cout << "length of the longest increasing subsequence is : " << lis(a, n) << '\n';
//    }
//
//    return 0;
//}
//
///*
//OUTPUT:
//2
//6
//5 8 3 7 9 1
//7
//4 3 9 7 6 8 20
//length of the longest increasing subsequence is : 3
//length of the longest increasing subsequence is : 4
//*/