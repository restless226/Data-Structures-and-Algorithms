#include <bits/stdc++.h>

using namespace std;
#define int long long

void printArray(int **dp, int n, int sum) {
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < sum + 1; ++j) {
            cout << dp[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}

int count_subsets_with_given_sum(int arr[], int n, int subset_1_sum, int **dp) {

    // INITIALIZATION
    // i->n && j->sum
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < subset_1_sum + 1; ++j) {
            if (i == 0) {
                dp[i][j] = 0;
            }
            if (j == 0) {   // j==0 tells that sum is 0
                dp[i][j] = 1; // 1 for empty subset
            }
        }
    }

    cout << "\nDP ARRAY BEFORE:\n";
    printArray(dp, n, subset_1_sum);

    // ITERATIVE (top down) SOLUTION CODE
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < subset_1_sum + 1; ++j) {
            if (arr[i - 1] <= j) {
                dp[i][j] = (dp[i - 1][j - arr[i - 1]] + dp[i - 1][j]) % ((int) pow(10, 9) + 7);
            } else if (arr[i - 1] > j) {
                dp[i][j] = dp[i - 1][j] % ((int) pow(10, 9) + 7);
            }
        }
    }

    cout << "\nDP ARRAY AFTER:\n";
    printArray(dp, n, subset_1_sum);

    return dp[n][subset_1_sum] % ((int) pow(10, 9) + 7);
}


int count_no_of_subsets_with_given_diff(int arr[], int n, int diff) {

    // THIS PROBLEM IS SIMILAR TO "count_subsets_with_given_sum" which we have done before
    int arr_sum = 0;
    for (int i = 0; i < n; ++i) {
        arr_sum += arr[i];
    }

    int **dp = new int *[n + 1];

    int subset_1_sum = (diff + arr_sum) / 2;

    for (int i = 0; i < n + 1; ++i) {
        dp[i] = new int[subset_1_sum + 1];
    }

    return count_subsets_with_given_sum(arr, n, subset_1_sum, dp);

}

int32_t main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, diff;
    cin >> n >> diff;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << count_no_of_subsets_with_given_diff(arr, n, diff) << '\n';

    return 0;
}

/*
OUTPUT:

4 1
1 1 2 3

DP ARRAY BEFORE:
1 0 0 0 0
1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587
1 -4995072469926809587 -4995072469926809587 -4995072469926809587 -4995072469926809587


DP ARRAY AFTER:
1 0 0 0 0
1 1 0 0 0
1 2 1 0 0
1 2 2 2 1
1 2 2 3 3

3
 */