///*
//PROBLEM STATEMENT:
//Given a mathematical equation using numbers/variables and +, -, *, /.
//Print the equation in reverse.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//string solve(string &s) {
//    string ans;
//    stack<char> stack;
//    int i = s.size() - 1;
//    while (i >= 0) {
//        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' ) {
//            while (!stack.empty()) {
//                ans += stack.top();
//                stack.pop();
//            }
//            ans += s[i];
//        } else {
//            stack.push(s[i]);
//        }
//        i--;
//    }
//    while (!stack.empty()) {
//        ans += stack.top();
//        stack.pop();
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
//        string s;
//        cin >> s;
//        cout << solve(s) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//20-3+5*2
//a+b*c-d/e
//
//OUTPUT:
//2*5+3-20
//e/d-c*b+a
//*/