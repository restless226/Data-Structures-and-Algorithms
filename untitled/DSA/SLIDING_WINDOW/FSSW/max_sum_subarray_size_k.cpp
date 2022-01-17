/*
PROBLEM STATEMENT:
Given an array of integers Arr of size N and a number K.
Return the maximum sum of a subarray of size K.
*/

#include <iostream>

#define int long long
using namespace std;

int max_sum_subarray(int arr[], int n, int K) {
    int i = 0;    // window back pointer
    int j = 0;    // window front pointer
    int sum = 0;
    int max_sum = INT_MIN;

    while (j < n) {
        // calculation of j
        sum += arr[j];

        if (j - i + 1 < K) {
            j++;
        } else if (j - i + 1 == K) {
            // calculation of ans
            max_sum = max(max_sum, sum);

            // calculation of i (to slide the window further)
            sum -= arr[i];

            i++;
            j++;
        }
    }

    return max_sum;
}


int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        int K;

        cin >> n;
        cin >> K;

        int arr[n];

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        if (n < K) {
            cout << "\nInvalid window size...\n";
            continue;
        }

        cout << "\nmax sum is : " << max_sum_subarray(arr, n, K);
    }

    return 0;
}

/*
OUTPUT:
1
4 2
100 200 300 400
max sum is : 700
*/