/*
PROBLEM STATEMENT:
Given an array of n distinct elements.
Find the minimum number of swaps required to sort the array in strictly increasing order.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int solve(vector<int> &nums) {
    int n = nums.size();
    vector<pair<int, int>> greedy(n);
    for (int i = 0; i < n; i++) {
        greedy[i] = {nums[i], i};
    }
    sort(greedy.begin(), greedy.end());
    int swaps = 0;
    for (int i = 0; i < n; i++) {
        if (greedy[i].second != i) {
            swap(greedy[i], greedy[greedy[i].second]);
            swaps++;
            i--;
        }
    }
    return swaps;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        cout << solve(nums) << "\n";
    }
    return 0;
}

/*
INPUT:
3
4
2 8 5 4
5
10 19 6 3 5
5
1 5 4 3 2

OUTPUT:
1
2
2
*/