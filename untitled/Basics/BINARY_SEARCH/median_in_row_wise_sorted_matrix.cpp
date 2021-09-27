///*
//PROBLEM STATEMENT:
//Given a row wise sorted matrix of size RxC
//where R and C are always odd, find the median of the matrix.
//*/
//
///*
//The idea is that for a number to be median there should be
//exactly (n/2) numbers which are less than this number.
//So, we try to find the count of numbers less than all the numbers.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
////TODO
//int solve(vector<vector<int>> &matrix, int r, int c) {
//    int mat[r][c];
//    for (int i = 0; i < r; ++i) {
//        for (int j = 0; j < c; ++j) {
//            mat[i][j] = matrix[i][j];
//        }
//    }
//
//    int mn = INT_MAX;
//    int mx = INT_MIN;
//    for (int i = 0; i < c; i++) {
//        mn = min(mn, mat[i][0]);     // min value of median
//        mx = max(mx, mat[i][c - 1]); // max value of median
//    }
//
//    int desired = (r * c + 1) / 2;
//    while (mn < mx) {
//        int mid = mn + (mx - mn) / 2;
//        int count = 0;
//        // find count of elements smaller than mid
//        for (int i = 0; i < r; i++) {
//            count += upper_bound(mat[i], mat[i] + c, mid) - mat[i];
//        }
//        if (count < desired) {
//            mn = mid + 1;
//        } else {
//            mx = mid;
//        }
//    }
//    return mn;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int r, c;
//        cin >> r >> c;
//        vector<vector<int>> matrix(r, vector<int>(c));
//        for (int i = 0; i < r; ++i) {
//            for (int j = 0; j < c; ++j) {
//                cin >> matrix[i][j];
//            }
//        }
//        cout << solve(matrix, r, c) << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//3 3
//1 3 5
//2 6 9
//3 6 9
//
//OUTPUT:
//5
//*/