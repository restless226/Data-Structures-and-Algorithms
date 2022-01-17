/*
PROBLEM STATEMENT:
Given a grid consisting of '0's(Water) and '1's(Land). Find the number of islands.
Note: An island is surrounded by water and is formed by connecting adjacent lands
horizontally or vertically or diagonally i.e., in all 8 directions.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

bool isValid(int x, int y, int n, int m) {
    return (x < 0 || x >= n || y < 0 || y >= m) ? false : true;
}

void bfs(vector<vector<char>> &grid, int n, int m, int i, int j) {
    queue<pair<int, int>> queue;
    grid[i][j] = '0';
    queue.push({i, j});
    while (!queue.empty()) {
        int x = queue.front().first;
        int y = queue.front().second;
        queue.pop();
        if (isValid(x + 1, y, n, m) && grid[x + 1][y] == '1') {
            grid[x + 1][y] = '0';
            queue.push({x + 1, y});
        }
        if (isValid(x - 1, y, n, m) && grid[x - 1][y] == '1') {
            grid[x - 1][y] = '0';
            queue.push({x - 1, y});
        }
        if (isValid(x, y + 1, n, m) && grid[x][y + 1] == '1') {
            grid[x][y + 1] = '0';
            queue.push({x, y + 1});
        }
        if (isValid(x, y - 1, n, m) && grid[x][y - 1] == '1') {
            grid[x][y - 1] = '0';
            queue.push({x, y - 1});
        }
        if (isValid(x - 1, y - 1, n, m) && grid[x - 1][y - 1] == '1') {
            grid[x - 1][y - 1] = '0';
            queue.push({x - 1, y - 1});
        }
        if (isValid(x - 1, y + 1, n, m) && grid[x - 1][y + 1] == '1') {
            grid[x - 1][y + 1] = '0';
            queue.push({x - 1, y + 1});
        }
        if (isValid(x + 1, y - 1, n, m) && grid[x + 1][y - 1] == '1') {
            grid[x + 1][y - 1] = '0';
            queue.push({x + 1, y - 1});
        }
        if (isValid(x + 1, y + 1, n, m) && grid[x + 1][y + 1] == '1') {
            grid[x + 1][y + 1] = '0';
            queue.push({x + 1, y + 1});
        }
    }
}

int solve(vector<vector<char>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '1') {
                bfs(grid, n, m, i, j);
                ans++;
            }
        }
    }
    return ans;
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
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        int ans = solve(grid);
        cout << ans << '\n';
    }
    return 0;
}

/*
INPUT:
3
4
2
0 1
1 0
1 1
1 0
2
7
0 1 1 1 0 0 0
0 0 1 1 0 1 0
4
4
1 1 1 0
0 1 0 0
0 0 0 1
1 0 1 1

OUTPUT:
1
2
3
*/