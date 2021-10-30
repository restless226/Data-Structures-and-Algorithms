///*
//PROBLEM STATEMENT:
//Given a string of characters,
//find the length of the longest proper prefix which is also a proper suffix.
//
//Expected Time Complexity: O(|s|)
//Expected Auxiliary Space: O(|s|)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//vector<int> prefix(string &s) {
//    int n = s.size();
//    vector<int> lps(n, 0);
//    for (int i = 1; i < n; i++) {
//        int j = lps[i - 1];
//        while (j > 0 && s[i] != s[j]) {
//            j = lps[j - 1];
//        }
//        if (s[i] == s[j]) j++;
//        lps[i] = j;
//    }
//    return lps;
//}
//
//int solve(string &s) {
//    int n = s.size();
//    vector<int> lps = prefix(s);
//    for (int i = 0; i < lps.size(); i++) cout << lps[i] << " ";
//    cout << '\n';
//    return lps[n - 1];
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
//        cout << solve(str) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//5
//abab
//aaaa
//gigummcnu
//kjnbchekjn
//kkkk
//
//OUTPUT:
//0 0 1 2
//2
//0 1 2 3
//3
//0 0 1 0 0 0 0 0 0
//0
//0 0 0 0 0 0 0 1 2 3
//3
//0 1 2 3
//3
//*/