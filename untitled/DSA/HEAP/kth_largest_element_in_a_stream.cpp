///*
//PROBLEM STATEMENT:
//Given an input stream arr[] of n integers.
//Find the Kth largest element for each element in the stream
//and if the Kth element doesn't exist, return -1.
//
//What problem Actually mean?
//If you are at ith index then you need to find the
//kth largest element among numbers from index 0 to index i.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//vector<int> solve(int k, int arr[], int n) {
//    priority_queue<int, vector<int>, greater<int>> mnh;
//    vector<int> ans;
//    for (int i = 0; i < n; i++) {
//        if (mnh.size() < k) {
//            mnh.push(arr[i]);
//        } else if (mnh.size() == k && mnh.top() < arr[i]) {
//            mnh.pop();
//            mnh.push(arr[i]);
//        }
//        ans.push_back(mnh.size() < k ? -1 : mnh.top());
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
//        int k, n;
//        cin >> k >> n;
//        int arr[n];
//        for (int i = 0; i < n; i++)
//            cin >> arr[i];
//        vector<int> v = solve(k, arr, n);
//        for (int i : v)
//            cout << i << " ";
//        cout << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//4 6
//1 2 3 4 5 6
//1 2
//3 4
//
//OUTPUT:
//1 -1 -1 1 2 3
//3 4
//*/