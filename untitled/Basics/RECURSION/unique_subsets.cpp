///*
//PROBLEM STATEMENT:
//Given an array arr[] of integers of size N that might contain duplicates,
//the task is to find all possible unique subsets.
//NOTE: Each subset should be sorted.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void solve(string input, string output, unordered_map<string, int> &mp) {
//    if (input.empty()) {
//        sort(output.begin(), output.end());
//        mp[output]++;
//        return;
//    }
//    string output1 = output;
//    string output2 = output;
//    output2.push_back(input[0]);
//    input.erase(input.begin());
//    solve(input, output1, mp);
//    solve(input, output2, mp);
//}
//
//void printVector(vector<string> ans) {
//    sort(ans.begin(), ans.end());
//    for (auto &itr : ans) {
//        cout << '(';
//        for (int i = 0; i < itr.size(); i++) {
//            cout << itr[i];
//            if (i < itr.size() - 1) {
//                cout << " ";
//            }
//        }
//        cout << ")";
//    }
//    cout << '\n';
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
//        int arr[n];
//        string input;
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//            input += to_string(arr[i]);
//        }
//        string output;
//        unordered_map<string, int> mp;
//        solve(input, output, mp);
//        vector<string> ans;
//        for (auto itr:mp) {
//            ans.push_back(itr.first);
//        }
//        printVector(ans);
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//3
//2 1 2
//5
//8 1 8 6 8
//9
//5 6 6 10 3 4 6 6 4
//
//OUTPUT:
//()(1)(1 2)(1 2 2)(2)(2 2)
//()(1)(1 6)(1 6 8)(1 6 8 8)(1 6 8 8 8)(1 8)(1 8 8)(1 8 8 8)(6)(6 8)(6 8 8)(6 8 8 8)(8)(8 8)(8 8 8)
//*/