///*
//PROBLEM STATEMENT:
//Given a N x N matrix, where every row and column is sorted in non-decreasing order.
//Find the kth smallest element in the matrix.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int count(vector<vector<int>> &mat, int n, int mid) {
//    int i = n - 1;
//    int j = 0;
//    int c = 0;
//    while (i >= 0 && j < n) {
//        if (mat[i][j] > mid) {
//            i--;
//        } else {
//            c += (i + 1);
//            j++;
//        }
//    }
//    return c;
//}
//
//int solve(vector<vector<int>> &mat, int n, int k) {
//    if (k == 1) {
//        return mat[0][0];
//    }
//    int ans;
//    int low = mat[0][0], high = mat[n - 1][n - 1];
//    while (low <= high) {
//        int mid = low + (high - low) / 2;
//        int num = count(mat, n, mid);
//        if (num < k) {
//            low = mid + 1;
//        } else if (num >= k) {
//            ans = mid;
//
//            high = mid - 1;
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
//        int n;
//        cin >> n;
//        vector<vector<int>> mat(n, vector<int>(n));
//        for (int i = 0; i < n; i++)
//            for (int j = 0; j < n; j++)
//                cin >> mat[i][j];
//        int r;
//        cin >> r;
//        cout << solve(mat, n, r) << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//4
//16 28 60 64
//22 41 63 91
//27 50 87 93
//36 78 87 94
//3
//4
//10 20 30 40
//15 25 35 45
//24 29 37 48
//32 33 39 50
//7
//
//OUTPUT:
//27
//30
//*/