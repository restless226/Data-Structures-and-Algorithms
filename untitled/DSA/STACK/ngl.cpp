/*
Nearest Greater to Left (NGL)
PROBLEM STATEMENT:
Given an array arr[ ] of size N having distinct elements,
the task is to find the next greater element for each element of the array
in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the left
which is greater than the current element.
If there does not exist next greater of current element,
then next greater element for current element is -1.
For example, next greater of the last element is always -1.
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
        } else if (!s.empty() && s.top() > arr[i]) {
            v.push_back(s.top());
        } else if (!s.empty() && s.top() <= arr[i]) {
            while (!s.empty() && s.top() <= arr[i]) {
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
        cout << "\nnext greater element on left for each element of the array is : \n";
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
4
1 3 2 4

next greater element on left for each element of the array is :
-1 -1 3 -1
*/