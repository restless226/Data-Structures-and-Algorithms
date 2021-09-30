///*
//PROBLEM STATEMENT:
//Given an ascending sorted rotated array Arr of distinct integers of size N.
//The array is right rotated K times. Find the value of K.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int arr[], int n) {
//    int low = 0;
//    int high = n - 1;
//    // it stores index of min element in array which in turn corresponds to no of rotations
//    // [NOTE]: min element is always present in unsorted subarray, wrt this set mid value accordingly
//    int ans = 0;
//    while (low <= high) {
//        int mid = low + (high - low) / 2;
//        int prev = (mid + n - 1) % n;   // if mid is first element
//        int next = (mid + 1) % n;       // if mid is last element
//        if (arr[mid] <= arr[prev]
//            && arr[mid] <= arr[next]) {   // if mid is smaller than both ts neighbours then it is smallest
//            ans = mid;
//            break;
//        } else if (arr[mid] > arr[high]) { // go towards unsorted subarray (right of mid)
//            low = mid + 1;  // since array is in ascending order
//        } else if (arr[mid] < arr[high]) { // go towards unsorted subarray (left of mid)
//            high = mid - 1; // since array is in ascending order
//        }
//    }
//    return ans;
//}
//
//int32_t main() {
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
//3
//5
//5 1 2 3 4
//5
//1 2 3 4 5
//8
//11 12 15 18 2 5 6 8
//
//OUTPUT:
//1
//0
//4
//*/