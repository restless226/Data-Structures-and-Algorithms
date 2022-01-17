/*
PROBLEM STATEMENT:
Given an array of N integers arr[] where each element represents
the max number of steps that can be made forward from that element.
Find the minimum number of jumps to reach the end of the array (starting from the first element).
If an element is 0, then you cannot move through that element.
Note: Return -1 if you can't reach the end of the array.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int solve(int arr[], int n) {
    if (n == 1) {
        return 0;
    } else if (arr[0] == 0) {
        return -1;
    }

    int maxR = 0;
    int step = arr[0];
    int jump = 1;

    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            break;
        }
        maxR = max(maxR, arr[i] + i);
        step--;
        if (step == 0) {
            jump++;
            if (i >= maxR) {
                return -1;
            }
            step = maxR - i;
        }
    }
    return jump;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    int n;

    while (t--) {
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ans = solve(arr, n);
        if (ans == -1) {
            cout << "\ncan't reach the end of the array";
        } else {
            cout << "\nminimum number of jumps to reach the end of the array is : " << ans;
        }
    }

    return 0;
}

/*
INPUT:
3
11
1 3 5 8 9 2 6 7 6 8 9
6
1 4 3 2 6 7
4
2 1 0 3

OUTPUT:
minimum number of jumps to reach the end of the array is : 3
minimum number of jumps to reach the end of the array is : 2
can't reach the end of the array
*/