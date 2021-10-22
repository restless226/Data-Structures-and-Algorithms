///*
//PROBLEM STATEMENT:
//Given two integer arrays Arr1 and Arr2 of size N.
//Use the greatest elements from the given arrays to create a new array of size N
//such that it consists of only unique elements and the sum of all its elements is maximum.
//The created elements should contain the elements of Arr2 followed by elements of Arr1 in order of their appearance.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//vector<int> solve(int arr1[], int arr2[], int n) {
//    vector<int> ans;
//    unordered_set<int> set;
//    priority_queue<int> mxh;
//    for (int i = 0; i < n; i++) {
//        mxh.push(arr1[i]);
//        mxh.push(arr2[i]);
//    }
//    while (!mxh.empty()) {
//        if (set.size() == n) break;
//        set.insert(mxh.top());
//        mxh.pop();
//    }
//    for (int i = 0; i < n; i++) {
//        if (ans.size() == n) break;
//        if (set.count(arr2[i]) > 0) {
//            ans.push_back(arr2[i]);
//            set.erase(arr2[i]);
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        if (ans.size() == n) break;
//        if (set.count(arr1[i]) > 0) {
//            ans.push_back(arr1[i]);
//            set.erase(arr1[i]);
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
//        int n, i;
//        cin >> n;
//        int arr1[n], arr2[n];
//        for (i = 0; i < n; i++) cin >> arr1[i];
//        for (i = 0; i < n; i++) cin >> arr2[i];
//        auto ans = solve(arr1, arr2, n);
//        for (auto x : ans) {
//            cout << x << " ";
//        }
//        cout << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//5
//7 4 8 0 1
//9 7 2 3 6
//4
//6 7 5 3
//5 6 2 9
//
//OUTPUT:
//9 7 6 4 8
//5 6 9 7
//*/