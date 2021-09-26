///*
//PROBLEM STATEMENT:
//Given a sorted array Arr of size N and a number k,
//you need to find the number of occurrences of k in Arr.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int arr[], int n, int k) {
//    int low = 0;
//    int high = n - 1;
//    int mn = INT_MAX;
//    int mx = INT_MIN;
//
//    // first index
//    while (low <= high) {
//        int mid = low + (high - low) / 2;
//        if (arr[mid] == k) {
//            high = mid - 1;
//            mn = min(mn, mid);
//        } else if (arr[mid] < k) {
//            low = mid + 1;
//        } else {
//            high = mid - 1;
//        }
//    }
//
//    low = 0;
//    high = n - 1;
//
//    // last index
//    while (low <= high) {
//        int mid = low + (high - low) / 2;
//        if (arr[mid] == k) {
//            low = mid + 1;
//            mx = max(mx, mid);
//        } else if (arr[mid] < k) {
//            low = mid + 1;
//        } else {
//            high = mid - 1;
//        }
//    }
//    return (mx == INT_MIN || mn == INT_MAX) ? 0 : mx - mn + 1;
//}
//
//int32_t main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int n, k;
//        cin >> n >> k;
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        cout << solve(arr, n, k) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//7 2
//1 1 2 2 2 2 3
//7 4
//1 1 2 2 2 2 3 3
//
//OUTPUT:
//4
//0
//*/