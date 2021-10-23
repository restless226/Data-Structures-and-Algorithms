///*
//PROBLEM STATEMENT:
//Given an array called A[] of sorted integers having no duplicates,
//find the length of the Longest Arithmetic Progression (LAP) in it.
//
//OBSERVATIONS:
//There will be two states in out dp solution
//1. Difference
//2. last value of A.P. with that difference
//
//dp[val][diff] -> no of elements of A.P. whose last element is val
//                 and common difference is diff
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(int arr[], int n) {
//    if (n <= 2) {
//        return n;
//    }
//    vector<unordered_map<int, int>> dp(n);
//    int max_len = 2;
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            int diff = arr[j] - arr[i];
//            if (dp[i].find(diff) != dp[i].end()) {
//                dp[j][diff] = dp[i][diff] + 1;
//            } else {
//                dp[j][diff] = 2;
//            }
//            max_len = max(max_len, dp[j][diff]);
//        }
//    }
//    return max_len;
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
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        cout << solve(arr, n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//4
//6
//1 7 10 13 14 19
//5
//2 4 6 8 10
//6
//1 7 10 13 14 19
//5
//9 4 7 2 10
//
//OUTPUT:
//4
//5
//4
//3
//*/