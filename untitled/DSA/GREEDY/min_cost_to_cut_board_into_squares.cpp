/*
PROBLEM STATEMENT:
A board of length m and width n is given,we need to break this board
into m*n squares such that cost of breaking is minimum.
cutting cost for each edge will be given for the board.
In short, we need to choose such a sequence of cutting such that cost is minimized.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int solve(int x[], int y[], int m, int n) {
    sort(x, x + m, greater<int>());
    sort(y, y + n, greater<int>());
    int horizontal_pieces = 1;
    int vertical_pieces = 1;
    int ans = 0;
    int i = 0;
    int j = 0;
    while (i < m && j < n) {
        if (x[i] > y[j]) {
            ans += x[i] * vertical_pieces;
            horizontal_pieces++;
            i++;
        } else {
            ans += y[j] * horizontal_pieces;
            vertical_pieces++;
            j++;
        }
    }
    while (i < m) {
        ans += x[i] * vertical_pieces;
        i++;
    }
    while (j < n) {
        ans += y[j] * horizontal_pieces;
        j++;
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
        int m, n;
        cin >> m >> n;
        m--;
        n--;
        int x[m];
        int y[n];
        for (int i = 0; i < m; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> y[i];
        }
        cout << solve(x, y, m, n) << "\n";
    }
    return 0;
}

/*
INPUT:
1
6 4
2 1 3 1 4
4 1 2
6 4
2

OUTPUT:
42
*/