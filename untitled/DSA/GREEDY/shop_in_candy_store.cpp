/*
PROBLEM STATEMENT:
In a candy store, there are N different types of candies available and
the prices of all the N different types of candies are provided to you.
You are now provided with an attractive offer.
You can buy a single candy from the store and
get at most K other candies (all are different types) for free.
Now you have to answer two questions. Firstly,
you have to find what is the minimum amount of money
you have to spend to buy all the N different candies.
Secondly, you have to find what is the maximum amount of money
you have to spend to buy all the N different candies.
In both the cases you must utilize the offer i.e.
you buy one candy and get K other candies for free.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

vector<int> solve(int candies[], int n, int k) {
    vector<int> cost;
    sort(candies, candies + n);
    int remainingCandies = n;
    int minBuy = 0;
    int maxBuy = 0;
    int minIt = 0;
    int maxIt = n - 1;
    while (remainingCandies > 0) {
        minBuy += candies[minIt++];
        maxBuy += candies[maxIt--];
        remainingCandies -= (k + 1);
    }
    cost.push_back(minBuy);
    cost.push_back(maxBuy);
    return cost;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int candies[n];

        for (int i = 0; i < n; i++) {
            cin >> candies[i];
        }
        vector<int> cost = solve(candies, n, k);
        cout << cost[0] << " " << cost[1] << '\n';
    }
    return 0;
}

/*
INPUT:
3
4 2
3 2 1 4
5 4
3 2 1 4 5
10 0
1 2 3 4 5 6 7 8 9 10

OUTPUT:
3 7
1 5
55 55
*/