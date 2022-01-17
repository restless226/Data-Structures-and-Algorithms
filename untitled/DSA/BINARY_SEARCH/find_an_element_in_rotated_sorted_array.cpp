/*
PROBLEM STATEMENT:
Given a sorted and rotated array A of N distinct elements
which is rotated at some point, and given an element key.
The task is to find the index of the given element key in the array A.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int bs(int arr[], int start, int end, int k) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k) {
            return mid;
        } else if (arr[mid] < k) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

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

int solve(int arr[], int n, int k) {
    int mn_index = mni(arr, n);
    int low = 0;
    int high = n - 1;
    return max(bs(arr, low, mn_index - 1, k), bs(arr, mn_index, high, k));
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
        cin >> k;
        cout << solve(arr, n, k) << '\n';
    }

    return 0;
}

/*
INPUT:
2
9
5 6 7 8 9 10 1 2 3
10
4
3 5 1 2
6

OUTPUT:
5
-1
*/