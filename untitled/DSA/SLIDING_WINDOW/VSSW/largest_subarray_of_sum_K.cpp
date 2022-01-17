/*
Problem Description:
Variable Sized Sliding Window (VSSW)
Given an array containing N positive integers and an integer K.
Your task is to find the length of the longest Sub-Array
with sum of the elements equal to the given value K.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

// Alternative Approach (using map)
int largest_subarray(int arr[], int n, int K) {
    int length = 0;
    int prefix_sum = 0;    // prefix sum
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++) {

//        cout << "\nPRINTING MAP...\n";
//        for (auto itr: map) {
//            cout << itr.first << " " << itr.second << '\n';
//        }
//        cout << '\n';

        prefix_sum += arr[i];

        if (prefix_sum == K) {
            length = max(length, i + 1);
        }

        if (map[prefix_sum] == 0) {
            map[prefix_sum] = i + 1;
        }
        if (map[prefix_sum - K] > 0) {
            length = max(length, (i + 1) - map[prefix_sum - K]);
        }
    }

    return length;
}

// Aditya Verma Approach (without using map)
// [NOTE]: It works only when for all i in arr[i] > 0
int largest_subarray_of_sum_K(int arr[], int n, int K) {
    int i = 0;
    int j = 0;
    int length = 0;
    int sum = 0;

    while (j < n) {
        // calculation of j
        sum += arr[j];

        if (sum < K) {
            j++;
        } else if (sum == K) {
            // calculation of ans
            length = max(length, j - i + 1);
            j++;
        } else if (sum > K) {
            // calculation of i
            while (sum > K) {
                sum -= arr[i];
                i++;
            }
//            if (sum == K) {
//                // calculation of ans
//                length = max(length, j - i + 1);
//                break;
//            }
            j++;
        }
    }

    return length;
}

int32_t main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) {
        int n;
        int K;

        cin >> n >> K;

        int arr[n];

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << "\nLength of the longest subarray with sum K is :\n";
        cout << largest_subarray_of_sum_K(arr, n, K) << " ";
        cout << largest_subarray(arr, n, K);

    }

    return 0;
}


/*
OUTPUT:

2
6 16
1 4 3 3 5 5
7 5
4 1 1 1 2 3 5

Length of the longest subarray with sum K is :
5 5
Length of the longest subarray with sum K is :
4 4
*/