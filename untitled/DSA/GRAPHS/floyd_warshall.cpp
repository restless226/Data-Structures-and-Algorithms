///*
//PROBLEM STATEMENT:
//The problem is to find shortest distances between
//every pair of vertices in a given edge weighted directed Graph.
//The Graph is represented as adjancency matrix,
//and the matrix denotes the weight of the edegs (if it exists) else -1. Do it in-place.
//
//Expected Time Complexity: O(n3)
//Expected Space Compelxity: O(1)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//void solve(vector<vector<int>> &matrix) {
//    int n = matrix.size();
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (matrix[i][j] == -1) matrix[i][j] = INT_MAX;
//        }
//    }
//    for (int k = 0; k < n; k++) {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                if (matrix[i][k] == INT_MAX || matrix[k][j] == INT_MAX) {
//                    continue;
//                } else if (matrix[i][k] + matrix[k][j] < matrix[i][j]) {
//                    matrix[i][j] = matrix[i][k] + matrix[k][j];
//                }
//            }
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (matrix[i][j] == INT_MAX) matrix[i][j] = -1;
//        }
//    }
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
//        vector<vector<int>> matrix(n, vector<int>(n, -1));
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                cin >> matrix[i][j];
//            }
//        }
//        solve(matrix);
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                cout << matrix[i][j] << " ";
//            }
//            cout << "\n";
//        }
//        cout << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//2
//0 25
//-1 0
//3
//0 1 43
//1 0 6
//-1 -1 0
//
//OUTPUT:
//0 25
//-1 0
//
//0 1 7
//1 0 6
//-1 -1 0
//*/