// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends


class Solution {
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    bool dfs(vector<vector<int>> &grid, int i, int j, int n) {
        if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] == 0) return false;
        if (grid[i][j] == 2) return true;
        grid[i][j] = 0;
        bool flag = false;
        for (int k = 0; k < 4; k++) {
            flag = flag || dfs(grid, i + dx[k], j + dy[k], n);
        }
        return flag;
    }

public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>> &grid) {
        //code here
        int n = grid.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    return dfs(grid, n, i, j);
                }
            }
        }
        return false;
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
        bool ans = obj.is_Possible(grid);
        cout << ((ans) ? "1\n" : "0\n");
    }
    return 0;
}  // } Driver Code Ends