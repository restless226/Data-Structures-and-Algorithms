///*
//PROBLEM STATEMENT:
//Given a string s, we can transform every letter individually to be lowercase or uppercase to create another string.
//Return a list of all possible strings we could create. You can return the output in any order.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void solve(string input, string output, vector<string> &ans) {
//    if (input.empty()) {
//        ans.push_back(output + input);
//        return;
//    }
//    string output1 = output;
//    string output2 = output;
//    if(isdigit(input[0])){
//        output1.push_back(input[0]);
//        input.erase(input.begin());
//        solve(input, output1, ans);
//    }else{
//        output1.push_back(tolower(input[0]));
//        output2.push_back(toupper(input[0]));
//        input.erase(input.begin());
//        solve(input, output2, ans);
//        solve(input, output1, ans);
//    }
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
//4
//a1b2
//3z4
//12345
//0
//
//OUTPUT:
//(A1B2)(A1b2)(a1B2)(a1b2)
//(3Z4)(3z4)
//(12345)
//(0)
//
//*/