///*
//PROBLEM STATEMENT:
//Given a string s, print all subsequences Of s
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void solve(string input, string output) {
//    if (input.empty()) {
//        cout << output << '\n';
//        return;
//    }
//
//    solve(input.substr(1), output);
//    solve(input.substr(1), output + input[0]);
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    string input;
//    string output;
//
//    while (t--) {
//        cin >> input;
//        output = "";
//        solve(input, output);
//    }
//
//    return 0;
//}
//
///*
//INPUT:
//1
//abc
//
//OUTPUT:
//
//c
//b
//bc
//a
//ac
//ab
//abc
//*/