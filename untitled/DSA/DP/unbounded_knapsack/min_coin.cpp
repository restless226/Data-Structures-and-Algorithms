/*
PROBLEM STATEMENT:
Given a list of coins of distinct denominations and total amount of money.
Find the minimum number of coins required to make up that amount.
Output -1 if that money cannot be made up using given coins.
You may assume that there are infinite numbers of coins of each type.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int solve(vector<int> &nums, int amount) {
    int n = nums.size();
    int dp[n + 1][amount + 1];
    for (int j = 0; j <= amount; j++)
        dp[0][j] = INT_MAX - 1;
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= amount; j++) {
            if (nums[i - 1] <= j)
                dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - nums[i - 1]]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][amount] == INT_MAX - 1 ? -1 : dp[n][amount];
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, amount;
        cin >> n >> amount;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << solve(nums, amount) << '\n';
    }
    return 0;
}

/*
INPUT:
2
3 11
1 2 5
2 7
2 6
4 30
11 6 13 10

OUTPUT:
3
-1
*/