///*
//Longest K unique characters substring
//PROBLEM STATEMENT:
//Given a string you need to print the size of the longest possible substring that has exactly K unique characters.
//If there is no possible substring then print -1.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(string &s, int K) {
//    int i = 0;
//    int j = 0;
//    int ans = 0;
//    unordered_map<char, int> mp;
//    mp.clear();
//
//    while (j < s.size()) {
////        cout << "\nj is : " << j << '\n';
////        cout << "\nmp.size() : " << mp.size() << '\n';
////        cout << "\nPRINTING MAP...\n";
////        for (auto itr: mp) {
////            cout << itr.first << " " << itr.second << '\n';
////        }
////        cout << '\n';
//
//        // calculation of j
//        mp[s[j]]++;
//
//        if (mp.size() < K) {
//            j++;
//        } else if (mp.size() == K) {
//            // calculation of ans
//            ans = max(ans, j - i + 1);
//            j++;
//        } else if (mp.size() > K) {
//            // calculation of i
//            while (mp.size() > K) {
//                mp[s[i]]--;
//                if (mp[s[i]] == 0) {
//                    mp.erase(s[i]);
//                }
//                i++;
//            }
//
//            if (mp.size() == K) {
//                // calculation of ans
//                ans = max(ans, (int) mp.size());
//            }
//
//            j++;
//        }
//    }
//
//    if (ans == 0) {
//        ans = -1;
//    }
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
//    int K;
//
//    while (t--) {
//        cin >> s;
//        cin >> K;
//
//        if (K > s.length()) {
//            cout << "Invalid value of K\n";
//            continue;
//        }
//
//        cout << "\nlength of longest possible substring with K unique characters is : " << solve(s, K) << endl;
//    }
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//1
//aabacbebebe
//3
//length of longest possible substring with K unique characters is : 7
//*/