///*
//PROBLEM STATEMENT:
//A gallery with plants is divided into n parts, numbered : 0,1,2,3...n-1.
//There are provisions for attaching water sprinklers at every partition.
//A sprinkler with range x at partition i can water all partitions from i-x to i+x.
//Given an array gallery[ ] consisting of n integers,
//where gallery[i] is the range of sprinkler at partition i
//(power==-1 indicates no sprinkler attached),
//return the minimum number of sprinklers that need to be turned on to water the complete gallery.
//If there is no possible way to water the full length using the given sprinklers, print -1.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int gallery[], int n) {
//
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
//        int gallery[n];
//        for (int i = 0; i < n; i++)
//            cin >> gallery[i];
//        cout << solve(gallery, n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//8
//1 0 4 2 0 6 2 4
//6
//-1 2 2 -1 0 0
//9
//2 3 4 -1 2 0 0 -1 0
//
//OUTPUT:
//
//*/