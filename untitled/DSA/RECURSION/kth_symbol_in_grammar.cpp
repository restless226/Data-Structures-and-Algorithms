///*
//PROBLEM STATEMENT:
//We build a table of n rows (1-indexed).
//We start by writing 0 in the 1st row.
//Now in every subsequent row,
//we look at the previous row and replace each occurrence of 0 with 01,
//and each occurrence of 1 with 10.
//
//For example, for n = 3, the 1st row is 0, the 2nd row is 01, and the 3rd row is 0110.
//Given two integer n and k, return the kth (1-indexed) symbol in the nth row of a table of n rows.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int kthGrammar(int n, int k) {
//    // base condition
//    if (n == 1 && k == 1) {
//        return 0;
//    }
//    int mid = (int) pow(2, n - 1) / 2;
//    // hypothesis
//    if (k <= mid) {
//        return kthGrammar(n - 1, k);
//    } else {
//        return !kthGrammar(n - 1, k - mid);
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
//        int n, k;
//        cin >> n >> k;
//        cout << kthGrammar(n, k) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//1 1
//3 3
//
//OUTPUT:
//0
//1
//*/