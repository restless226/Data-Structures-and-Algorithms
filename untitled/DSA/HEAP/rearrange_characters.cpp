///*
//PROBLEM STATEMENT:
//Given a string S with repeated characters.
//The task is to rearrange characters in a string
//such that no two adjacent characters are the same.
//Note: The string has only lowercase English alphabets and
//it can have multiple solutions. Return any one of them.
//If the string cannot be generated return "-1".
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//string solve(string &str) {
//
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        string str;
//        cin >> str;
//        string str1 = solve(str);
//        int flag = 1;
//        int c[26] = {0};
//        for (int i = 0; i < str.length(); i++)
//            c[str[i] - 'a'] += 1;
//        int f = 0;
//        int x = (str.length() + 1) / 2;
//        for (int i = 0; i < 26; i++) {
//            if (c[i] > x)
//                f = 1;
//        }
//        if (f) {
//            if (str1 == "-1")
//                cout << 0 << endl;
//            else
//                cout << 1 << endl;
//        } else {
//            int a[26] = {0};
//            int b[26] = {0};
//            for (char i : str)
//                a[i - 'a'] += 1;
//            for (char i : str1)
//                b[i - 'a'] += 1;
//            for (int i = 0; i < 26; i++)
//                if (a[i] != b[i])
//                    flag = 0;
//            for (int i = 0; i < str1.length(); i++) {
//                if (i > 0)
//                    if (str1[i - 1] == str1[i])
//                        flag = 0;
//            }
//            if (flag == 1) cout << "1\n";
//            else cout << "0\n";
//        }
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//geeksforgeeks
//bbbbb
//
//OUTPUT:
//
//*/