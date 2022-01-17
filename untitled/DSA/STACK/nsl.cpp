/*
Nearest Smaller to Left (NSL)
PROBLEM STATEMENT:
Given an array a of integers of length n,
find the nearest smaller number for every element such that
the smaller element is on left side.
If no small element present on the left print -1.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

vector<int> solve(vector<int> &arr, int n) {
    vector<int> v;
    stack<int> s;   // stack stores elements in right subarray of that particular element

    for (int i = 0; i < n; i++) {   // [NOTE]: minor change-1
        if (s.empty()) {
            v.push_back(-1);
        } else if (!s.empty() && s.top() < arr[i]) {
            v.push_back(s.top());
        } else if (!s.empty() && s.top() >= arr[i]) {
            while (!s.empty() && s.top() >= arr[i]) {
                s.pop();
            }

            if (s.empty()) {
                v.push_back(-1);
            } else {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }

//    reverse(v.begin(), v.end());  // [NOTE]: minor change-2
    return v;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> ans = solve(arr, n);
        cout << "\nnext smaller element on left for each element of the array is : \n";
        for (auto itr:ans) {
            cout << itr << " ";
        }
        cout << '\n';
    }

    return 0;
}

/*
OUTPUT:
2
4
1 3 2 4
3
1 6 2

next smaller element on left for each element of the array is :
-1 1 1 2

next smaller element on left for each element of the array is :
-1 1 1
*/