/*
Maximum Area Rectangle (MAR)
[NOTE]: It is similar to "MAH" problem
PROBLEM STATEMENT:
Given a binary matrix M of size n X m.
Find the maximum area of a rectangle formed only of 1s in the given matrix.
*/

//TODO
//Fix TLE

#include <bits/stdc++.h>

#define MAX 101
#define int long long
using namespace std;

vector<int> nsl(int height[], int n) {
    vector<int> left;    // stores Nearest Smaller to Left (NSL) indices
    stack<pair<int, int>> s;
    int pseudo_index = -1;

    // compare -> s.top().first -> Next Smaller Left (NSL)
    // v.push_back() -> s.top().second -> index of arr[i]

    for (int i = 0; i < n; i++) {
        if (s.empty()) {
            left.push_back(pseudo_index);
        } else if (!s.empty() && s.top().first < height[i]) {
            left.push_back(s.top().second);
        } else if (!s.empty() && s.top().first >= height[i]) {
            while (!s.empty() && s.top().first >= height[i]) {
                s.pop();
            }

            if (s.empty()) {
                left.push_back(pseudo_index);
            } else {
                left.push_back(s.top().second);
            }
        }
        s.push({height[i], i});
    }
    return left;
}

vector<int> nsr(int height[], int n) {
    vector<int> right;    // stores Nearest Smaller to Right (NSR) indices
    stack<pair<int, int>> s;
    int pseudo_index = n;

    // compare -> s.top().first -> Next Smaller Right (NSR)
    // v.push_back() -> s.top().second -> index of arr[i]

    for (int i = n - 1; i >= 0; i--) {
        if (s.empty()) {
            right.push_back(pseudo_index);
        } else if (!s.empty() && s.top().first < height[i]) {
            right.push_back(s.top().second);
        } else if (!s.empty() && s.top().first >= height[i]) {
            while (!s.empty() && s.top().first >= height[i]) {
                s.pop();
            }

            if (s.empty()) {
                right.push_back(pseudo_index);
            } else {
                right.push_back(s.top().second);
            }
        }
        s.push({height[i], i});
    }
    reverse(right.begin(), right.end());
    return right;
}

int mah(int height[], int n) {
    vector<int> left = nsl(height, n);
    vector<int> right = nsr(height, n);

    int width[n];

    for (int i = 0; i < n; i++) {
        width[i] = right[i] - left[i] - 1;
    }

    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        ans = max(ans, height[i] * width[i]);
    }

    return ans;
}


int mar(int mat[MAX][MAX], int n, int m) {

    if (n == 0) {
        return 0;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 1) {
                mat[i][j] += mat[i - 1][j];
            } else {
                mat[i][j] = 0;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, mah(mat[i], m));
    }

    return ans;
}


int32_t main() {

    int t;
    cin >> t;
    int n, m;
    int mat[MAX][MAX];

    while (t--) {
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }

        cout << "\nmaximum area of a rectangle formed only of 1s is : " << mar(mat, n, m) << endl;
    }


    return 0;
}


/*
OUTPUT:
1
4 4
0 1 1 0
1 1 1 1
1 1 1 1
1 1 0 0

maximum area of a rectangle formed only of 1s is : 8
*/


