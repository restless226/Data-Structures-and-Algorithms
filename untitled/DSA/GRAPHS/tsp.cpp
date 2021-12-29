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
//#include<bits/stdc++.h>
//
//using namespace std;
//#define long long int
//
//vector<pair<string, int>> paths;
//
//int solve(vector<vector<int>> &cost, int currentCity, int depth, vector<bool> &visited) {
//    const int n = cost.size();
//    if (depth == n) {
//        return cost[currentCity][0];
//    }
//    int ans = INT_MAX;
//    string path;
//    visited[currentCity] = true;
//    path +=  to_string(currentCity);
//    for (int city = 0; city < n; city++) {
//        if (!visited[city]) {
//            visited[city] = true;
//            path += to_string(city);
//            ans = min(ans, cost[currentCity][city] + solve(cost, city, depth + 1, visited));
//            visited[city] = false;
//        }
//        paths.push_back({path, ans});
//    }
//    visited[currentCity] = false;
//    return ans;
//}
//
//int tsp(vector<vector<int>> cost) {
//    vector<bool> visited(cost.size(), false);
//    return solve(cost, 0, 1, visited);
//}
//
//int main() {
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
//        int minCost = tsp(cost);
//        string path;
//        for (auto &itr: paths) {
//            if (itr.second == minCost) {
//                path = itr.first;
//                break;
//            }
//        }
//        cout << "min cost path: ";
//        for (auto &c: path) cout << c << "->";
//        cout << "0\n";
//        cout << "min cost: " << minCost << '\n' << '\n';
//    }
//    return 0;
//}
//
//
///*
//INPUT:
//4
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
//4
//0 4 1 3
//4 0 2 1
//1 2 0 5
//3 1 5 0
//
//OUTPUT:
//min cost path: 0->1->0
//min cost: 223
//
//min cost path: 0->1->2->0
//min cost: 3000
//
//min cost path: 0->1->2->3->0
//min cost: 85
//
//min cost path: 0->1->2->3->0
//min cost: 7
//*/