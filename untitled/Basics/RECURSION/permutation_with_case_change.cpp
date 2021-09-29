///*
//PROBLEM STATEMENT:
//Print all permutations of a string keeping the sequence but changing cases.
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
//    output1.push_back(input[0]);
//    output2.push_back(islower(input[0])?toupper(input[0]):tolower(input[0]));
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
//ab
//
//
//OUTPUT:
//(ABC)(ABc)(AbC)(Abc)(aBC)(aBc)(abC)(abc)
//(AB)(Ab)(aB)(ab)
//(ab)(aB)(Ab)(AB)
//
//*/