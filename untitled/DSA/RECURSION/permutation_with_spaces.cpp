///*
//PROBLEM STATEMENT:
//Given a string you need to print all possible strings that can be made by placing spaces (zero or one) in between them.
//The output should be printed in sorted increasing order of strings
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void solve(string input, string output, vector<string> &ans) {
//    if (input.size() == 1) {
//        ans.push_back(output + input);
//        return;
//    }
//    string output1 = output;
//    string output2 = output;
//    output1.push_back(input[0]);
//    output2.push_back(input[0]);
//    output2.push_back(' ');
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
//        sort(ans.begin(), ans.end());
//        reverse(ans.begin(), ans.end());
//        for (auto &itr : ans) {
//            cout << "(" << itr << ")";
//        }
//        cout << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//ABC
//AB
//abc
//
//OUTPUT:
//(ABC)(AB C)(A BC)(A B C)
//(AB)(A B)
//(abc)(ab c)(a bc)(a b c)
//*/