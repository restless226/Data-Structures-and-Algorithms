/*
PROBLEM STATEMENT:
Aterp is the head nurse at a city hospital. City hospital contains R*C number of wards
and the structure of a hospital is in the form of a 2-D matrix.
Given a matrix of dimension R*C where each cell in the matrix can have values 0, 1, or 2 which has the following meaning:
0: Empty ward
1: Cells have uninfected patients
2: Cells have infected patients

An infected patient at ward [i,j] can infect other uninfected patient at indexes
[i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time.
Help Aterp determine the minimum units of time after which there won't remain any uninfected patient
i.e all patients would be infected. If all patients are not infected after infinite units of time then simply return -1.

HINT: Apply multi-source BFS.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

bool check(int i, int j, int m, int n, vector<vector<int>> &grid) {
    return (i >= 0 && i < m && j >= 0 && j < n && grid[i][j] == 1) ? true : false;
}

int solve(vector<vector<int>> &grid) {
    int m = grid.size();
    int n = grid[0].size();
    queue<pair<int, int>> queue;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 2) {
                queue.push({i, j});
            }
        }
    }
    int timer = -1;
    while (!queue.empty()) {
        int size = queue.size();
        while (size--) {
            int x = queue.front().first;
            int y = queue.front().second;
            queue.pop();
            if (check(x + 1, y, m, n, grid)) {
                queue.push({x + 1, y});
                grid[x + 1][y] = 2;
            }
            if (check(x - 1, y, m, n, grid)) {
                queue.push({x - 1, y});
                grid[x - 1][y] = 2;
            }
            if (check(x, y + 1, m, n, grid)) {
                queue.push({x, y + 1});
                grid[x][y + 1] = 2;
            }
            if (check(x, y - 1, m, n, grid)) {
                queue.push({x, y - 1});
                grid[x][y - 1] = 2;
            }
        }
        timer++;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                return -1;
            }
        }
    }
    return timer;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int R;
        int C;
        cin >> R >> C;
        vector<vector<int>> grid;
        for (int i = 0; i < R; i++) {
            vector<int> temp;
            for (int j = 0; j < C; j++) {
                int k;
                cin >> k;
                temp.push_back(k);
            }
            grid.push_back(temp);
        }
        cout << solve(grid) << endl;
    }
    return 0;
}

/*
INPUT:
2
3 5
2 1 0 2 1
1 0 1 2 1
1 0 0 2 1
3 5
2 1 0 2 1
0 0 1 2 1
1 0 0 2 1

OUTPUT:
2
-1
*/