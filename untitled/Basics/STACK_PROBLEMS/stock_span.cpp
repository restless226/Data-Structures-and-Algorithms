///*
//PROBLEM STATEMENT:
//The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate span of stock’s price for all n days.
//The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day,
//for which the price of the stock on the current day is less than or equal to its price on the given day.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//vector<int> solve(int arr[], int n) {
//    // this problem is similar to "nearest greater to left" (NGL) problem
//    vector<int> v;
//    stack<pair<int, int>> s;
//
//    // compare -> s.top().first -> Next Greater Element (NGL)
//    // v.push_back() -> s.top().second -> index of arr[i]
//
//    for (int i = 0; i < n; i++) {
//        if (s.empty()) {
//            v.push_back(-1);
//        } else if (!s.empty() && s.top().first > arr[i]) {
//            v.push_back(s.top().second);
//        } else if (!s.empty() && s.top().first <= arr[i]) {
//            while (!s.empty() && s.top().first <= arr[i]) {
//                s.pop();
//            }
//
//            if (s.empty()) {
//                v.push_back(-1);
//            } else {
//                v.push_back(s.top().second);
//            }
//        }
//        s.push({arr[i], i});
//    }
//
//    for (int i = 0; i < n; i++) {
//        v[i] = i - v[i];
//    }
//
//    return v;
//}
//
//int32_t main() {
//    cin.tie(NULL);
//    cout.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n;
//        cin >> n;
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//
//        vector<int> ans = solve(arr, n);
//
//        for (auto itr: ans) {
//            cout << itr << " ";
//        }
//        cout << '\n';
//
//    }
//
//    return 0;
//}
//
///*
//OUTPUT:
//1
//7
//100 80 60 70 60 75 85
//
//1 1 1 2 1 4 6
//
//*/