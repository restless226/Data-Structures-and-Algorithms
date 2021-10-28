///*
//PROBLEM STATEMENT:
//Given two strings of lowercase alphabets and a value K,
//your task is to complete the given function which tells
//if two strings are K-anagrams of each other or not.
//Two strings are called K-anagrams if both of the below conditions are true.
//1. Both have same number of characters.
//2. Two strings can become anagram by changing at most K characters in a string.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(string &s1, string &s2, int k) {
//    if (s1.size() != s2.size()) return false;
//    vector<int> alpha(26, 0);
//    for (char &c : s1) alpha[c - 97]++;
//    int changes = 0;
//    for (char &c : s2) (alpha[c - 97] > 0) ? alpha[c - 97]-- : changes++;
//    return (changes <= k) ? true : false;
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
//        cin >> s1 >> s2;
//        int k;
//        cin >> k;
//        cout << solve(s1, s2, k) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//5
//fodr gork 2
//aabbbc badaba 2
//aabbbc badaba 1
//uovwhqfaemqodyksjj swwhzsiowocjfyadvj 18
//tramhfmrcewshtmytq tcicyfyvuvawbtpdhz 11
//
//OUTPUT:
//1
//1
//0
//1
//1
//*/