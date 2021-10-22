///*
//PROBLEM STATEMENT:
//Given a sorted array, arr[] of N integers, and a value X.
//Find the K closest elements to X in arr[].
//Keep the following points in mind:
//
//1. If X is present in the array, then it need not be considered.
//2. If there are two elements with the same difference with X, the greater element is given priority.
//3. If sufficient elements are not present on the right side then take elements from left and vice versa.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//typedef pair<int, int> pii;
//
//vector<int> solve(vector<int> &arr, int n, int k, int x) {
//    int lindex = -1, rindex = n;
//    vector<int> ans;
//    int low = 0, high = n - 1;
//    while (low <= high) {
//        int mid = low + (high - low) / 2;
//        if(arr[mid]==x){
//            lindex=max()
//        }
//    }
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n, k, x;
//        cin >> n;
//        vector<int> arr(n);
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        cin >> k >> x;
//        vector<int> ans = solve(arr, n, k, x);
//        for (auto e : ans) {
//            cout << e << " ";
//        }
//        cout << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//13
//12 16 22 30 35 39 42 45 48 50 53 55 56
//4 35
//5
//1 2 3 6 10
//3 4
//5
//5 6 7 8 9
//3 7
//
//OUTPUT:
//
//*/