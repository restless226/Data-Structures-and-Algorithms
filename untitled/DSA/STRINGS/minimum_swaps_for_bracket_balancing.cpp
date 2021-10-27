///*
//PROBLEM STATEMENT:
//You are given a string S of 2N characters consisting of N ‘[‘ brackets and N ‘]’ brackets.
//A string is considered balanced if it can be represented
//in the for S2[S1] where S1 and S2 are balanced strings.
//We can make an unbalanced string balanced by swapping adjacent characters.
//Calculate the minimum number of swaps necessary to make a string balanced.
//NOTE - Strings S1 and S2 can be empty.
//
//Method 1:
//Time Complexity - O(n)
//Space Complexity O(n)
//
//Method 2:
//Time Complexity - O(n)
//Space Complexity O(1)
//
//Method 3:
//Time Complexity - O(n)
//Space Complexity O(1)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve1(string s) {
//    vector<int> v;
//    for (int i = 0; i < s.length(); i++) {
//        if (s[i] == '[') v.push_back(i);
//    }
//    int index = 0;  // index of '[' in v for swapping
//    int count = 0;  // (count < 0) => faulty '[', which is swapped with '[' at index "index"
//    int ans = 0;
//    for (int i = 0; i < s.length(); i++) {
//        if (s[i] == '[') {
//            count++;
//            index++;
//        } else {
//            count--;
//            if (count < 0) {
//                ans += v[index] - i;
//                swap(s[i], s[v[index]]);
//                count = 1;  // including opening bracket at which we are currently standing
//                index++;
//            }
//        }
//    }
//    return ans;
//}
//
//int solve2(string s) {
//    int open = 0, close = 0;
//    int fault = 0;
//    int ans = 0;
//    for (char &c : s) {
//        if (c == ']') {
//            close++;
//            fault = close - open;
//        } else {
//            open++;
//            if (fault > 0) {
//                ans += fault;
//                fault--;    // as fault is added in "ans" above, it means one fault is repaired
//            }
//        }
//    }
//    return ans;
//}
//
//int solve3(string s) {
//    int open = 0, close = 0, swaps = 0;
//    for (char &c : s) {
//        if (c == '[') {
//            if (close > open) swaps += (close - open);
//            open++;
//        }
//        if (c == ']') close++;
//    }
//    return swaps;
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
//        cout << solve1(s) << " " << solve2(s) << " " << solve3(s) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//4
//]][[
//[][]][
//[]][][
//[[][]]
//
//OUTPUT:
//3 3 3
//1 1 1
//2 2 2
//0 0 0
//*/