///*
//[NOTE]: BEST QUESTION OF SLIDING WINDOW
//PROBLEM STATEMENT:
//Given two strings S and P. Find the smallest window in the string S
//consisting of all the characters(including duplicates) of the string P.
//Return "-1" in case there is no such window present.
//In case there are multiple such windows of same length,
//return the one with the least starting index.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//// TODO
//int solve(string &txt, string &pat) {
//    if (txt.length() < pat.length()) {
//        return 0;
//    }
//    unordered_map<char, int> mp;
//    mp.clear();
//
//    for (char c : pat) {
//        mp[c]++;
//    }
//    int count = mp.size();
//
//    int i = 0;
//    int j = 0;
//    int ans = INT_MAX;
//
//    while (j < txt.size()) {
//
//        if (count == 0) {
//            while (mp[txt[i]] < 0) {
//                mp[txt[i]]++;
//                i++;
//            }
//            ans = min(ans, j - i + 1);
//        }
//        if (mp.find(txt[j]) != mp.end()) {
//            mp[txt[j]]--;
//            if (mp[txt[j]] == 0) {
//                count--;
//            }
//        }
//
//
//    }
//
//
//    return ans;
//}
//
//int32_t main() {
//    cin.tie(NULL);
//    cout.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    string txt, pat;
//
//    while (t--) {
//        cin >> txt;
//        cin >> pat;
//        solve(txt, pat);
//    }
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//*/