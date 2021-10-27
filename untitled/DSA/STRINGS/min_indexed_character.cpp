///*
//PROBLEM STATEMENT:
//Given a string str and another string patt.
//Find the first position (considering 0-based indexing) of the character
//in patt that is present at the minimum index in str.
//Return the index of answer in str or returns -1 in case no character of patt is present in str.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(string &str, string &patt) {
//    unordered_map<char, int> mp;
//    for (int i = 0; i < patt.length(); i++) {
//        mp[patt[i]]++;
//    }
//    for (int i = 0; i < str.length(); i++) {
//        if (mp.count(str[i]) > 0) return i;
//    }
//    return -1;
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
//        string patt;
//        cin >> str;
//        cin >> patt;
//        cout << solve(str, patt) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//geeksforgeeks set
//adcffaet onkl
//hasjkhflaskdf sdlkjfshd
//
//OUTPUT:
//1
//-1
//0
//*/