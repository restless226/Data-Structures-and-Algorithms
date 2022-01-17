/*
PROBLEM STATEMENT:
Given a 2D board of letters and a word. Check if the word exists in the board.
The word can be constructed from letters of adjacent cells only.
i.e. - horizontal or vertical neighbors. The same letter cell can not be used more than once.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

bool dfs(vector<vector<char>> &board, string &word, int index, int x, int y,
         int n, int m, vector<vector<bool>> &visited) {
    if (index == word.length()) return true;
    if (x < 0 || x >= n || y < 0 || y >= m || visited[x][y] || board[x][y] != word[index]) return false;
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        if (dfs(board, word, index + 1, x + dx[i], y + dy[i], n, m, visited)) return true;
    }
    visited[x][y] = false;
    return false;
}

bool solve(vector<vector<char>> &board, string &word) {
    int n = board.size();
    int m = board[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == word[0] && dfs(board, word, 0, i, j, n, m, visited)) return true;
        }
    }
    return false;
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
        vector<vector<char>> board(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> board[i][j];
        string word;
        cin >> word;
        solve(board, word) ? cout << "1\n" : cout << "0\n";
    }
    return 0;
}

/*
INPUT:
2
3 4
a g b c
q e e l
g b k s
geeks
3 4
a b c e
s f c s
a d e e
sabfs

OUTPUT:
1
0
*/