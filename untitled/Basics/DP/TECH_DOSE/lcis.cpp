///*
//PROBLEM STATEMENT:
//Given two arrays, arr1[] and arr2[] of sizes M and N respectively,
//find the length of the longest common increasing subsequence(LCIS).
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
////TODO
//int solve(int arr1[], int arr2[], int m, int n) {
//    int dp[m + 1][n + 1];
//    memset(dp, 0, sizeof(dp));
//    for (int i = 1; i <= m; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (arr1[i - 1] == arr2[j - 1]) {
//                dp[i][j] = 1 + dp[i - 1][j - 1];
//            } else {
//                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//            }
//        }
//    }
//    vector<int> v1;
//    int p1 = m;
//    int p2 = n;
//    while (p1 > 0 && p2 > 0) {
//        if (arr1[p1 - 1] == arr2[p2 - 1]) {
//            v1.push_back(arr1[p1 - 1]);
//            p1--;
//            p2--;
//        } else {
//            if (dp[p1 - 1][p2] > dp[p1][p2 - 1]) {
//                p1--;
//            } else {
//                p2--;
//            }
//        }
//    }
//    reverse(v1.begin(), v1.end());
//    vector<int> v2(v1.size());
//    v2[0] = 1;
//    for (int i = 1; i < v1.size(); i++) {
//        v2[i] = 1;
//        for (int j = 0; j < i; j++) {
//            if (arr1[i] > arr1[j] && v2[i] < v2[j] + 1)
//                v2[i] = 1 + v2[j];
//        }
//    }
//    int ans = INT_MIN;
//    for (int i = 0; i < v1.size(); i++) {
//        ans = max(ans, v2[i]);
//    }
//    return ans;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int m, n;
//        cin >> m;
//        int arr1[m];
//        for (int i = 0; i < m; i++) {
//            cin >> arr1[i];
//        }
//        cin >> n;
//        int arr2[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr2[i];
//        }
//        cout << "length of LCIS is : " << solve(arr1, arr2, m, n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//4
//3 4 9 1
//7
//5 3 8 9 10 2 1
//
//OUTPUT:
//
//*/