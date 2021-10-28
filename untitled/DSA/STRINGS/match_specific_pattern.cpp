///*
//PROBLEM STATEMENT:
//Given a dictionary of words and a pattern.
//Every character in the pattern is uniquely mapped to a character in the dictionary.
//Find all such words in the dictionary that match the given pattern.
//
//mp[key] = NULL if key is not present in map, ascii(NULL) = 0
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//string encode(string &s) {
//    unordered_map<char, int> mp;
//    string encoded;
//    for (char &c:s) {
//        if (mp.count(c) > 0) mp[c]++;
//        encoded += to_string(mp[c]);
//    }
//    return encoded;
//}
//
//vector<string> solve(vector<string> &dict, string &pattern) {
//    vector<string> ans;
//    string encoded = encode(pattern);
//    for (auto &s:dict) {
//        if (s.size() != pattern.size()) continue;
//        if (encode(s) == encoded) ans.push_back(s);
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
//        int n;
//        cin >> n;
//        vector<string> dict(n);
//        for (int i = 0; i < n; i++) cin >> dict[i];
//        string pattern;
//        cin >> pattern;
//        vector<string> ans = solve(dict, pattern);
//        sort(ans.begin(), ans.end());
//        for (int i = 0; i < ans.size(); i++)
//            cout << ans[i] << " ";
//        cout << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//4
//abb abc xyz xyy
//foo
//
//OUTPUT:
//abb xyy
//*/