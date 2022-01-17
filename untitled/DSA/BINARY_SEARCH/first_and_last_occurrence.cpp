/*
PROBLEM STATEMENT:
Given a sorted array arr containing n elements with possibly duplicate elements,
the task is to find indexes of first and last occurrences of an element x in the given array.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

pair<int, int> solve(int arr[], int n, int k) {
    int low = 0;
    int high = n - 1;
    pair<int, int> ans;
    int mn = INT_MAX;
    int mx = INT_MIN;

    // first index
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k) {
            high = mid - 1;
            mn = min(mn, mid);
        } else if (arr[mid] < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    low = 0;
    high = n - 1;

    // last index
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k) {
            low = mid + 1;
            mx = max(mx, mid);
        } else if (arr[mid] < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    ans.first = mn == INT_MAX ? -1 : mn;
    ans.second = mx == INT_MIN ? -1 : mx;
    return ans;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        pair<int, int> ans = solve(arr, n, k);
        cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}

/*
INPUT:
2
9 5
1 3 5 5 5 5 67 123 125
9 7
1 3 5 5 5 5 7 123 125

OUTPUT:
2 5
6 6
*/