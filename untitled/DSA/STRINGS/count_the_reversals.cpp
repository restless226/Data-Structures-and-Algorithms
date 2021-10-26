///*
//PROBLEM STATEMENT:
//Given a string S consisting of only opening and closing curly brackets '{' and '}',
//find out the minimum number of reversals required to convert the string into a balanced expression.
//A reversal means changing '{' to '}' or vice-versa.
//
//Expected Time Complexity: O(|S|).
//Expected Auxiliary Space: O(1).
//
//PREREQUISITE: Parenthesis Checker
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(string &s) {
//    int n = s.length();
//    if (n % 2 != 0) return -1;
//    stack<char> stack;
//    int opening = 0;
//    int closing = 0;
//    for (char &c : s) {
//        if (c == '{') {
//            stack.push(c);
//            opening++;
//        } else if (c == '}' && !stack.empty()) {
//            stack.pop();
//            opening--;
//        } else {
//            closing++;
//        }
//    }
//    opening = (opening % 2 == 0) ? (opening / 2) : (opening / 2) + 1;
//    closing = (closing % 2 == 0) ? (closing / 2) : (closing / 2) + 1;
//    return (opening + closing);
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        string s;
//        cin >> s;
//        cout << solve(s) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//}{{}}{{{
//{{}{{{}{{}}{{
//}}}}}}{}{}}}{{}}}}{}}{{{}{}{}{}}{{{{}}}{}}
//
//OUTPUT:
//3
//-1
//7
//*/