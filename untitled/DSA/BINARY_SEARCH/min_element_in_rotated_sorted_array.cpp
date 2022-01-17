/*
PROBLEM STATEMENT:
A sorted array A[ ] with distinct elements is rotated at some unknown point,
the task is to find the minimum element in it.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int mni(int arr[], int n) {
    int low = 0;
    int high = n - 1;
    int ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int prev = (mid + n - 1) % n;   // if mid is first element
        int next = (mid + 1) % n;       // if mid is last element
        if (arr[mid] <= arr[prev]
            && arr[mid] <= arr[next]) {   // if mid is smaller than both ts neighbours then it is smallest
            ans = mid;
            break;
        } else if (arr[mid] > arr[high]) { // go towards unsorted subarray (right of mid)
            low = mid + 1;  // since array is in ascending order
        } else if (arr[mid] < arr[high]) { // go towards unsorted subarray (left of mid)
            high = mid - 1; // since array is in ascending order
        }
    }
    return ans;
}

int solve(int arr[], int n) {
    int mn_index = mni(arr, n);
    return arr[mn_index];
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) {
        int n;
        int k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << solve(arr, n) << '\n';
    }

    return 0;
}

/*
INPUT:
2
5
4 5 1 2 3
7
10 20 30 40 50 5 7

OUTPUT:
1
5
*/