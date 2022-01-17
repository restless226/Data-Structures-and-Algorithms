/*
PROBLEM STATEMENT:
Given a matrix mat of size N x M where every element is either ‘O’ or ‘X’.
Replace all ‘O’ with ‘X’ that are surrounded by ‘X’.
A ‘O’ (or a set of ‘O’) is considered to be by surrounded by ‘X’
if there are ‘X’ at locations just below, just above, just left and just right of it.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

bool isValid(int i, int j, int n, int m, vector<vector<char>> &grid) {
    return (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 'X' || grid[i][j] == '#') ? false : true;
}

bool isBorder(int i, int j, int n, int m) {
    return (i == 0 || j == 0 || i == n - 1 || j == m - 1) ? true : false;
}

void bfs(vector<vector<char>> &grid, int n, int m) {
    queue<pair<int, int>> queue;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'O' && isBorder(i, j, n, m)) {
                grid[i][j] = '#';
                queue.push(make_pair(i, j));
            }
        }
    }
    while (!queue.empty()) {
        int x = queue.front().first;
        int y = queue.front().second;
        queue.pop();
        for (int k = 0; k < 4; k++) {
            if (isValid(x + dx[k], y + dy[k], n, m, grid) && grid[x + dx[k]][y + dy[k]] == 'O') {
                grid[x + dx[k]][y + dy[k]] = '#';
                queue.push({x + dx[k], y + dy[k]});
            }
        }
    }
}

void solve(int n, int m, vector<vector<char>> &grid) {
    if (n == 1 || m == 1) return;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    bfs(grid, n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'O') grid[i][j] = 'X';
            if (grid[i][j] == '#')grid[i][j] = 'O';
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
        vector<vector<char>> grid(n, vector<char>(m, '.'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];
        solve(n, m, grid);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j] << " ";
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
4 5
X X X X X
O X X X O
O X X O X
X X X O O
4 7
O O O O X X O
O X O X O O X
X X X X O X O
O X X X O O O

OUTPUT:
X X X X X
O X X X O
O X X O X
X X X O O

O O O O X X O
O X O X O O X
X X X X O X O
O X X X O O O
*/