///*
//PROBLEM STATEMENT:
//An image is represented by a 2-D array of integers,
//each integer representing the pixel value of the image.
//Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill,
//and a pixel value newColor, "flood fill" the image.
//To perform a "flood fill", consider the starting pixel,
//plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel,
//plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel),
//and so on. Replace the color of all of the aforementioned pixels with the newColor.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void dfs(vector<vector<int>> &image, int sr, int sc, int newColor, int n, int m, int oldColor) {
//    if (sr < 0 || sr >= n || sc < 0 || sc >= m || image[sr][sc] != oldColor || image[sr][sc] == newColor) return;
//    image[sr][sc] = newColor;
//    dfs(image, sr + 1, sc, newColor, n, m, oldColor);
//    dfs(image, sr - 1, sc, newColor, n, m, oldColor);
//    dfs(image, sr, sc + 1, newColor, n, m, oldColor);
//    dfs(image, sr, sc - 1, newColor, n, m, oldColor);
//}
//
//vector<vector<int>> solve(vector<vector<int>> &image, int sr, int sc, int newColor) {
//    int n = image.size();
//    int m = image[0].size();
//    dfs(image, sr, sc, newColor, n, m, image[sr][sc]);
//    return image;
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
//        vector<vector<int>> image(n, vector<int>(m, 0));
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++)
//                cin >> image[i][j];
//        }
//        int sr, sc, newColor;
//        cin >> sr >> sc >> newColor;
//        vector<vector<int>> ans = solve(image, sr, sc, newColor);
//        for (auto &itr: ans) {
//            for (auto &j: itr)
//                cout << j << " ";
//            cout << "\n";
//        }
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//3 3
//1 1 1
//1 1 0
//1 0 1
//1 1 2
//
//OUTPUT:
//2 2 2
//2 2 0
//2 0 1
//*/