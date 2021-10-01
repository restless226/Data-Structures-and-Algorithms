///*
//PROBLEM STATEMENT:
//A peak element in an array is the one that is not smaller than its neighbours.
//Given an array arr[] of size N, find the index of any one of its peak elements.
//Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int peak_element(int arr[], int n) {
//    int start = 0;
//    int end = n - 1;
//    while (start <= end) {
//        int mid = start + (end - start) / 2;
//        if (mid == 0 && arr[mid] >= arr[mid + 1]
//            || mid == n - 1 && arr[mid] >= arr[mid - 1]) {
//            return arr[mid];
//        } else if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1]) {
//            return arr[mid];
//        } else if (arr[mid] < arr[mid + 1]) {
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
//        cin >> n;
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        cout << peak_element(arr, n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//6
//4
//5 10 20 15
//5
//10 20 30 40 50
//7
//10 20 15 2 20 90 67
//5
//10 20 30 40 40
//9
//15 3 19 1 7 11 1 7 7
//9
//1 15 25 45 42 21 17 12 11
//OUTPUT:
//20
//50
//90
//40
//7
//45
//*/