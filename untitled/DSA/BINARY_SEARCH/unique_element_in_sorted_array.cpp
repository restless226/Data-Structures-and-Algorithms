///*
//PROBLEM STATEMENT:
//Given a sorted array arr[] of size N.
//Find the element that appears only once in the array.
//All other elements appear exactly twice.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int arr[], int n) {
//    if (n == 1) {
//        return arr[0];
//    }
//    if (arr[0] != arr[1]) {
//        return arr[0];
//    } else if (arr[n - 1] != arr[n - 2]) {
//        return arr[n - 1];
//    }
//    int low = 0;
//    int high = n - 1;
//    int ans = -1;
//    while (low <= high) {
//        int mid = low + (high - low) / 2;
//        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
//            ans = arr[mid];
//            break;
//        }
//        if (((mid % 2 == 0) && arr[mid] == arr[mid + 1])
//            || ((mid % 2 != 0) && arr[mid] == arr[mid - 1])) {
//            low = mid + 1;
//        } else {
//            high = mid - 1;
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
//2
//11
//1 1 2 2 3 3 4 50 50 65 65
//7
//1 1 2 2 3 4 4
//
//OUTPUT:
//4
//3
//*/