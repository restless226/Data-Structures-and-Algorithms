/*
PROBLEM STATEMENT:
Given the N*M binary matrix, 1 represents the healthy person,
and 0 represents a patient affected by a coronavirus.
The task is to check the minimum time required for all persons to get affected.
A patient at [i, j] cell affects a person at cell
[i, j-1], [i, j+1] [i+1, j] and [i-1, j] in one second.
Note: There will be at least one patient
*/
#include <bits/stdc++.h>

#define int long long
using namespace std;

bool check(int i, int j, int M, int N) {
    return (i < 0 || i >= M || j < 0 || j >= N) ? false : true;
}

int solve(vector<vector<int>> &grid, int M, int N) {
    queue<pair<int, int>> queue;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == 0) {
                queue.push({i, j});
            }
        }
    }
    int timer = -1;
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    while (!queue.empty()) {
        int size = queue.size();
        while (size--) {
            int x = queue.front().first;
            int y = queue.front().second;
            queue.pop();
            for (int k = 0; k < 4; k++) {
                int i = x + dx[k];
                int j = y + dy[k];
                if (check(i, j, M, N) && grid[i][j] == 1) {
                    queue.push({i, j});
                    grid[i][j] = 0;
                }
            }
        }
        timer++;
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
        int M, N;
        cin >> M >> N;
        vector<vector<int>> grid(M, vector<int>(N));
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                cin >> grid[i][j];
            }
        }
        cout << solve(grid, M, N) << '\n';
    }
    return 0;
}

/*
INPUT:
2
2 2
1 0
1 0
3 3
1 1 1
1 0 1
1 1 1

OUTPUT:
1
2
*/