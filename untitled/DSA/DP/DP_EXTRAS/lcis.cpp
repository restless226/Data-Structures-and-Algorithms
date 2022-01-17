/*
PROBLEM STATEMENT:
Given two arrays, arr1[] and arr2[] of sizes M and N respectively,
find the length of the longest common increasing subsequence(LCIS).
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int lcis(int arr1[], int arr2[], int m, int n) {
    // dp[j] stores length of LCIS ending with arr2[j].
    int dp[n];
    for (int j = 0; j < n; j++) dp[j] = 0;
    for (int i = 0; i < m; i++) {
        // Initialize current length of LCIS
        int current = 0;
        for (int j = 0; j < n; j++) {
            // If both the array have same elements.
            // Note that we don't break the loop here.
            if (arr1[i] == arr2[j])
                if (current + 1 > dp[j]) dp[j] = current + 1;
            /* Now seek for previous smaller common
            element for current element of arr1 */
            if (arr1[i] > arr2[j])
                if (dp[j] > current) current = dp[j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) ans = max(ans, dp[i]);
    return ans;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m;
        int arr1[m];
        for (int i = 0; i < m; i++) cin >> arr1[i];
        cin >> n;
        int arr2[n];
        for (int i = 0; i < n; i++) cin >> arr2[i];
        cout << "length of LCIS is : " << lcis(arr1, arr2, m, n) << '\n';
    }
    return 0;
}

/*
INPUT:
3
7
1 9 7 4 9 8 9
7
1 2 4 7 8 9 10
4
3 4 9 1
7
5 3 8 9 10 2 1
7
1 9 7 4 9 8 9
7
1 2 4 7 8 9 10

OUTPUT:
length of LCIS is : 4
length of LCIS is : 2
length of LCIS is : 4
*/