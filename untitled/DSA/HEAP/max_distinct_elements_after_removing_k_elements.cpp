///*
//PROBLEM STATEMENT:
//Given an array containing N elements.
//The task is to find the maximum number of distinct elements
//after removing K elements from the array.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(int arr[], int n, int k) {
//    if (k == n) return 0;
//    unordered_map<int, int> mp;
//    priority_queue<int> mxh;
//    for (int i = 0; i < n; i++) {
//        mp[arr[i]]++;
//    }
//    for (auto &itr:mp) {
//        mxh.push(itr.second);
//    }
//    while (k--) {
//        int top = mxh.top();
//        mxh.pop();
//        top--;
//        if (top != 0) {
//            mxh.push(top);
//        }
//    }
//    return mxh.size();
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n, i, k;
//        cin >> n >> k;
//        int arr[n];
//        for (i = 0; i < n; i++) cin >> arr[i];
//        cout << solve(arr, n, k) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//5 3
//1 2 3 2 3
//7 5
//1 2 3 4 5 6 7
//7 3
//5 7 5 5 1 2 2
//
//OUTPUT:
//2
//2
//4
//*/