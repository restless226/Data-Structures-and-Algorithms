///*
//PROBLEM STATEMENT:
//Geek lives in a special city where houses are arranged in a hierarchial manner.
//Starting from house number 1, each house leads to two more houses.
//1 leads to 2 and 3.
//2 leads to 4 and 5.
//3 leads to 6 and 7. and so on.
//Given the house numbers on two houses x and y,
//find the length of the shortest path between them.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(int x, int y) {
//    int count = 0;
//    while (x != y) {
//        if (x > y) x = x / 2;
//        else y = y / 2;
//        count++;
//    }
//    return count;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int x, y;
//        cin >> x >> y;
//        cout << solve(x, y) << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//2 6
//
//OUTPUT:
//3
//*/