///*
//longest substring without repeating characters
//PROBLEM STATEMENT:
//Given a string S, find the length of the longest substring without repeating characters.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//// Alternative approach
//// without using map (more efficient)
//int solve_2(string &str) {
//    vector<int> lastOccur(256, -1);
//    int ans = 0;
//    int i = 0;
//
//    for (int j = 0; j < str.size(); j++) {
//        i = max(i, lastOccur[str[j]] + 1);
//        ans = max(ans, j - i + 1);
//        lastOccur[str[j]] = j;
//    }
//
//    return ans;
//}
//
//// using map (less efficient)
//int solve(string s) {
//    int i = 0;
//    int j = 0;
//    int ans = 0;
//    unordered_map<char, int> mp;
//    mp.clear();
//
//    while (j < s.size()) {
//        // calculation of j
//        mp[s[j]]++;
//
//        if (mp.size() < (j - i + 1)) {
//            // calculation of i
//            while (mp.size() < (j - i + 1)) {
//                mp[s[i]]--;
//                if (mp[s[i]] == 0) {
//                    mp.erase(s[i]);
//                }
//                i++;
//            }
//        } else if (mp.size() == (j - i + 1)) {
//            // calculation of ans
//            ans = max(ans, j - i + 1);
//        }
//        j++;
//    }
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
//    string s;
//
//    while (t--) {
//        cin >> s;
//        cout << "\nlength of longest substring without repeating characters is : ";
//        cout << solve(s) << " ";
//        cout << solve_2(s);
//    }
//
//    return 0;
//}
//
///*
//OUTPUT:
//1
//geeksforgeeks
//length of longest substring without repeating characters is : 7 7
//*/