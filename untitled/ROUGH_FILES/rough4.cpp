//// { Driver Code Starts
////Initial template for C++
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//// } Driver Code Ends
////User function template for C++
//
//class Solution {
//    int upperBound(vector<int> &row, int target) {
//        int low = 0;
//        int high = row.size();
//        while (low < high) {
//            int mid = (low + high) / 2;
//            if (row[mid] <= target) {
//                low = mid + 1;
//            } else {
//                high = mid; // because we have to bring low and high close to each other
//            }
//        }
//        return low;
//    }
//
//public:
//    int median(vector<vector<int>> &matrix, int r, int c) {
//        // code here
//        int mn = matrix[0][0];
//        int mx = matrix[0][c - 1];
//        for (int i = 0; i < c; i++) {
//            mn = min(mn, matrix[i][0]);     // min value of median
//            mx = max(mx, matrix[i][c - 1]); // max value of median
//        }
//
//        int medianPos = (r * c + 1) / 2;
//        while (mn < mx) {
//            int mid = (mx + mn) / 2;
//            int count = 0;
//            for (int i = 0; i < r; i++) {    // find count of elements smaller or equal than mid in each row
//                count += upperBound(matrix[i], mid);
//            }
//            if (count < medianPos) {
//                mn = mid + 1;
//            } else {
//                mx = mid;   // because we have to bring mx and mn close to each other
//            }
//        }
//        return mn;
//    }
//};
//
//// { Driver Code Starts.
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int r, c;
//        cin >> r >> c;
//        vector<vector<int>> matrix(r, vector<int>(c));
//        for (int i = 0; i < r; ++i)
//            for (int j = 0; j < c; ++j)
//                cin >> matrix[i][j];
//        Solution obj;
//        cout << obj.median(matrix, r, c) << endl;
//    }
//    return 0;
//}  // } Driver Code Ends