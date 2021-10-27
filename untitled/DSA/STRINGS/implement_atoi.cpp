///*
//PROBLEM STATEMENT:
//Your task  is to implement the function atoi.
//The function takes a string(str) as argument and converts it to an integer and returns it.
//Note: You are not allowed to use inbuilt function.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(string &str) {
//    int ans = 0;
//    int power = 0;
//    for (int i = str.size() - 1; i >= 0; i--) {
//        if (str[i] < 48 || str[i] > 57) {
//            ans = (str[i] == '-') ? -ans : -1;
//            break;
//        }
//        ans += (str[i] - 48) * (int) pow(10, power);
//        power++;
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
//        string str;
//        cin >> str;
//        cout << solve(str) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//123
//-12
//21a
//
//OUTPUT:
//123
//-12
//-1
//*/