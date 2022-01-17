#include <bits/stdc++.h>

#define int long long
using namespace std;

int asc_BS(int arr[], int n, int k) {
    int start = 0;
    int end = n - 1;
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
        cout << asc_BS(arr, n, k) << endl;
    }
    return 0;
}
