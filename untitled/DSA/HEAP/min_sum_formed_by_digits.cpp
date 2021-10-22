///*
//PROBLEM STATEMENT:
//Given an array of digits (values are from 0 to 9),
//find the minimum possible sum of two numbers formed from digits of the array.
//All digits of given array must be used to form the two numbers.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(int arr[], int n) {
//    if (n == 1) return arr[0];
//    priority_queue<int, vector<int>, greater<int>> mnh;
//    for (int i = 0; i < n; i++) {
//        mnh.push(arr[i]);
//    }
//    string s1, s2;
//    bool toggle = true;
//    while (!mnh.empty()) {
//        int top = mnh.top();
//        mnh.pop();
//        toggle ? s1 += to_string(top) : s2 += to_string(top);
//        toggle = !toggle;
//    }
//    stringstream ss1(s1);
//    stringstream ss2(s2);
//    int ans1, ans2;
//    ss1 >> ans1, ss2 >> ans2;
//    return ans1 + ans2;
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
//        int arr[n + 1];
//        for (int i = 0; i < n; i++) cin >> arr[i];
//        cout << solve(arr, n) << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//6
//6 8 4 5 2 3
//5
//5 3 0 7 4
//1
//5
//
//OUTPUT:
//604
//82
//5
//*/