/*
PROBLEM STATEMENT:
Longest Alternating Subsequence (LAS)
A sequence {x1, x2, .. xn} is alternating sequence
if its elements satisfy one of the following relations :
x1 < x2 > x3 < x4 > x5..... or  x1 >x2 < x3 > x4 < x5.....
Your task is to find the longest such sequence.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

// pro solution (without using dp :))
// Time Complexity ->  O(n)
// Space Complexity ->  O(1)
int las(int arr[], int n) {
    int p1 = 1;
    int p2 = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            p1 = p2 + 1;
        } else if (arr[i] < arr[i - 1]) {
            p2 = p1 + 1;
        }
    }
    return max(p1, p2);
}


// noob solution (using dp :))
// Time Complexity ->  O(n^2)
// Space Complexity ->  O(n)
int solve(int arr[], int n) {
    if (n == 1) {
        return 1;
    }
    int dp[n][2];
    for (int i = 0; i < n; i++) {
        dp[i][0] = dp[i][1] = 1;
    }
    // dp[i][0] -> ans for ith element when it is greater than previous element
    // dp[i][1] -> ans for ith element when it is smaller than previous element
    int ans = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && dp[i][0] < 1 + dp[j][1]) {
                dp[i][0] = 1 + dp[j][1];
            } else if (arr[i] < arr[j] && dp[i][1] < 1 + dp[j][0]) {
                dp[i][1] = 1 + dp[j][0];
            }
            ans = max(ans, max(dp[i][0], dp[i][1]));
        }
    }

    return ans;
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
        cout << "\nlength of LAS is : " << solve(arr, n);
        cout << "\nlength of LAS is : " << las(arr, n);
    }

    return 0;
}

/*
INPUT:
2
3
1 5 4
10
1 17 5 10 13 15 10 5 16 8

OUTPUT:
length of LAS is : 3
length of LAS is : 3
length of LAS is : 7
length of LAS is : 7
*/