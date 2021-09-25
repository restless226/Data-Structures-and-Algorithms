///*
//PROBLEM STATEMENT:
//Given two strings 'str' and a wildcard pattern 'pattern' of length N and M respectively,
//You have to print '1' if the wildcard pattern is matched with str else print '0' .
//
//The wildcard pattern can include the characters ‘?’ and ‘*’
//‘?’ – matches any single character
//‘*’ – Matches any sequence of characters (including the empty sequence)
//
//Note: The matching should cover the entire str (not partial str).
//*/
//
//#include <bits/stdc++.h>
//
//#define MAX 201
//#define int long long
//using namespace std;
//
//int dp[MAX][MAX];
//
//void printArray(int m, int n) {
//    for (int i = 0; i < m + 1; ++i) {
//        for (int j = 0; j < n + 1; ++j) {
//            cout << dp[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//int wpm(string &pat, string &txt, int i, int j) {
//    // base case
//    if (i == -1 && j == -1) {   // both pat and txt exhausted
//        return 1;
//    }
//    if (j == -1) {  // txt exhausted but pat not exhausted
//        // all remaining characters in pat should be '*' for pattern matching
//        // as '*' can be an empty sequence
//        for (int k = 0; k < i; k++) {
//            if (pat[k] != '*') {
//                return 0;
//            }
//        }
//        return 1;
//    }
//    if (i == -1) {   // pat exhausted but txt not exhausted
//        return 0;
//    }
//
//    // memoization block check
//    if (dp[i][j] != -1) {
//        return dp[i][j];
//    }
//
//    if (pat[i] == txt[j] || pat[i] == '?') {
//        return dp[i][j] = wpm(pat, txt, i - 1, j - 1);
//    }
//    if (pat[i] == '*') {
//        // memoization block check
//        if (dp[i - 1][j] == -1) {
//            dp[i - 1][j] = wpm(pat, txt, i - 1, j);  // here we have assumed '*' as empty sequence
//        }
//
//        // memoization block check
//        if (dp[i][j - 1] == -1) {
//            dp[i][j - 1] = wpm(pat, txt, i, j - 1);  // here we have assumed '*' as non empty sequence
//        }
//
//        return dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
//    }
//    return dp[i][j] = 0;
//}
//
//int solve(string &pat, string &txt) {
//    int m = pat.length();
//    int n = txt.length();
//    memset(dp, -1, sizeof(dp));
//    int ans = wpm(pat, txt, m - 1, n - 1);
//    cout << "\nDP ARRAY AFTER...\n";
//    printArray(m, n);
//    return ans;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    string pat;
//    string txt;
//    while (t--) {
//        cin >> pat;
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        cin >> txt;
//        if (solve(pat, txt)) {
//            cout << "Yes\n";
//        } else {
//            cout << "No\n";
//        }
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//ba*a?
//baaabab
//a*ab
//baaabab
//
//OUTPUT:
//DP ARRAY AFTER...
//1 0 0 -1 -1 -1 -1 -1
//0 1 0 0 0 -1 -1 -1
//0 1 1 1 1 -1 -1 -1
//-1 -1 -1 -1 -1 1 -1 -1
//-1 -1 -1 -1 -1 -1 1 -1
//-1 -1 -1 -1 -1 -1 -1 -1
//
//Yes
//
//DP ARRAY AFTER...
//0 0 0 0 0 -1 -1 -1
//0 0 0 0 0 -1 -1 -1
//-1 -1 -1 -1 -1 0 -1 -1
//-1 -1 -1 -1 -1 -1 0 -1
//-1 -1 -1 -1 -1 -1 -1 -1
//
//No
//*/