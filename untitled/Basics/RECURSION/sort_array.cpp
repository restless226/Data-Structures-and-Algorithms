///*
//PROBLEM STATEMENT:
//Sort an array using recursion
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void sort_rec(int *arr, int n) {
//    if (n == 0 || n == 1) {
//        return;
//    }
//    for (int i = 0; i < n; i++) {
//        if (arr[0] > arr[1]) {
//            swap(arr[0], arr[1]);
//        }
//    }
//    sort_rec(arr + 1, n - 1);
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
//        int *arr = new int[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        sort_rec(arr, n);
//        for (int i = 0; i < n; i++) {
//            cout << arr[i] << " ";
//        }
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//6
//5 7 3 9 2 9
//
//OUTPUT:
//
//*/