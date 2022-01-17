/*
PROBLEM STATEMENT:
Given a positive integer 'n',  find and return the minimum number of steps that 'n' has to take to get reduced to 1.
You can perform any one of the following 3 steps:
1.) Subtract 1 from it. (n = n - 1) ,
2.) If n is divisible by 2, divide by 2.( if n % 2 == 0, then n = n / 2 ) ,
3.) If n is divisible by 3, divide by 3. (if n % 3 == 0, then n = n / 3 ).
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;


// [USING SIMPLE RECURSION]
int min_steps_recursion(int n) {

    // Base case
    if (n == 1) {
        return 0;
    }

    // Induction hypothesis
    int x = min_steps_recursion(n - 1);
    int y = INT_MAX, z = INT_MAX;

    if (n % 2 == 0) {
        y = min_steps_recursion(n / 2);
    }
    if (n % 3 == 0) {
        z = min_steps_recursion(n / 3);
    }

    // Recursive case
    return min(x, (min(y, z))) + 1;
}


// [USING MEMOIZATION]
// Time and Space Complexity are both O(n)
int min_Steps_memoization(int n, int *ans) {
    // Base case
    if (n == 1) {
        ans[n] = 0;
        return 0;
    }

    int y = INT_MAX;
    int z = INT_MAX;

    if (ans[n - 1] == -1) {
        ans[n - 1] = min_Steps_memoization(n - 1, ans);
    }

    if (n % 2 == 0) {
        if (ans[(n / 2)] == -1) {
            ans[(n / 2)] = min_Steps_memoization(n / 2, ans);
        }
        y = ans[n / 2];
    }

    if (n % 3 == 0) {
        if (ans[(n / 3)] == -1) {
            ans[(n / 3)] = min_Steps_memoization(n / 3, ans);
        }
        z = ans[n / 3];
    }


    ans[n] = min(ans[n - 1], min(y, z)) + 1;

    return ans[n];

}

int min_steps_helper(int n) {
    int *ans = new int[n + 1];

    for (int i = 0; i <= n; i++) {
        ans[i] = -1;
    }

    // [IMPORTANT NOTE]: ans[i] will represent min no of steps to reduce i to 1
    // hence ans[n] will contain final ans, as we want to reduce n to 1

    return min_Steps_memoization(n, ans);
}

int min_steps_dp(int n) {
    int *ans = new int[n + 1];

    ans[0] = 0;
    ans[1] = 0;


    for (int i = 2; i <= n; ++i) {
        ans[i] = INT_MAX;
    }

    // [IMPORTANT NOTE]: ans[i] will represent min no of steps to reach from i to n
    // hence ans[n] will contain final ans, as we want to reach from 1 to n

    for (int i = 1; i <= n; ++i) {

        if ((i + 1) <= n) {
            ans[i + 1] = min(ans[i + 1], ans[i] + 1);
        }

        if ((i * 2) % 2 == 0 && (i * 2) <= n) {
            ans[i * 2] = min(ans[i * 2], ans[i] + 1);
        }

        if ((i * 3) % 3 == 0 && (i * 3) <= n) {
            ans[i * 3] = min(ans[i * 3], ans[i] + 1);
        }
    }


    return ans[n];
}


int32_t main() {

    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);


    int n;
    cout << "Enter value of n:" << endl;
    cin >> n;

    cout << "[USING SIMPLE RECURSION] min steps required are: " << min_steps_recursion(n) << endl;
    cout << "[USING MEMOIZATION] min steps required are: " << min_steps_helper(n) << endl;
    cout << "[USING DP] min steps required are: " << min_steps_dp(n) << endl;

    return 0;
}