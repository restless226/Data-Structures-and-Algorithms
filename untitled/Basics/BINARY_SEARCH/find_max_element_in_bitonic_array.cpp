///*
//PROBLEM STATEMENT:
//Given a bitonic sequence of n distinct elements,
//write a program to find a given element x in the bitonic sequence in O(log n) time.
//A Bitonic Sequence is a sequence of numbers that is first strictly increasing then after a point strictly decreasing.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int peak_index(int arr[], int n) {
//    int start = 0;
//    int end = n - 1;
//    while (start <= end) {
//        int mid = start + (end - start) / 2;
//        if (mid == 0 && arr[mid] >= arr[mid + 1]
//            || mid == n - 1 && arr[mid] >= arr[mid - 1]) {
//            return mid;
//        } else if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1]) {
//            return mid;
//        } else if (arr[mid] < arr[mid + 1]) {
//            start = mid + 1;
//        } else {
//            end = mid - 1;
//        }
//    }
//    return -1;
//}
//
//int asc_BS(int arr[], int start, int end, int k) {
//    while (start <= end) {
//        int mid = start + (end - start) / 2;
//        if (arr[mid] == k) {
//            return mid;
//        } else if (arr[mid] < k) {
//            start = mid + 1;
//        } else {
//            end = mid - 1;
//        }
//    }
//    return -1;
//}
//
//int desc_BS(int arr[], int start, int end, int k) {
//    while (start <= end) {
//        int mid = start + (end - start) / 2;
//        if (arr[mid] == k) {
//            return mid;
//        } else if (arr[mid] > k) {
//            start = mid + 1;
//        } else {
//            end = mid - 1;
//        }
//    }
//    return -1;
//}
//
//int solve(int arr[], int n, int k) {
//    int start = 0;
//    int end = n - 1;
//    int peakI = peak_index(arr, n);
//    int asc = asc_BS(arr, start, peakI - 1, k);
//    int desc = desc_BS(arr, peakI, end, k);
//    return (asc == -1 && desc == -1) ? -1 : max(asc, desc);
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
//        cout << solve(arr, n, k) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//7 20
//-3 9 18 20 17 5 1
//7 30
//-3 9 18 20 17 5 1
//6 4
//1 3 8 12 4 2
//
//OUTPUT:
//3
//-1
//4
//*/