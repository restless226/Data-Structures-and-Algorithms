/*
PROBLEM STATEMENT:
Given an array arr[] and an integer K where K is smaller than size of array,
the task is to find the Kth smallest element in the given array.
It is given that all array elements are distinct.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int solve(int arr[], int l, int r, int k) {
    priority_queue<int> mxh;
    for (int i = l; i <= r; i++) {
        mxh.push(arr[i]);
        if (mxh.size() > k) mxh.pop();
    }
    return mxh.top();
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int number_of_elements;
        cin >> number_of_elements;
        int a[number_of_elements];
        for (int i = 0; i < number_of_elements; i++)
            cin >> a[i];
        int k;
        cin >> k;
        cout << solve(a, 0, number_of_elements - 1, k) << endl;
    }
    return 0;
}

/*
INPUT:
2
6
7 10 4 3 20 15
3
5
7 10 4 20 15
4

OUTPUT:
7
15
*/