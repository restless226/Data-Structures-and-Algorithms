/*
PROBLEM STATEMENT:
number of characters that can be put in one line (line width).
Put line breaks in the given sequence such that the lines are printed neatly.
Assume that the length of each word is smaller than the line width.
When line breaks are inserted there is a possibility that extra spaces are present in each line.
The extra spaces include spaces put at the end of every line except the last one.
You have to minimize the following total cost where total cost = Sum of cost of all lines,
where cost of line is = (Number of extra spaces in the line)^2.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int solve(vector<int> &nums, int n, int k) {

}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cin >> k;
        cout << solve(nums, n, k) << '\n';
    }
    return 0;
}

/*
INPUT:


OUTPUT:

*/