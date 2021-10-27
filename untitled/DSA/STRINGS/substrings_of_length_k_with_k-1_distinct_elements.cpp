///*
//PROBLEM STATEMENT:
//Given a String S and an integer K.
//Find the count of all substrings of length K
//which have exactly K-1 distinct characters.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(string &s, int k) {
//    int ans = 0;
//    unordered_map<char, int> mp;
//    int i = 0, j = 0;
//    while (j < s.size()) {
//        mp[s[j]]++;
//        if (j - i + 1 == k) {
//            if (mp.size() == k - 1) ans++;
//            mp[s[i]] == 1 ? mp.erase(s[i]) : mp[s[i]]--;
//            i++;
//        }
//        j++;
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
//        int k;
//        cin >> k;
//        cout << solve(s, k) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//abcc 2
//aabab 3
//pdxwd 2
//
//OUTPUT:
//1
//3
//0
//*/