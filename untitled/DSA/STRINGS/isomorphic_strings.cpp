///*
//PROBLEM STATEMENT:
//Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
//Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible
//for every character of str1 to every character of str2 while preserving the order.
//Note: All occurrences of every character in ‘str1’ should map to the same character in ‘str2’
//*/
//
//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//
//bool solve(string &s1, string &s2) {
//    if (s1.size() != s2.size()) return false;
//    unordered_map<char, char> mp1;  // to store one to one mapping
//    unordered_map<char, int> mp2;   // to check whether char has appeared in s2 or not
//    for (int i = 0; i < s1.size(); i++) {
//        if (mp1.count(s1[i]) > 0) {
//            if (mp1[s1[i]] != s2[i]) return false;
//        } else {
//            if (mp2.count(s2[i]) > 0) return false;
//            else {
//                mp1[s1[i]] = s2[i];
//                mp2[s2[i]] = true;
//            }
//        }
//    }
//    return true;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        string s1, s2;
//        cin >> s1;
//        cin >> s2;
//        cout << solve(s1, s2) << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//7
//aab xxy
//aab xyz
//abacba xyxzyx
//aadeee pppllb
//baa caa
//baa cfa
//bbbaaaba aaabbbba
//
//OUTPUT:
//1
//0
//1
//0
//1
//0
//*/