// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends


class Solution {

    int dp[501][501];
public:
    Solution() {
        memset(dp, -1, sizeof(dp));
    }

    int min_cost_path_MEMOIZED(vector<vector<int>> &grid, int n, int i, int j) {
        // base case
        if (i == n - 1 && j == n - 1) {
            return grid[i][j];
        }

        if (i >= n || j >= n || i < 0 || j < 0) {
            return INT_MAX;
        }

        // memoized block check
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        int down_cost;
        int left_diagonal_cost;
        int right_diagonal_cost;

        if (dp[i + 1][j] != -1) {
            down_cost = dp[i + 1][j];
        } else {
            down_cost = min_cost_path_MEMOIZED(grid, n, i + 1, j);
            dp[i + 1][j] = down_cost;
        }

        if (dp[i + 1][j - 1] != -1) {
            left_diagonal_cost = dp[i + 1][j - 1];
        } else {
            left_diagonal_cost = min_cost_path_MEMOIZED(grid, n, i + 1, j - 1);
            dp[i + 1][j - 1] = left_diagonal_cost;
        }

        if (dp[i + 1][j + 1] != -1) {
            right_diagonal_cost = dp[i + 1][j + 1];
        } else {
            right_diagonal_cost = min_cost_path_MEMOIZED(grid, n, i + 1, j + 1);
            dp[i + 1][j + 1] = right_diagonal_cost;
        }

//    down_cost = min_cost_path_MEMOIZED(grid, m, n, i + 1, j);
//    right_cost = min_cost_path_MEMOIZED(grid, m, n, i, j + 1);
//    diagonal_cost = min_cost_path_MEMOIZED(grid, m, n, i + 1, j + 1);

        // small calculation
        int cost = grid[i][j] + min(down_cost, min(left_diagonal_cost, right_diagonal_cost));

        dp[i][j] = cost;
        return cost;
    }


    //Function to return the minimum cost to react at bottom
    //right cell from top left cell.
    int minimumCostPath(vector<vector<int>> &grid) {
        // Code here
        int n = grid[0].size();

        for (int i = 0; i < n; i++) {
            return min_cost_path_MEMOIZED(grid, i, 0, 0);
        }
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.minimumCostPath(grid);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends