///*
//PROBLEM STATEMENT:
//Given a matrix mat[][] of size N x M,
//where every row and column is sorted in increasing order, and a number X is given.
//The task is to find whether element X is present in the matrix or not.
//Return 1 if the element X is present in the matrix and 0 otherwise.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(vector<vector<int>> &arr, int n, int m, int k) {
//    int i = 0;
//    int j = m - 1;
//    while (i >= 0 && i < n && j >= 0 && j < m) {
//        if (arr[i][j] == k) {
//            return 1;
//        } else if (arr[i][j] > k) {
//            j--;
//        } else {
//            i++;
//        }
//    }
//    return 0;
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
//        int m;
//        cin >> n >> m;
//        vector<vector<int>> arr(n, vector<int>(m));
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cin >> arr[i][j];
//            }
//        }
//        int k;
//        cin >> k;
//        cout << solve(arr, n, m, k) << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//3 3
//3 30 38
//44 52 54
//57 60 69
//62
//4 4
//10 20 30 40
//15 25 35 45
//27 29 37 48
//32 33 39 50
//29
//
//OUTPUT:
//0
//1
//*/