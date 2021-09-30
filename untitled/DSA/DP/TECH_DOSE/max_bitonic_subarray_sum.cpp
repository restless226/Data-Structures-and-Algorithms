///*
//PROBLEM STATEMENT:
//Given an array containing n numbers.
//The task is to find the maximum sum bitonic subarray.
//A bitonic subarray is a subarray in which elements are first increasing and then decreasing.
//A strictly increasing or strictly decreasing subarray is also considered as bitonic subarray.
//
//PREREQUISITE: LIS
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int arr[], int n) {
//    int msibs[n];
//    int msdbs[n];
//    for (int i = 0; i < n; i++) {
//        msibs[i] = msdbs[i] = arr[i];
//    }
//    // compute msibs values from left to right
//    for (int i = 1; i < n; i++) {
//        if (arr[i] > arr[i - 1] && msibs[i] < arr[i] + msibs[i - 1]) {
//            msibs[i] = arr[i] + msibs[i - 1];
//        }
//    }
//    // compute msdbs values from right to left
//    for (int i = n - 2; i >= 0; i--) {
//        if (arr[i] > arr[i + 1] && msdbs[i] < arr[i] + msdbs[i + 1]) {
//            msdbs[i] = arr[i] + msdbs[i + 1];
//        }
//    }
//
//    int ans = INT_MIN;
//    for (int i = 0; i < n; i++) {
//        ans = max(ans, msibs[i] + msdbs[i] - arr[i]);
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
//        int n, i;
//        cin >> n;
//        int arr[n];
//        for (i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        cout << "maximum sum bitonic subarray sum is : " << solve(arr, n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//7
//5 3 9 2 7 6 4
//
//OUTPUT:
//maximum sum bitonic subarray sum is : 19
//*/