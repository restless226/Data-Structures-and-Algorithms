///*
//PROBLEM STATEMENT:
//Given an array nums[] of N positive integers.
//Find the minimum number of operations required to modify the array such that
//array elements are in strictly increasing order (A[i] < A[i+1]).
//Changing a number to greater or lesser than original number is counted as one operation.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long int
//using namespace std;
//const int mod = 1000000007;
//
//int lis(vector<int> &nums, int n) {
//    int dp[n];
//    dp[0] = 1;
//    for (int i = 1; i < n; i++) {
//        dp[i] = 1;
//        for (int j = 0; j < i; j++) {
//            if (nums[i] > nums[j] && dp[i] < 1 + dp[j]
//                && (i - j) <= nums[i] - nums[j]) {  // [NOTE]: minor change
//                dp[i] = 1 + dp[j];
//            }
//        }
//    }
//    int ans = 1;
//    for (int i = 0; i < n; i++) ans = max(ans, dp[i]);
//    return ans;
//}
//
//int solve(vector<int> &nums) {
//    int n = nums.size();
//    return n - lis(nums, n);
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
//        vector<int> nums(n);
//        for (int i = 0; i < n; i++) cin >> nums[i];
//        cout << solve(nums) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//5
//6
//1 2 3 6 5 4
//4
//1 2 3 4
//5
//1 2 7 5 4
//5
//1 2 5 3 4
//19
//24 18 18 13 11 14 26 18 1 10 7 4 21 24 12 8 29 4 7
//
//OUTPUT:
//2
//0
//2
//2
//14
//*/