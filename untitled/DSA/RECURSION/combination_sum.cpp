///*
//PROBLEM STATEMENT:
//Given an array of integers and a sum B, find all unique combinations in the array where the sum is equal to B.
//The same number may be chosen from the array any number of times to make B.
//NOTE:
//1. All numbers will be positive integers.
//2. Elements in a combination (a1, a2, …, ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
//3. The combinations themselves must be sorted in ascending order.
//
//Time Complexity: O(X2 * 2N)
//Space Complexity: O(X * 2N)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void solve(int index, int target, vector<int> &input, vector<vector<int>> &ans, vector<int> &ds) {
//    // base condition
//    if (index == input.size()) {
//        if (target == 0) {
//            vector<int> temp = ds;
//            sort(temp.begin(), temp.end());
//            ans.push_back(temp);    // Time Complexity : O(N)
//        }
//        return;
//    }
//    // hypothesis - pick up an element
//    if (input[index] <= target) {
//        ds.push_back(input[index]);   // recursive call step
//        solve(index, target - input[index], input, ans, ds);
//        ds.pop_back();    // backtracking step
//    }
//    // induction
//    solve(index + 1, target, input, ans, ds);
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
//        vector<int> input;
//        for (int i = 0; i < n; i++) {
//            int x;
//            cin >> x;
//            input.push_back(x);
//        }
//        int target;
//        cin >> target;
//
//        sort(input.begin(), input.end());
//        input.erase(unique(input.begin(), input.end()), input.end());
//        vector<vector<int>> ans;
//        vector<int> temp;
//        solve(0, target, input, ans, temp);
//        sort(ans.begin(), ans.end());
//
//        if (ans.empty()) {
//            cout << "Empty";
//        }
//        for (int i = 0; i < ans.size(); i++) {
//            cout << '(';
//            for (int j = 0; j < ans[i].size(); j++) {
//                cout << ans[i][j];
//                if (j < ans[i].size() - 1)
//                    cout << " ";
//            }
//            cout << ")";
//        }
//        cout << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//4
//7 2 6 5
//16
//11
//6 5 7 1 8 2 9 9 7 7 9
//6
//
//OUTPUT:
//(2 2 2 2 2 2 2 2)(2 2 2 2 2 6)(2 2 2 5 5)(2 2 5 7)(2 2 6 6)(2 7 7)(5 5 6)
//(1 1 1 1 1 1)(1 1 1 1 2)(1 1 2 2)(1 5)(2 2 2)(6)
//*/