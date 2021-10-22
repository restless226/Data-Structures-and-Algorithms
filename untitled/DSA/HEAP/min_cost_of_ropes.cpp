///*
//PROBLEM STATEMENT:
//There are given N ropes of different lengths, we need to connect these ropes into one rope.
//The cost to connect two ropes is equal to sum of their lengths.
//The task is to connect the ropes with minimum cost.
//*/
//
//#include <bits/stdc++.h>
//
//using namespace std;
//const int mod = 1000000007;
//
//long long solve(long long arr[], long long n) {
//    if (n == 1) {
//        return 0;
//    }
//    priority_queue<long long, vector<long long>, greater<long long>> mnh;
//    for (long long i = 0; i < n; i++) {
//        mnh.push(arr[i]);
//    }
//    long long ans = 0;
//    while (mnh.size() > 1) {
//        long long x = mnh.top();
//        mnh.pop();
//        long long y = mnh.top();
//        mnh.pop();
//        ans += (x + y);
//        mnh.push(x + y);
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
//        long long n;
//        cin >> n;
//        long long arr[n];
//        for (long long i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        cout << solve(arr, n) << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//4
//4 3 2 6
//
//OUTPUT:
//29
//*/