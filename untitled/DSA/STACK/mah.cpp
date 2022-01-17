/*
Maximum Area Histogram (MAH)
PROBLEM STATEMENT:
Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars.
For simplicity, assume that all bars have the same width and the width is 1 unit,
there will be N bars height of each bar will be given by the array arr.
*/

#include <bits/stdc++.h>

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

    cout << "\nright VECTOR...\n";
    for (auto itr:right) {
        cout << itr << " ";
    }

    cout << "\nleft VECTOR...\n";
    for (auto itr:left) {
        cout << itr << " ";
    }

    int width[n];

    for (int i = 0; i < n; i++) {
        width[i] = right[i] - left[i] - 1;
    }

    cout << "\nwidth ARRAY...\n";
    for (int i = 0; i < n; i++) {
        cout << width[i] << " ";
    }
    cout << '\n';

    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        ans = max(ans, height[i] * width[i]);
    }

    return ans;
}

int32_t main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int height[n];
        for (int i = 0; i < n; i++) {
            cin >> height[i];
        }

        cout << "\nlargest rectangular area possible in a given histogram is : " << mah(height, n) << '\n';

    }

    return 0;
}

/*
OUTPUT:
4
7
6 2 5 4 5 1 6
5
1 2 3 4 5
5
5 4 3 2 1
1
1

largest rectangular area possible in a given histogram is :
right VECTOR...
1 5 3 5 5 7 7
left VECTOR...
-1 -1 1 1 3 -1 5
width ARRAY...
1 5 1 3 1 7 1
12

largest rectangular area possible in a given histogram is :
right VECTOR...
5 5 5 5 5
left VECTOR...
-1 0 1 2 3
width ARRAY...
5 4 3 2 1
9

largest rectangular area possible in a given histogram is :
right VECTOR...
1 2 3 4 5
left VECTOR...
-1 -1 -1 -1 -1
width ARRAY...
1 2 3 4 5
9

largest rectangular area possible in a given histogram is :
right VECTOR...
1
left VECTOR...
-1
width ARRAY...
1
1
*/