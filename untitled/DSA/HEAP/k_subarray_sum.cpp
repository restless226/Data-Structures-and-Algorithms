///*
//PROBLEM STATEMENT:
//Given an integer array arr of size N and two integers K and M,
//the task is to find M largest sums of K sized subarrays.
//
//Input:
//1. The first line of the input contains a single integer T
//   denoting the number of test cases. The description of T test cases follows.
//2. The first line of each test case contains three integers N, K, and M.
//3. The next line contains N space-separated integers.
//*/
//
//#include <bits/stdc++.h>
//#define int long long int
//using namespace std;
//
//void solve(int a[], int n, int k, int m) {
//    int sum = 0;
//    for (int i = 0; i < k; i++) sum += a[i];
//    priority_queue<int, vector<int>, greater<int>> pq;
//    int i = 0, j = k - 1;
//    while (j < n) {
//        pq.push(sum);
//        if (pq.size() > m) pq.pop();
//        sum -= a[i];
//        if (j + 1 < n) sum += a[j + 1];
//        i++;
//        j++;
//    }
//    stack<int> stack;
//    while (!pq.empty()) {
//        stack.push(pq.top());
//        pq.pop();
//    }
//    while (!stack.empty()) {
//        cout << stack.top() << " ";
//        stack.pop();
//    }
//    cout << '\n';
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n, k, m;
//        cin >> n >> k >> m;
//        int a[n];
//        for (int i = 0; i < n; i++) cin >> a[i];
//        solve(a, n, k, m);
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//5 2 3
//10 11 10 11 12
//5 5 1
//1 2 3 4 5
//
//OUTPUT:
//23 21 21
//15
//*/