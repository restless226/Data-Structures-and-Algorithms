//// { Driver Code Starts
//// Initial Template for C++
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//// } Driver Code Ends
//// User function Template for C++
//
//class Solution {
//public:
//    int cutRod(int price[], int n) {
//        //code here
//        int dp[n + 1][n + 1];    // dp matrix for MEMOIZATION
//
//        // INITIALIZATION (it corresponds to base condition in RECURSIVE SOLUTION)
//        // initializing first row and first column with all zeroes
//
//        for (int i = 0; i < n + 1; ++i) {
//            for (int j = 0; j < n + 1; ++j) {
//                if (i == 0 || j == 0) {
//                    if (i == 0) {
//                        dp[i][j] = INT_MIN;
//                    } else {
//                        dp[i][j] = 0;
//                    }
//                } else if (price[i - 1] <= j) {
//                    // minor change: dp[i-1] (int 0-1 knapsack) -> dp[i] (unbounded knapsack)
//                    dp[i][j] = max(1 + dp[i][j - price[i - 1]], dp[i - 1][j]);
//                } else if (price[i - 1] > j) {
//                    dp[i][j] = dp[i - 1][j];
//                }
//            }
//        }
//        return dp[n][n] < 0 ? 0 : dp[n][n];
//    }
//};
//
//// { Driver Code Starts.
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        int a[n];
//        for (int i = 0; i < n; i++)
//            cin >> a[i];
//
//        Solution ob;
//
//        cout << ob.cutRod(a, n) << endl;
//    }
//    return 0;
//}  // } Driver Code Ends