/*
PROBLEM STATEMENT:
Find the number of occurrences of a given search word in a 2d-Array of characters
where the word can go up, down, left, right and around 90 degree bends.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int search(vector<vector<char> > &mat, string &target, int i, int j, int n, int m, int index) {
    if (i < 0 || j < 0 || i >= n || j >= m || mat[i][j] != target[index]) return 0;
    int count = 0;
    int temp = mat[i][j];
    mat[i][j] = 0;
    index++;
    if (index == target.size()) {
        count = 1;
    } else {
        count += search(mat, target, i + 1, j, n, m, index);
        count += search(mat, target, i, j + 1, n, m, index);
        count += search(mat, target, i - 1, j, n, m, index);
        count += search(mat, target, i, j - 1, n, m, index);
    }
    mat[i][j] = temp; // backtrack
    return count;
}

int solve(vector<vector<char> > &mat, string &target) {
    int ans = 0;
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans += search(mat, target, i, j, n, m, 0);
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
        int R, C;
        cin >> R >> C;
        vector<vector<char> > mat(R);
        for (int i = 0; i < R; i++) {
            mat[i].resize(C);
            for (int j = 0; j < C; j++) cin >> mat[i][j];
        }
        string target;
        cin >> target;
        cout << solve(mat, target) << '\n';
    }
    return 0;
}

/*
INPUT:
3
4 5
S N B S N
B A K E A
B K B B K
S E B S E
SNAKES
3 3
c a t
a t c
c t a
cat
6 6
D D D G D D
B B D E B S
B S K E B K
D D D D D E
D D D D D E
D D D D D G
GEEKS

OUTPUT:
3
5
2
*/