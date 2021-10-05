///*
//PROBLEM STATEMENT:
//Given an array of integers and a sum B, find all unique combinations in the array where the sum is equal to B.
//The same number may be chosen from the array any number of times to make B.
//NOTE:
//1. All numbers will be positive integers.
//2. Elements in a combination (a1, a2, …, ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
//3. The combinations themselves must be sorted in ascending order.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void solve(vector<int> &input, int k, vector<vector<int>> &ans) {
//
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
//        int k;
//        cin >> k;
//        vector<vector<int>> ans;
//        solve(input, k, ans);
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
//
//
//OUTPUT:
//
//*/