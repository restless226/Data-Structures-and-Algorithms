///*
//PROBLEM STATEMENT:
//Given a string and a pattern, Replace all the continuous occurrence of pattern with a single X in the string.
//
//Input:
//The first line of input contains an integer T denoting the number of test cases.
//The first line of each test case is string str.
//The second line of each test case contains a string s,which is a pattern.
//
//Output:
//Print the modified string str.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//string solve(string &str, string &patt) {
//    while (str.find(patt) != string::npos) {
//        str.replace(str.find(patt), patt.size(), "#");
//    }
//    string ans;
//    for (int i = 0; i < str.size(); i++) {
//        ans += str[i];
//        if (str[i] == '#') {
//            while (i + 1 < str.size() and str[i + 1] == '#') {
//                i++;
//            }
//        }
//    }
//    for (int i = 0; i < ans.length(); i++) {
//        ans[i] = (ans[i] == '#') ? 'X' : ans[i];
//    }
//    return ans;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        string str, patt;
//        cin >> str;
//        cin >> patt;
//        cout << solve(str, patt) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//5
//abababcdefababcdab
//ab
//geeksforgeeks
//geeks
//aaaa
//aa
//aaaaa
//aa
//ababXab
//ab
//
//OUTPUT:
//XcdefXcdX
//XforX
//X
//Xa
//XXX
//*/