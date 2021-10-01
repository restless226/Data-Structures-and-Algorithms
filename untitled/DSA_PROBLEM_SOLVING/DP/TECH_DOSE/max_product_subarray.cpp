///*
//PROBLEM STATEMENT:
//Given an array Arr[] that contains N integers (may be positive, negative or zero).
//Find the product of the maximum product subarray.
//
//PREREQUISITE: Kadane's Algorithm
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(const int arr[], int n) {
//    int maxProd = arr[0];
//    int minProd = arr[0];
//    int ans = arr[0];
//    for (int i = 1; i < n; i++) {
//        if (arr[i] < 0) {
//            swap(minProd, maxProd);
//        }
//        maxProd = max(arr[i], arr[i] * maxProd);
//        minProd = min(arr[i], arr[i] * minProd);
//        ans = max(ans, maxProd);
//    }
//    return ans;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    int n;
//    while (t--) {
//        cin >> n;
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        cout << solve(arr, n) << '\n';
//    }
//
//    return 0;
//}
//
///*
//INPUT:
//2
//5
//6 -3 -10 0 2
//6
//2 3 4 5 -1 0
//
//OUTPUT:
//180
//120
//*/