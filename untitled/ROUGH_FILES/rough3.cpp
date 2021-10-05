//#include <bits/stdc++.h>
//
//using namespace std;
//
//int portfolio_profit_maximisation(int maxSum, vector<int> v1, vector<int> v2) {
//    //write your code here
//    int n = v1.size();
//    int m = v2.size();
//    vector<int> a;
//    vector<int> b;
//    for (int i = 1; i <= n; i++) a[i] = v1[i - 1];
//    for (int i = 1; i <= m; i++) b[i] = v2[i - 1];
//
//    for (int i = 0; i <= n; i++) a[i] += a[i - 1];
//    for (int i = 0; i <= m; i++) b[i] += b[i - 1];
//
//    int res = 0;
//    for (int i = 0, j = m; i <= n && a[i] <= maxSum; i++) {
//        while (a[i] + b[j] > maxSum && j >= 1)
//            j--;
//        res = max(res, i + j);
//    }
//}
//
//
//int main() {
//    ios::sync_with_stdio(false);
//
//    int n, m, x;
//    cin >> n >> m >> x;
//
//    vector<int> a(n);
//    vector<int> b(m);
//
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//
//    for (int i = 0; i < m; ++i) {
//        cin >> b[i];
//    }
//    int result = portfolio_profit_maximisation(x, a, b);
//    cout << result;
//    return 0;
//}
///*
//2
//5 4 10
//4 2 4 6 1
//2 1 8 5
//3 7 3696
//12 21 102
//167 244 377 56 235 269 23
// */