#include <bits/stdc++.h>
using namespace std;
#define ll long long


// noob function
ll int fib(ll int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}


// pro function-1
// [TOP DOWN APPROACH]
// This function uses top-down approach which is called as 'MEMOIZATION'
// Solutions using MEMOIZATION are 'RECURSIVE SOLUTIONS'
// Time and Space Complexity are both O(n)

ll int fib_memoization(ll int n, ll int *ans) {
    if (n <= 1) {
        ans[n] = n;
        return n;
    }

    if (ans[n - 1] == 0) {
        // save ans
        // [NOTE]: this is only called as 'Memoization'
        ans[n - 1] = fib_memoization(n - 1, ans);
    }

    if (ans[n - 2] == 0) {
        // save ans
        ans[n - 2] = fib_memoization(n - 2, ans);
    }

    // save ans
    ans[n] = ans[n - 1] + ans[n - 2];

    return ans[n];

}

// Helper function
ll int fib_give_arr(ll int n) {
    ll int *ans = new ll int[n + 1];

    for (int i = 0; i < n; i++) {
        ans[i] = 0;
    }

    return fib_memoization(n, ans);
}




// pro function-1
// [BOTTOM UP APPROACH]
// This function uses bottom-up approach which is called as 'DYNAMIC PROGRAMMING'
// In this case, we will keenly analyze the order in which smaller sub-problems are getting solved
// Here we are solving trivial/smallest problem first and then we continue to count_no_of_subsets_with_given_diff further problems
// Solutions using DP are 'ITERATIVE SOLUTIONS'

// [HINT WHERE TO APPLY DP]:
// Check whether you have 'OVERLAPPING SUB-PROBLEMS' in your Question
// If yes then you can apply DP

ll int fib_dp(ll int n){
    int *ans=new int[n+1];

    ans[0]=0;
    ans[1]=1;

    for (int i = 2; i <=n; i++) {
        ans[i]=ans[i-1]+ans[i-2];
    }

    return ans[n];
}


int main() {

    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    ll int n;
    cout << "Enter value of n:" << endl;
    cin >> n;

    cout << "[USING MEMOIZATION] nth fibonacci no is: " << fib_give_arr(n) << '\n';
    cout << "[USING DP] nth fibonacci no is: " << fib_dp(n) << '\n';
    cout << "[WITHOUT USING DP] nth fibonacci no is: " << fib(n) << '\n';
    return 0;
}