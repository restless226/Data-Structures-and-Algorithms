///*
//PROBLEM STATEMENT:
//Given two strings denoting non-negative numbers X and Y. Calculate the sum of X and Y.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//typedef pair<char, char> pcc;
//
//pcc addition(char &c1, char &c2, char &carry) {
//    int sum = (c1 - 48) + (c2 - 48) + (carry - 48);
//    if (sum < 10) return {sum + 48, '0'};
//    string temp = to_string(sum);
//    return {temp[1], temp[0]};
//}
//
//string solve(string &a, string &b) {
//    string ans, temp;
//    int zeroes;
//    if (a.size() > b.size()) {
//        zeroes = a.size() - b.size();
//        while (zeroes--) temp += '0';
//        b = temp + b;
//    } else if (b.size() > a.size()) {
//        zeroes = b.size() - a.size();
//        while (zeroes--) temp += '0';
//        a = temp + a;
//    }
//    char sum, carry = '0';
//    for (int i = a.size() - 1; i >= 0; i--) {
//        pcc pair = addition(a[i], b[i], carry);
//        sum = pair.first, carry = pair.second;
//        ans += sum;
//    }
//    if (carry != '0') ans += carry;
//    reverse(ans.begin(), ans.end());
//    if (ans[0] != '0') return ans;
//    for (int i = 0; i < ans.size(); i++) {
//        if (ans[i] != '0') {
//            ans.erase(ans.begin(), ans.begin() + i);
//            return ans;
//        }
//    }
//    return "0";
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        string x, y;
//        cin >> x;
//        cin >> y;
//        cout << solve(x, y) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//4
//25
//23
//2500
//23
//950
//57
//0000000
//000000000
//
//OUTPUT:
//48
//2523
//1007
//0
//*/