///*
//PROBLEM STATEMENT:
//Given an positive integer N and a list of N integers A[].
//Each element in the array denotes the maximum length of jump you can cover.
//Find out if you can make it to the last index if you start at the first index of the list.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int arr[], int n) {
//    int reachable = 0;
//    for (int i = 0; i < n; i++) {
//        if (reachable < i) {
//            return 0;
//        }
//        reachable = max(reachable, i + arr[i]);
//    }
//    return 1;
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
//1
//0
//6
//1 2 0 3 0 0
//3
//1 0 2
//11
//1 1 2 3 2 1 0 0 2 2 3
//OUTPUT:
//
//*/