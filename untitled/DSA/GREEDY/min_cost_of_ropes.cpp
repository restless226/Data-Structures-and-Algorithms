///*
//PROBLEM STATEMENT:
//There are given N ropes of different lengths,
//we need to connect these ropes into one rope.
//The cost to connect two ropes is equal to sum of their lengths.
//The task is to connect the ropes with minimum cost.
//
//Time Complexity -> O(nlogn)
//Space Complexity -> O(n)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int arr[], int n) {
//    if (n == 1) {
//        return 0;
//    }
//    priority_queue<int, vector<int>, greater<int>> pq;
//    for (int i = 0; i < n; i++) {
//        pq.push(arr[i]);
//    }
//    int ans = 0;
//    while (pq.size() > 1) {
//        int x = pq.top();
//        pq.pop();
//        int y = pq.top();
//        pq.pop();
//        ans += (x + y);
//        pq.push(x + y);
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
//        cout << solve(arr, n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//4
//4 3 2 6
//5
//4 2 7 6 9
//
//OUTPUT:
//29
//62
//*/