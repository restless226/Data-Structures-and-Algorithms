///*
//PROBLEM STATEMENT:
//Given a string consisting of lower case English alphabets,
//the task is to find the number of distinct subsequences of the string
//Note: Answer can be very large, so, output will be answer modulo 109+7
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(string &s) {
//    int n = s.length();
//    int dp[n + 1];
//    dp[0] = 1;
//    unordered_map<char, int> mp;
//    for (int i = 1; i <= n; i++) {
//        dp[i] = (2 * dp[i - 1]) % mod;
//        if (mp.find(s[i - 1]) != mp.end()) {
//            int j = mp[s[i - 1]];
//            dp[i] = (dp[i] % mod - dp[j - 1] % mod) % mod;
//        }
//        mp[s[i - 1]] = i;
//    }
//    if (dp[s.length()] < 0) {
//        dp[s.length()] += mod;
//    }
//    return dp[s.length()];
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    string s;
//    while (t--) {
//        cin >> s;
//        cout << "\nnumber of distinct subsequences is : " << solve(s);
//    }
//
//    return 0;
//}
//
///*
//INPUT:
//4
//rohit
//gfg
//ggg
//jzeye
//
//OUTPUT:
//number of distinct subsequences is : 32
//number of distinct subsequences is : 7
//number of distinct subsequences is : 4
//number of distinct subsequences is : 28
//*/