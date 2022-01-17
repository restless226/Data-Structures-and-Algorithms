/*
PROBLEM STATEMENT:
Given a binary grid. Find the distance of nearest 1 in the grid for each cell.
The distance is calculated as |i1 – i2| + |j1 – j2|, where i1, j1 are the row number
and column number of the current cell and i2, j2 are
the row number and column number of the nearest cell having value 1.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void solve(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int, int>> queue;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                grid[i][j] = 0;
                queue.push({i, j});
            } else if (grid[i][j] == 0) {
                grid[i][j] = INT_MAX;
            }
        }
    }
    while (!queue.empty()) {
        int x = queue.front().first;
        int y = queue.front().second;
        queue.pop();
        if (x + 1 < n && grid[x][y] + 1 < grid[x + 1][y]) {
            queue.push({x + 1, y});
            grid[x + 1][y] = grid[x][y] + 1;
        }
        if (x - 1 >= 0 && grid[x][y] + 1 < grid[x - 1][y]) {
            queue.push({x - 1, y});
            grid[x - 1][y] = grid[x][y] + 1;
        }
        if (y + 1 < m && grid[x][y] + 1 < grid[x][y + 1]) {
            queue.push({x, y + 1});
            grid[x][y + 1] = grid[x][y] + 1;
        }
        if (y - 1 >= 0 && grid[x][y] + 1 < grid[x][y - 1]) {
            queue.push({x, y - 1});
            grid[x][y - 1] = grid[x][y] + 1;
        }
    }
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        solve(grid);
        for (const auto &i: grid) {
            for (const auto j: i) {
                cout << j << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}

/*
INPUT:
2
3 4
0 1 1 0
1 1 0 0
0 0 1 1
3 3
1 0 1
1 1 0
1 0 0

OUTPUT:
1 0 0
1 0 0 1
0 0 1 1
1 1 0 0

0 0 0
0 0 1
0 1 2
*/