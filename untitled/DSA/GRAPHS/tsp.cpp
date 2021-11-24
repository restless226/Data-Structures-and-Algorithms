///*
//PROBLEM STATEMENT:
//Given a matrix cost of size n where cost[i][j] denotes
//the cost of moving from city i to city j.
//Your task is to complete a tour from the city 0 (0 based index)
//to all other cities such that you visit each city at most once
//and then at the end come back to city 0 in min cost.
//
//Naive Time Complexity: n!
//Better Time Complexity: (n-1)!
//Optimised Time Complexity: 2^n*n
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long int
//using namespace std;
//const int mod = 1000000007;
//
//int VISITED_ALL;
//int dp[1025][11];
//
//// mask => set of cities, pos => stating city from which we can visit connected cities
//int tsp(int mask, int pos, vector<vector<int>> &cost, int n) {
//    // base case
//    if (mask == VISITED_ALL) return cost[mask][pos];
//    // Memoized block check
//    if (dp[mask][pos] != -1) {
//        return dp[mask][pos];
//    }
//    int ans = INT_MAX;
//    // Go to an unvisited city from pos
//    for (int city = 0; city < n; city++) {
//        if ((mask & (1 << city)) == 0) {
//            int curr_ans = cost[pos][city] +
//                           tsp(mask | (1 << city), city, cost, n);
//            ans = min(ans, curr_ans);
//        }
//    }
//    return dp[mask][pos] = ans;
//}
//
//int solve(vector<vector<int>> &cost, int n) {
//    VISITED_ALL = ((1 << n) - 1);
//    // INITIALIZING DP MATRIX
//    memset(dp, -1, sizeof(dp));
//    // It returns minimum weight hamiltonian path cost
//    return tsp(1, 0, cost, n);
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        vector<vector<int>> cost(n, vector<int>(n, 0));
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                cin >> cost[i][j];
//            }
//        }
//        cout << solve(cost, n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//2
//0 111
//112 0
//3
//0 1000 5000
//5000 0 1000
//1000 5000 0
//4
//0 20 42 25
//20 0 30 34
//42 30 0 10
//25 34 10 0
//
//OUTPUT:
//223
//3000
//85
//*/