/*
Problem Statement:
Given an array arr[] of integers and an integer sum,
the task is to count all subsets of the given array with a sum equal to a given sum.
 */

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


int count_subsets_with_given_sum(int arr[], int n, int given_sum) {
    int arr_sum = 0;
    for (int i = 0; i < n; ++i) {
        arr_sum += arr[i];
    }

    if (arr_sum < given_sum) {
        return 0;
    }

//    int dp[n + 1][sum + 1];

    int **dp = new int *[n + 1];

    for (int i = 0; i < n + 1; ++i) {
        dp[i] = new int[arr_sum + 1];
    }

    // INITIALIZATION

    // i->n && j->sum
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < given_sum + 1; ++j) {
            if (i == 0) {
                dp[i][j] = 0;
            }
            if (j == 0) {   // j==0 tells that sum is 0
                dp[i][j] = 1; // 1 for empty subset
            }
        }
    }

//    cout << "\nDP ARRAY BEFORE:\n";
//    printArray(dp, n, sum);


    // ITERATIVE (top down) SOLUTION CODE
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < given_sum + 1; ++j) {
            if (arr[i - 1] <= j) {
                dp[i][j] = (dp[i - 1][j - arr[i - 1]] + dp[i - 1][j]) % ((int) pow(10, 9) + 7);
            } else if (arr[i - 1] > j) {
                dp[i][j] = dp[i - 1][j] % ((int) pow(10, 9) + 7);
            }
        }
    }

//    cout << "\nDP ARRAY AFTER:\n";
//    printArray(dp, n, arr_sum);

    return dp[n][given_sum] % ((int) pow(10, 9) + 7);
}

int32_t main() {

    int n, given_sum;
    cin >> n >> given_sum;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << count_subsets_with_given_sum(arr, n, given_sum) << '\n';

    return 0;
}

/*
OUTPUT:

6 10
2 3 5 6 8 10

DP ARRAY BEFORE:
1 0 0 0 0 0 0 0 0 0 0
1 0 140720274824064 0 140720274460938 140720274799104 140720274534681 10 140720274534681 10 140720274460938
1 4294967040 2 10 6562992 140720277161697 140720274799104 17367040 0 0 0
1 0 140720274316540 0 1875937312 48 1875937312 0 1875407245 0 6487008
1 1875937312 0 10 6487008 922337203685477580 10 9223372036854775807 922337203685477434 10 6487047
1 0 4294967295 1875941888 4294967295 49 6563016 140720274799104 6487344 6487480 17383088
1 6 0 6 0 624 10 4200251 6487371 1875546681 1875945840

DP ARRAY AFTER:
1 0 0 0 0 0 0 0 0 0 0
1 0 1 0 0 0 0 0 0 0 0
1 0 1 1 0 1 0 0 0 0 0
1 0 1 1 0 2 0 1 1 0 1
1 0 1 1 0 2 1 1 2 1 1
1 0 1 1 0 2 1 1 3 1 2
1 0 1 1 0 2 1 1 3 1 3

3
 */