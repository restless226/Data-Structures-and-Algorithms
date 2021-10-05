///*
//PROBLEM STATEMENT:
//The cost of stock on each day is given in an array A[] of size N.
//Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.
//NOTE: There may be multiple possible solutions. Return any one of them.
//Any correct solution will result in an output of 1,
//whereas wrong solutions will result in an output of 0.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//vector<vector<int>> solve(vector<int> &stock, int n) {
//    vector<vector<int>> ans;
//    for (int i = 1; i < n; i++) {
//        if (stock[i] > stock[i - 1]) {
//            ans.push_back({i - 1, i});
//        }
//    }
//    return ans;
//}
//
//int check(vector<vector<int>> ans, vector<int> stock, int p) {
//    int c = 0;
//    for (int i = 0; i < ans.size(); i++)
//        c += stock[ans[i][1]] - stock[ans[i][0]];
//    return (c == p) ? 1 : 0;
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
//        vector<int> stock(n);
//        for (int i = 0; i < n; ++i) {
//            cin >> stock[i];
//        }
//        vector<vector<int> > ans = solve(stock, n);
//        int p = 0;
//        for (int i = 0; i < n - 1; i++) {
//            int x = stock[i + 1] - stock[i];
//            if (x > 0)
//                p += x;
//        }
//        if (ans.size() == 0)
//            cout << "No Profit";
//        else {
//            cout << check(ans, stock, p);
//        }
//        cout << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//7
//100 180 260 310 40 535 695
//5
//4 2 2 2 4
//
//OUTPUT:
//1
//1
//*/