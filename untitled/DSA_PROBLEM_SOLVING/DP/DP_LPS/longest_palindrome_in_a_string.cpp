///*
//Longest Palindromic Substring
//PROBLEM STATEMENT:
//Given a string S, find the longest palindromic substring in S.
//Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S).
//Palindrome string: A string which reads the same backwards.
//More formally, S is palindrome if reverse(S) = S.
//In case of conflict, return the substring which occurs first
//(with the least starting index).
//*/
//
//#include <bits/stdc++.h>
//
//#define MAX 1001
//#define int long long
//using namespace std;
//
//bool dp[1001][1001];
//
//void printArray(int n) {
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << dp[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//string print_substr(string s, int start, int end) {
//    string ans;
//    for (int i = start; i <= end; ++i) {
//        ans += s[i];
//    }
//    return ans;
//}
//
////TODO
//pair<int, int> lps(string &s) {
//    int n = s.length();
//    memset(dp, 0, sizeof(dp));
//    int start = 0;
//    int maxL = 1;
//    // All substrings of length 1 are palindromes
//    for (int i = 0; i < n; i++) {
//        dp[i][i] = true;
//    }
//    // check for sub-string of length 2.
//    for (int i = 0; i < n - 1; i++) {
//        if (s[i] == s[i + 1]) {
//            dp[i][i + 1] = true;
//            start = i;
//            maxL = 2;
//        }
//    }
//
//    cout << "\nDP ARRAY BEFORE...\n";
//    printArray(n);
//
//    // Check for lengths greater than 2.
//    // j is length of substring
//    for (int i = 3; i <= n; ++i) {
//        // Fix the starting index
//        for (int j = 0; j < n - i + 1; ++j) {
//            // Get the ending index of substring starting from index j and length i
//            int k = j + i - 1;
//
//            // checking for sub-string from ith index to jth index iff str[j+1] to str[k-1] is a palindrome or not
//            if (dp[j + 1][k - 1] && s[j] == s[k]) {
//                dp[j][k] = true;
//                if (i > maxL) {
//                    start = j;
//                    maxL = i;
//                }
//            }
//        }
//    }
//
//    cout << "\nDP ARRAY AFTER...\n";
//    printArray(n);
//
//    return {start, maxL};
//}
//
////TODO
//string longestPalindrome(string &S) {
//    // code here
//    int n = S.length();
//    int start = 0;
//    int end = 1;
//    int low;
//    int high;
//
//    for (int i = 1; i < n; i++) {
//        // even length substring
//        low = i - 1;
//        high = i;
//
//        while (low >= 0 && high < n && S[low] == S[high]) {
//            if (high - low + 1 > end) {
//                start = low;
//                end = high - low + 1;
//            }
//            low--;
//            high++;
//        }
//
//        // odd length substring
//        low = i - 1;
//        high = i + 1;
//
//        while (low >= 0 && high < n && S[low] == S[high]) {
//            if (high - low + 1 > end) {
//                start = low;
//                end = high - low + 1;
//            }
//            low--;
//            high++;
//        }
//    }
//
//    return print_substr(S, start, start + end - 1);
//}
//
//
//string solve(string S) {
//    return longestPalindrome(S);
////    pair<int, int> ans = lps(S);
////    return print_substr(S, ans.first, ans.first + ans.second - 1);
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    while (t--) {
//        string s;
//        cin >> s;
//        cout << solve(s);
//    }
//
//    return 0;
//}
//
///*
//INPUT:
//2
//aaaabbaa
//kjqlrzzfmlvyoshiktodnsjjp
//
//OUTPUT:
//DP ARRAY BEFORE...
//1 1 0 0 0 0 0 0
//0 1 1 0 0 0 0 0
//0 0 1 1 0 0 0 0
//0 0 0 1 0 0 0 0
//0 0 0 0 1 1 0 0
//0 0 0 0 0 1 0 0
//0 0 0 0 0 0 1 1
//0 0 0 0 0 0 0 1
//
//
//
//DP ARRAY AFTER...
//1 1 1 1 0 0 0 0
//0 1 1 1 0 0 0 0
//0 0 1 1 0 0 0 1
//0 0 0 1 0 0 1 0
//0 0 0 0 1 1 0 0
//0 0 0 0 0 1 0 0
//0 0 0 0 0 0 1 1
//0 0 0 0 0 0 0 1
//
//aabbaa
//*/