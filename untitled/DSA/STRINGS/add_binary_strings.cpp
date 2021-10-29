///*
//PROBLEM STATEMENT:
//Given two binary strings A and B consisting of only 0s and 1s.
//Find the resultant string after adding the two Binary Strings.
//Note: The input strings may contain leading zeros but the output string
//      should not have any leading zeros.
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
//    if (c1 == '0' && c2 == '0' && carry == '0') return {'0', '0'};
//    else if (c1 == '1' && c2 == '1' && carry == '1') return {'1', '1'};
//    else if ((c1 == '0' && c2 == '0' && carry == '1')
//             || (c1 == '0' && c2 == '1' && carry == '0')
//             || (c1 == '1' && c2 == '0' && carry == '0'))
//        return {'1', '0'};
//    else return {'0', '1'};
//}
//
//string solve(string &a, string &b) {
//    string ans;
//    string temp;
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
//    if (carry == '1') ans += carry;
//    reverse(ans.begin(), ans.end());
//    if (ans[0] == '1') return ans;
//    for (int i = 0; i < ans.size(); i++) {
//        if (ans[i] == '1') {
//            ans.erase(ans.begin(), ans.begin() + i);
//            break;
//        }
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
//        string a, b;
//        cin >> a;
//        cin >> b;
//        cout << solve(a, b) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//1101 111
//10 01
//01001001 0110101
//
//OUTPUT:
//10100
//11
//1111110
//*/