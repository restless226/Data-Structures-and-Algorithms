/*
PROBLEM STATEMENT:
Given a array of N strings,
find the longest common prefix among all strings present in the array.

Traverse the first string and check till which index
its characters can be placed in the result.
If there comes a character which cannot be placed,
we simply break out without checking for the further characters.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

string solve(string arr[], int n) {
    string temp = arr[0];
    int count, index_temp, index_str;
    int mn = INT_MAX;
    for (int i = 1; i < n; i++) {
        count = index_str = index_temp = 0;
        while (index_temp < temp.size() && index_str < arr[i].size()) {
            if (temp[index_temp] == arr[i][index_str]) count++;
            else break;
            index_str++;
            index_temp++;
        }
        mn = min(mn, count);
    }
    return (mn == 0) ? "-1" : temp.substr(0, mn);
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
        string arr[n];
        for (int i = 0; i < n; ++i) cin >> arr[i];
        cout << solve(arr, n) << '\n';
    }
    return 0;
}

/*
INPUT:
4
4
geeksforgeeks geeks geek geezer
2
hello world
3
flower flow flight
3
abcdefgh abcd abcdefg

OUTPUT:
gee
-1
fl
abcd
*/