///*
//PROBLEM STATEMENT:
//Given a string 's'.
//The task is to find the smallest window length that contains
//all the characters of the given string at least one time.
//
//Expected Time Complexity: O(256.N)
//Expected Auxiliary Space: O(256)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//string solve(string &s) {
//    if (s.size() == 1) return s;
//    unordered_map<char, int> mp;
//    for (char &c: s) mp[c] = 0;
//    int ans = INT_MAX;
//    int i = 0, j = 0, count = 0;
//    string res;
//    while (j < s.size()) {
//        // calculation of j
//        if (mp[s[j]] == 0) count++;
//        mp[s[j]]++;
//        if (count == mp.size()) {
//            // calculation of i
//            while (i < s.size() && mp[s[i]] > 1) {
//                mp[s[i]]--;
//                i++;
//            }
//            // calculation of ans
//            if (ans > (j - i + 1)) {
//                ans = j - i + 1;
//                res = s.substr(i, j - i + 1);
//            }
//        }
//        j++;
//    }
//    return res;
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
//4
//aabcbcdbca
//AABBBCBBAC
//aaab
//GEEKSGEEKSFOR
//
//OUTPUT:
//dbca
//BAC
//ab
//GEEKSFOR
//*/