/*
PROBLEM STATEMENT:
Implement the next permutation, which rearranges the list of numbers
into Lexicographically next greater permutation of list of numbers.
If such arrangement is not possible, it must be rearranged
to the lowest possible order i.e. sorted in an ascending order.
You are given an list of numbers arr[ ] of size N.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

vector<int> solve(int n, vector<int> &arr) {
    if (arr.size() == 1) return arr;
    int i, j;
    for (i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) break;
    }
    if (i < 0) {
        reverse(arr.begin(), arr.end());
    } else {
        for (j = n - 1; j > i; j--) {
            if (arr[j] > arr[i]) break;
        }
        swap(arr[i], arr[j]);
        reverse(arr.begin() + i + 1, arr.end());
    }
    return arr;
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
        for (int i = 0; i < n; i++) cin >> arr[i];
        vector<int> ans = solve(n, arr);
        for (int i: ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}

/*
INPUT:
3
6
1 2 3 6 5 4
3
3 2 1
4
3 2 4 1

OUTPUT:
1 2 4 3 5 6
1 2 3
3 4 1 2
*/