///*
//Longest Bitonic  Subsequence (LBS)
//PROBLEM STATEMENT:
//Given an array of positive integers. Find the maximum length of Bitonic subsequence.
//A subsequence of array is called Bitonic if it is first increasing, then decreasing.
//
//PREREQUISITE: LIS, LDS
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int lbs(int arr[], int n) {
//    int msibs[n];
//    int msdbs[n];
//    for (int i = 0; i < n; i++) {
//        msibs[i] = msdbs[i] = 1;
//    }
//    // compute msibs values from left to right
//    for (int i = 1; i < n; i++) {
//        for (int j = 0; j < i; j++) {
//            if (arr[i] > arr[j] && msibs[i] < 1 + msibs[j]) {
//                msibs[i] = 1 + msibs[j];
//            }
//        }
//    }
//    // compute msdbs values from right to left
//    for (int i = n - 2; i >= 0; i--) {
//        for (int j = n - 1; j > i; j--) {
//            if (arr[i] > arr[j] && msdbs[i] < 1 + msdbs[j]) {
//                msdbs[i] = 1 + msdbs[j];
//            }
//        }
//    }
//
//    int ans = 1;
//    for (int i = 0; i < n; i++) {
//        ans = max(ans, msibs[i] + msdbs[i] - 1);
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
//        cout << "length of lbs is : " << lbs(arr, n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//5
//1 2 5 3 2
//8
//1 11 2 10 4 5 2 1
//
//OUTPUT:
//length of lbs is : 5
//length of lbs is : 6
//*/