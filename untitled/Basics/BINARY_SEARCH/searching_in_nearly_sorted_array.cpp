///*
//PROBLEM STATEMENT:
//Given an array which is sorted, but after sorting
//some elements are moved to either of the adjacent positions,
//i.e., arr[i] may be present at arr[i+1] or arr[i-1].
//Write an efficient function to search an element in this array.
//Basically the element arr[i] can only be swapped with either arr[i+1] or arr[i-1].
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int arr[], int n, int k) {
//    int start = 0;
//    int end = n - 1;
//    while (start <= end) {
//        int mid = start + (end - start) / 2;
//        if (arr[mid] == k) {
//            return mid;
//        } else if (mid - 1 >= start && arr[mid - 1] == k) {
//            return mid - 1;
//        } else if (mid + 1 <= end && arr[mid + 1] == k) {
//            return mid + 1;
//        } else if (arr[mid] < k) {
//            start = mid + 1;
//        } else {
//            end = mid - 1;
//        }
//    }
//    return -1;
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
//        int k;
//        cin >> n >> k;
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        cout << solve(arr, n, k);
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//5 4
//3 2 10 4 40
//
//OUTPUT:
//3
//*/