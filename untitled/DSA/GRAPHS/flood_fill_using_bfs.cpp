/*
PROBLEM STATEMENT:
An image is represented by a 2-D array of integers,
each integer representing the pixel value of the image.
Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill,
and a pixel value newColor, "flood fill" the image.
To perform a "flood fill", consider the starting pixel,
plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel,
plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel),
and so on. Replace the color of all of the aforementioned pixels with the newColor.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

bool isValid(vector<vector<int>> &image, int x, int y, int n, int m, int oldColor, int newColor) {
    return (x < 0 || x >= n || y < 0 || y >= m
            || image[x][y] != oldColor || image[x][y] == newColor) ? false : true;
}

void bfs(vector<vector<int>> &image, int sr, int sc, int newColor) {
    int n = image.size();
    int m = image[0].size();
    int oldColor = image[sr][sc];
    image[sr][sc] = newColor;
    queue<pair<int, int>> queue;
    queue.push({sr, sc});
    while (!queue.empty()) {
        int x = queue.front().first;
        int y = queue.front().second;
        queue.pop();
        if (isValid(image, x + 1, y, n, m, oldColor, newColor)) {
            image[x + 1][y] = newColor;
            queue.push({x + 1, y});
        }
        if (isValid(image, x - 1, y, n, m, oldColor, newColor)) {
            image[x - 1][y] = newColor;
            queue.push({x - 1, y});
        }
        if (isValid(image, x, y + 1, n, m, oldColor, newColor)) {
            image[x][y + 1] = newColor;
            queue.push({x, y + 1});
        }
        if (isValid(image, x, y - 1, n, m, oldColor, newColor)) {
            image[x][y - 1] = newColor;
            queue.push({x, y - 1});
        }
    }
}

vector<vector<int>> solve(vector<vector<int>> &image, int sr, int sc, int newColor) {
    bfs(image, sr, sc, newColor);
    return image;
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
        vector<vector<int>> image(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> image[i][j];
        }
        int sr, sc, newColor;
        cin >> sr >> sc >> newColor;
        vector<vector<int>> ans = solve(image, sr, sc, newColor);
        for (auto &itr: ans) {
            for (auto &j: itr)
                cout << j << " ";
            cout << "\n";
        }
    }
    return 0;
}

/*
INPUT:
1
3 3
1 1 1
1 1 0
1 0 1
1 1 2

OUTPUT:
2 2 2
2 2 0
2 0 1
*/