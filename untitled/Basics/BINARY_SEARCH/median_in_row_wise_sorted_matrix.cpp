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
//int upperBound(vector<int> &row, int target) {
//    int low = 0;
//    int high = row.size();
//    while (low < high) {
//        int mid = (low + high) / 2;
//        if (row[mid] <= target) {
//            low = mid + 1;
//        } else {
//            high = mid; // because we have to bring low and high close to each other
//        }
//    }
//    return low;
//}
//
////TODO
//int solve(vector<vector<int>> &matrix, int r, int c) {
//    int mn = matrix[0][0];
//    int mx = matrix[0][c - 1];
//    for (int i = 0; i < c; i++) {
//        mn = min(mn, matrix[i][0]);     // min value of median
//        mx = max(mx, matrix[i][c - 1]); // max value of median
//    }
//
//    int medianPos = (r * c + 1) / 2;
//    while (mn < mx) {
//        int mid = (mx + mn) / 2;
//        int count = 0;
//        for (int i = 0; i < r; i++) {    // find count of elements smaller or equal than mid in each row
//            count += upperBound(matrix[i], mid);
//        }
//        if (count < medianPos) {
//            mn = mid + 1;
//        } else {
//            mx = mid;   // because we have to bring mx and mn close to each other
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
//2
//3 3
//1 3 5
//2 6 9
//3 6 9
//3 1
//1
//2
//3
//OUTPUT:
//5
//*/