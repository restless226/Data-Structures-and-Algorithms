///*
//PROBLEM STATEMENT:
//The count-and-say sequence is a sequence of digit strings defined by the recursive formula:
//countAndSay(1) = "1"
//countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1),
//which is then converted into a different digit string.
//To determine how you "say" a digit string, split it into the minimal number of groups
//so that each group is a contiguous section all of the same character.
//Then for each group, say the number of characters, then say the character.
//To convert the saying into a digit string, replace the counts with a number and concatenate every saying.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//string solve(int n) {
//    if (n == 1) return "1";
//    if (n == 2) return "11";
//    string ans = "11";
//    int count;
//    string temp;
//    for (int i = 3; i <= n; i++) {
//        count = 1;
//        temp = "";
//        ans += '#'; // delimiter character
//        for (int j = 1; j < ans.length(); j++) {
//            if (ans[j] == ans[j - 1]) {
//                count++;
//            } else {
//                temp += to_string(count);
//                temp += ans[j - 1];
//                count = 1;
//            }
//        }
//        ans = temp;
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
//        cout << solve(n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//8
//1
//2
//3
//4
//5
//6
//7
//8
//
//OUTPUT:
//1
//11
//21
//1211
//111221
//312211
//13112221
//1113213211
//*/