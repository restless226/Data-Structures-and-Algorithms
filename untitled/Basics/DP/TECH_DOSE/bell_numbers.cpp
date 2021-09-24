///*
//PROBLEM STATEMENT:
//Given a set of n elements, find number of ways of partitioning it.
//
//nth bell no denoted by Bn is the no of non empty subsets in which
//we can partition a set of size n.
//1, 1, 2, 5, 15, 52, 203, 877,...
//
//A way to discover bell numbers is to construct a Bell Triangle
//The leftmost column of this bell triangle will give us bell numbers
//
//1
//1   2
//2   3   5
//5   7   10  15
//15  20  27  37  52
//
//BELL NUMBERS RECURSIVE RELATION:
//bell(n) = S(n, k) [Sum of S(n, k) for k = 1 to n]
//S(n, k) means total number of partitions of n elements into k sets
//
//S(n, k) = k * S(n-1, k) + S(n-1, k-1)
//
//-> S(n-1, k-1) suggests that when we add nth element to k partitions
//   then it is added as single element to existing partitions
//-> k*S(n-1, k) suggests that when we add nth element to k partitions
//   then it is added to all sets of every partition
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void printArray(int **bell, int n) {
//    for (int i = 0; i < n + 1; ++i) {
//        for (int j = 0; j <= i; ++j) {
//            cout << bell[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//int solve(int n) {
//    int **bell = new int *[n + 1];
//    for (int i = 0; i <= n; i++) {
//        bell[i] = new int[i + 1];
//    }
//    bell[0][0] = 1;
//    for (int i = 1; i <= n; i++) {
//        bell[i][0] = bell[i - 1][i - 1];
//        for (int j = 1; j <= i; j++) {
//            bell[i][j] = bell[i][j - 1] + bell[i - 1][j - 1];
//        }
//    }
//    cout << "\nBELL ARRAY...\n";
//    printArray(bell, n);
//    return bell[n][0];
//}
//
//int S(int n, int k) {
//    // base condition
//    if (n == 0 || k == 0 || k > n) {
//        return 0;
//    } else if (k == 1 || k == n) {
//        return 1;
//    }
//    return k * S(n - 1, k) + S(n - 1, k - 1);
//}
//
//int rec(int n) {
//    int ans = 0;
//    for (int k = 1; k <= n; k++) {
//        ans += S(n, k);
//    }
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
//    int n;
//    while (t--) {
//        cin >> n;
//        int ans = solve(n);
//        cout << "\nBn is : " << ans;
//        ans = rec(n);
//        cout << "\nBn is : " << ans;
//    }
//
//    return 0;
//}
//
///*
//INPUT:
//3
//4
//5
//7
//
//OUTPUT:
//BELL ARRAY...
//1
//1 2
//2 3 5
//5 7 10 15
//15 20 27 37 52
//
//
//Bn is : 15
//Bn is : 15
//BELL ARRAY...
//1
//1 2
//2 3 5
//5 7 10 15
//15 20 27 37 52
//52 67 87 114 151 203
//
//
//Bn is : 52
//Bn is : 52
//BELL ARRAY...
//1
//1 2
//2 3 5
//5 7 10 15
//15 20 27 37 52
//52 67 87 114 151 203
//203 255 322 409 523 674 877
//877 1080 1335 1657 2066 2589 3263 4140
//
//
//Bn is : 877
//Bn is : 877
//*/