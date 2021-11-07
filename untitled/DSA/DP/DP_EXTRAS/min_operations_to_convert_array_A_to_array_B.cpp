///*
//PROBLEM STATEMENT:
//Given two Arrays A[] and B[] of length N and M respectively.
//Find the minimum number of insertions and deletions on the array A[],
//required to make both the arrays identical.
//Note: Array B[] is sorted and all its elements are distinct,
//operations can be performed at any index not necessarily at end.
//
//PREREQUISITE: LIS
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long int
//using namespace std;
//const int mod = 1000000007;
//
//int lcis(int a[], int b[], int n, int m) {
//    int dp[m];
//    for (int j = 0; j < m; j++) dp[j] = 0;
//    for (int i = 0; i < n; i++) {
//        int current = 0;
//        for (int j = 0; j < m; j++) {
//            if (a[i] == b[j])
//                if (current + 1 > dp[j]) dp[j] = current + 1;
//            if (a[i] > b[j])
//                if (dp[j] > current) current = dp[j];
//        }
//    }
//    int ans = 0;
//    for (int i = 0; i < m; i++)
//        if (dp[i] > ans) ans = dp[i];
//    return ans;
//}
//
//int solve(int a[], int b[], int n, int m) {
//    return n + m - 2 * lcis(a, b, n, m);
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n, m;
//        cin >> n >> m;
//        int a[n], b[m];
//        for (int i = 0; i < n; i++) cin >> a[i];
//        for (int i = 0; i < m; i++) cin >> b[i];
//        cout << solve(a, b, n, m) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//5 3
//1 2 5 3 1
//1 3 5
//2 2
//1 4
//1 4
//7 7
//1 9 7 4 9 8 9
//1 2 4 7 8 9 10
//
//OUTPUT:
//4
//0
//6
//*/