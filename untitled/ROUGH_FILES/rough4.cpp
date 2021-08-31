// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
public:

    void printArray(int **dp, int n, int sum) {
        for (int i = 0; i < n + 1; ++i) {
            for (int j = 0; j < sum + 1; ++j) {
                cout << dp[i][j] << " ";
            }
            cout << '\n';
        }
        cout << '\n';
    }

    int count_subsets_with_given_sum(vector<int> &A, int subset_1_sum, int **dp) {

        // INITIALIZATION
        // i->n && j->sum
        for (int i = 0; i < A.size() + 1; ++i) {
            for (int j = 0; j < subset_1_sum + 1; ++j) {
                if (i == 0) {
                    dp[i][j] = 0;
                }
                if (j == 0) {   // j==0 tells that sum is 0
                    dp[i][j] = 1; // 1 for empty subset
                }
            }
        }

//        cout << "\nDP ARRAY BEFORE:\n";
//        printArray(dp, A.size(), subset_1_sum);

        // ITERATIVE (top down) SOLUTION CODE
        for (int i = 1; i < A.size() + 1; ++i) {
            for (int j = 1; j < subset_1_sum + 1; ++j) {
                if (A[i - 1] <= j) {
                    dp[i][j] = (dp[i - 1][j - A[i - 1]] + dp[i - 1][j]) % ((int) pow(10, 9) + 7);
                } else if (A[i - 1] > j) {
                    dp[i][j] = dp[i - 1][j] % ((int) pow(10, 9) + 7);
                }
            }
        }

//        cout << "\nDP ARRAY AFTER:\n";
//        printArray(dp, A.size(), subset_1_sum);

        return dp[A.size()][subset_1_sum] % ((int) pow(10, 9) + 7);
    }

    int findTargetSumWays(vector<int> &A, int target_sum) {
        //Your code here
        // THIS PROBLEM IS SIMILAR TO "count_subsets_with_given_difference" which we have done before
        // "target_sum" here is same as "diff" in COUNT_SUBSETS_WITH_GIVEN_DIFFERENCE problem
        int arr_sum = 0;
        for (auto itr:A) {
            arr_sum += itr;
        }

        int subset_1_sum = (target_sum + arr_sum) / 2;

        int **dp = new int *[A.size() + 1];
        for (int i = 0; i < A.size() + 1; ++i) {
            dp[i] = new int[subset_1_sum + 1];
        }

        return count_subsets_with_given_sum(A, subset_1_sum, dp);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin >> N;
        vector<int> arr(N);

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout << ob.findTargetSumWays(arr, target);
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends