///*
//PROBLEM STATEMENT:
//Given a matrix mat of size N x M where every element is either ‘O’ or ‘X’.
//Replace all ‘O’ with ‘X’ that are surrounded by ‘X’.
//A ‘O’ (or a set of ‘O’) is considered to be by surrounded by ‘X’
//if there are ‘X’ at locations just below, just above, just left and just right of it.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//void dfs(vector<vector<char>> &grid, vector<vector<bool>> &visited, int n, int m, int i, int j, bool &flag) {
//    if (i < 0 || i >= n || j < 0 || j >= m) return;
//    if (grid[i][j] == 'X' || visited[i][j]) return;
//    if (i <= 0 || i >= n - 1 || j <= 0 || j == m - 1) flag = true;
//    visited[i][j] = true;
//    dfs(grid, visited, n, m, i + 1, j, flag);
//    dfs(grid, visited, n, m, i - 1, j, flag);
//    dfs(grid, visited, n, m, i, j + 1, flag);
//    dfs(grid, visited, n, m, i, j - 1, flag);
//}
//
//void mark_dfs(vector<vector<char>> &grid, int n, int m, int i, int j) {
//    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 'X') return;
//    grid[i][j] = 'X';
//    mark_dfs(grid, n, m, i + 1, j);
//    mark_dfs(grid, n, m, i - 1, j);
//    mark_dfs(grid, n, m, i, j + 1);
//    mark_dfs(grid, n, m, i, j - 1);
//}
//
//void solve(int n, int m, vector<vector<char>> &grid) {
//    if (n == 1 || m == 1) return;
//    vector<vector<bool>> visited(n, vector<bool>(m, false));
//    bool flag;  // it depicts whether grid[i][j]=='O' is connected to a boundary 'O' or not
//    for (int i = 1; i < n - 1; i++) {
//        for (int j = 1; j < m - 1; j++) {
//            if (grid[i][j] == 'O' && !visited[i][j]) {
//                flag = false;
//                dfs(grid, visited, n, m, i, j, flag);
//                if (!flag) mark_dfs(grid, n, m, i, j);
//            }
//        }
//    }
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n, m;
//        cin >> n >> m;
//        vector<vector<char>> grid(n, vector<char>(m, '.'));
//        for (int i = 0; i < n; i++)
//            for (int j = 0; j < m; j++)
//                cin >> grid[i][j];
//        solve(n, m, grid);
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cout << grid[i][j] << " ";
//            }
//            cout << "\n";
//        }
//        cout << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//4 5
//X X X X X
//O X X X O
//O X X O X
//X X X O O
//4 7
//O O O O X X O
//O X O X O O X
//X X X X O X O
//O X X X O O O
//
//OUTPUT:
//X X X X X
//O X X X O
//O X X O X
//X X X O O
//
//O O O O X X O
//O X O X O O X
//X X X X O X O
//O X X X O O O
//*/