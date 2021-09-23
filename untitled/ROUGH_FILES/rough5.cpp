//// { Driver Code Starts
//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//// } Driver Code Ends
////User function template for C++
//class Solution {
//public:
//    // calculate the maximum sum with out adjacent
//    int findMaxSum(int *arr, int n) {
//        // code here
//        if (n == 1) {
//            return arr[0];
//        } else if (n == 2) {
//            return max(arr[0], arr[1]);
//        }
//        int val1 = arr[0];
//        int val2 = max(arr[0], arr[1]);
//        int mx_val;
//        for (int i = 1; i < n; i++) {
//            mx_val = max(val1 + arr[i], val2);
//            val1 = val2;
//            val2 = mx_val;
//        }
//        return mx_val;
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
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        Solution ob;
//        auto ans = ob.findMaxSum(arr, n);
//        cout << ans << "\n";
//    }
//    return 0;
//}  // } Driver Code Ends