///*
//PROBLEM STATEMENT:
//Given a positive integer N, the task is to find all the N bit binary numbers
//having more than or equal 1’s than 0’s for any prefix of the number.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void solve(int n, int ones, int zeroes, string output, vector<string> &ans) {
//    // base condition
//    if (n == 0) {
//        ans.push_back(output);
//        return;
//    }
//
//    if (ones == zeroes) {
//        output.push_back('1');
//        solve(n - 1, ones + 1, zeroes, output, ans);
//    } else if (ones > zeroes) {
//        output.push_back('1');
//        solve(n - 1, ones + 1, zeroes, output, ans);
//        output.pop_back();
//        output.push_back('0');
//        solve(n - 1, ones, zeroes + 1, output, ans);
//    } else if (ones < zeroes) {
//        return;
//    }
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
//        vector<string> ans;
//        int ones = 0;
//        int zeroes = 0;
//        string output;
//        solve(n, ones, zeroes, output, ans);
//        for (auto &itr:ans) {
//            cout << itr << " ";
//        }
//        cout << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//2
//3
//
//OUTPUT:
//11 10
//111 110 101
//*/