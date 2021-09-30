///*
//PROBLEM STATEMENT:
//Given a sorted array,
//find the element in the array which has minimum difference with the given number.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int arr[], int n, int x) {
//    int start = 0;
//    int end = n - 1;
//    while (start <= end) {
//        int mid = start + (end - start) / 2;
//        if (arr[mid] == x) {
//            return arr[mid];
//        } else if (arr[mid] < x) {
//            start = mid + 1;
//        } else if (arr[mid] > x) {
//            end = mid - 1;
//        }
//    }
//    return (arr[start] - x <= x - arr[end]) ? arr[start] : arr[end];
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
//        cout << solve(arr, n, x) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//3 7
//4 6 10
//5 12
//1 3 8 10 15
//
//OUTPUT:
//6
//10
//*/