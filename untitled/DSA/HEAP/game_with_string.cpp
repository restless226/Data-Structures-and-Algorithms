///*
//PROBLEM STATEMENT:
//Given a string s of lowercase alphabets and a number k,
//the task is to print the minimum value of the string after removal of ‘k’ characters.
//The value of a string is defined as the sum of squares of the count of each distinct character.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(string &s, int k) {
//    if (k == s.length()) return 0;
//    unordered_map<char, int> mp;
//    priority_queue<int> mxh;
//    for (char &c:s) {
//        mp[c]++;
//    }
//    for (auto &itr:mp) {
//        mxh.push(itr.second);
//    }
//    while (k--) {
//        int top = mxh.top();
//        mxh.pop();
//        top--;
//        if (top != 0) {
//            mxh.push(top);
//        }
//    }
//    int ans = 0;
//    while (!mxh.empty()) {
//        ans += (mxh.top() * mxh.top());
//        mxh.pop();
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
//        int k;
//        cin >> s >> k;
//        cout << solve(s, k) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//abccc 1
//aabcbcbcabcc 3
//
//OUTPUT:
//6
//27
//*/