/*
Nearest Smaller to Right (NSR)
PROBLEM STATEMENT:
Given an integer array Arr of size N.
For each element in the array, check whether the right adjacent element
(on the next immediate position) of the array is smaller.
If next element is smaller, update the current index to that element.
If not, then  -1.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

vector<int> solve(vector<int> &arr, int n) {
    vector<int> v;
    stack<int> s;   // stack stores elements in right subarray of that particular element

    for (int i = n - 1; i >= 0; i--) {   // [NOTE]: minor change-1
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

    reverse(v.begin(), v.end());  // [NOTE]: minor change-2
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
1
5
4 2 1 5 3

next smaller element on left for each element of the array is :
2 1 -1 3 -1
*/