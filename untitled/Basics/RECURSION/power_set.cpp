///*
//PROBLEM STATEMENT:
//Given a string S find all possible subsequences of the string
//Return a list of all possible substrings(non-empty) that can be formed from S in lexicographically-sorted order.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void solve(string input, string output, vector<string> &ans) {
//    if (input.empty()) {
//        ans.push_back(output);
//        return;
//    }
//    string output1 = output;
//    string output2 = output;
//    output2.push_back(input[0]);
//    input.erase(input.begin());
//    solve(input, output1, ans);
//    solve(input, output2, ans);
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        string input;
//        cin >> input;
//        string output;
//        vector<string> ans;
//        solve(input, output, ans);
//        sort(ans.begin(),ans.end());
//        ans.erase(ans.begin());
//        for (auto itr:ans) {
//            cout << itr << " ";
//        }
//        cout << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//abc
//aa
//
//OUTPUT:
//a ab abc ac b bc c
//a a aa
//*/