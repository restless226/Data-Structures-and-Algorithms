///*
//PROBLEM STATEMENT:
//Given a sorted array arr[] of size N without duplicates, and given a value x.
//Floor of x is defined as the greatest element K in arr[] such that
//K is smaller than or equal to x. Find the index of K(0-based indexing).
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int bs_floor(int arr[], int n, int x) {
//    int start = 0;
//    int end = n - 1;
//    int ans = -1;
//    while (start <= end) {
//        int mid = start + (end - start) / 2;
//        if (arr[mid] == x) {
//            ans = mid;
//            break;
//        } else if (arr[mid] < x) {
//            ans = mid;
//            start = mid + 1;
//        } else if (arr[mid] > x) {
//            end = mid - 1;
//        }
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
//        int n;
//        int x;
//        cin >> n >> x;
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        cout << bs_floor(arr, n, x) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//7 0
//1 2 8 10 11 12 19
//7 5
//1 2 8 10 11 12 19
//9 5
//1 2 3 4 8 10 10 12 19
//
//OUTPUT:
//-1
//1
//3
//*/