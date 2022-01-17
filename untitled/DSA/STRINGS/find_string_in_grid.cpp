/*
PROBLEM STATEMENT:
Given a 2D grid of n*m of characters and a word,
find all occurrences of given word in grid.
A word can be matched in all 8 directions at any point.
Word is said be found in a direction if all characters
match in this direction (not in zig-zag form).
The 8 directions are horizontally left, horizontally right,
vertically up, vertically down and 4 diagonal directions.
Note: The returning list should be lexicographically smallest.
      If the word can be found in multiple directions starting from the same coordinates,
      the list should contain the coordinates only once.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool search(vector<vector<char>> &grid, string &word, int i, int j, int n, int m) {
    if (grid[i][j] != word[0]) return false;
    for (int dir = 0; dir < 8; dir++) {
        int x = i + dx[dir], y = j + dy[dir];
        int index;
        for (index = 1; index < word.size(); index++) {
            if (x < 0 || y < 0 || x >= n || y >= m || grid[x][y] != word[index]) break;
            x += dx[dir];
            y += dy[dir];
        }
        if (index == word.size()) return true;
    }
    return false;
}

vector<vector<int>> solve(vector<vector<char>> &grid, string &word) {
    vector<vector<int>> ans;
    int n = grid.size();
    int m = grid[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (search(grid, word, i, j, n, m)) ans.push_back({i, j});
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
        vector<vector<char>> grid(n, vector<char>(m, 'x'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        string word;
        cin >> word;
        vector<vector<int>> ans = solve(grid, word);
        for (auto &i: ans) {
            for (auto &j: i)
                cout << j << " ";
            cout << "\n";
        }
        if (ans.empty()) cout << "-1\n";
        cout << '\n';
    }
    return 0;
}

/*
INPUT:
9
3 3
a b c
d e f
g h i
abc
3 4
a b a b
a b e b
e b e b
abe
9 2
a c
c e
d a
c d
e e
a a
b b
d a
b c
dcb
6 10
a b a e b e e e c c
a b e c b d e c a d
e c c c c a d a c b
e e a d d d c b b b
b d b a c a b b d d
c c c d a e a c e b
bed
5
7 9
b b d d e d b d d
b c b c e c a d c
a e b e d b e e d
d c d e c b b b e
b c a e c c d a a
a a c b a c a c a
a c b d b d b e c
dcb
9 4
c e e a
c b e d
d d c e
a d e d
a b a e
b e e b
c d a d
d e e c
e d a e
eab
8 7
d b a e e b e
c c d c a a c
a b c c b a b
b d b c d a c
e b c e c d d
d e d d b e c
c a e e d c e
d c d d b c e
dec
7 8
c d a c c c e b
e e a d b d c b
c a a c b c a c
d d a d e a d a
a d b b b b d a
d b a c a d b a
e d e b e b a a
dcd
6 6
b d d c a d
d b d a b a
e a d b c e
c c d b b d
b e b c a e
d c b d b c
bbd

OUTPUT:
0 0

0 0
0 2
1 0

-1

-1

0 1
0 2
1 0
1 3
1 5
3 0
3 3
4 5
4 6

4 3
7 1

4 5
5 3

1 3
3 3

0 0
1 4
2 3
3 3
3 4
5 2
*/