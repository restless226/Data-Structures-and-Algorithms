///*
//PROBLEM STATEMENT:
//You are given N identical eggs and you have access to a K-floored building from 1 to K.
//
//There exists a floor f where 0 <= f <= K such that any egg dropped at a floor higher than f will break, and any egg dropped at or below floor f will not break. There are few rules given below.
//
//An egg that survives a fall can be used again.
//A broken egg must be discarded.
//The effect of a fall is the same for all eggs.
//If the egg doesn't break at a certain floor, it will not break at any floor below.
//If the eggs breaks at a certain floor, it will break at any floor above.
//Return the minimum number of moves that you need to determine with certainty what the value of f is.
//
//To find : min no of attempts in worst case to find threshold floor
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//
//static int dp[201][201];
//
//int egg_dropping_MEMOIZED(int e, int f) {
//    // base condition 1:
//    // if floors = 0 then no drops are required OR floors = 1 then 1 drop is required
//    if (f == 0 || f == 1) {
//        return f;
//    }
//
//    // base case 2:
//    // if only one egg is there then drops = floors
//    if (e == 1) {
//        return f;
//    }
//
//    // memoization block check
//    if (dp[e][f] != -1) {
//        return dp[e][f];
//    }
//
//    int drops = INT_MAX;
//    int temp_ans;
//
//    for (int k = 1; k <= f; k++) {
//        // [NOTE]: max() is used here because we are interested to fin "min no of attempts in worst case"
//        int broken;
//        int not_broken;
//
//        // OPTIMIZATION-1...
//        if (dp[e - 1][k - 1] != -1) {
//            broken = dp[e - 1][k - 1];
//        } else {
//            broken = egg_dropping_MEMOIZED(e - 1, k - 1);
//        }
//
//        // OPTIMIZATION-2...
//        if (dp[e][f - k] != -1) {
//            not_broken = dp[e][f - k];
//        } else {
//            not_broken = egg_dropping_MEMOIZED(e, f - k);
//        }
//        temp_ans = 1 + max(broken, not_broken);
////        temp_ans = 1 + max(egg_dropping_MEMOIZED(e - 1, k - 1), egg_dropping_MEMOIZED(e, f - k));
//        drops = min(drops, temp_ans);
//    }
//
//    dp[e][f] = drops;
//    return dp[e][f];
//}
//
//
//int egg_dropping_RECURSIVE(int e, int f) {
//    // base condition 1:
//    // if floors = 0 then no drops are required OR floors = 1 then 1 drop is required
//    if (f == 0 || f == 1) {
//        return f;
//    }
//
//    // base case 2:
//    // if only one egg is there then drops = floors
//    if (e == 1) {
//        return f;
//    }
//
//    int drops = INT_MAX;
//    int temp_ans;
//
//    // check dropping from all the floors 1 to floors and pick the minimum among those.
//    // for every drop there are 2 scenarios - a) either egg will break b) egg will not break
//    for (int k = 1; k <= f; k++) {
//        // [NOTE]: max() is used here because we are interested to fin "min no of attempts in worst case"
//        temp_ans = 1 + max(egg_dropping_RECURSIVE(e - 1, k - 1), egg_dropping_RECURSIVE(e, f - k));
//        drops = min(drops, temp_ans);
//    }
//
//    return drops;
//}
//
//int32_t main() {
//    cin.tie(NULL);
//    cout.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    int e, f;
//
//    while (t--) {
//        cin >> e >> f;
//        cout << "\nmin no of attempts in worst case to find threshold floor is : ";
//        cout << "\negg_dropping_RECURSIVE -> " << egg_dropping_RECURSIVE(e, f);
//        memset(dp, -1, sizeof(dp));
//        cout << "\negg_dropping_MEMOIZED -> " << egg_dropping_MEMOIZED(e, f);
//        cout << '\n';
//    }
//
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//2
//2 4
//2 10
//
//min no of attempts in worst case to find threshold floor is :
//egg_dropping_RECURSIVE -> 3
//egg_dropping_MEMOIZED -> 3
//
//min no of attempts in worst case to find threshold floor is :
//egg_dropping_RECURSIVE -> 4
//egg_dropping_MEMOIZED -> 4
//*/