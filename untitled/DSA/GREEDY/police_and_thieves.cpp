///*
//PROBLEM STATEMENT:
//Given an array of size n such that each element contains either a 'P' for policeman or a 'T' for thief.
//Find the maximum number of thieves that can be caught by the police.
//Keep in mind the following conditions :
//Each policeman can catch only one thief.
//A policeman cannot catch a thief who is more than K units away from him.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(char arr[], int n, int k) {
//    int ans = 0;
//    for (int i = 0; i < n; i++) {
//        if (arr[i] == 'P') {
//            int j = max((int) 0, i - k);
//            bool flag = false;
//            for (int run = j; run < i; run++) {
//                if (arr[run] == 'T') {
//                    arr[run] = 'C';
//                    ans++;
//                    flag = true;
//                    break;
//                }
//            }
//            if (!flag) {
//                j = min(n - 1, i + k);
//                for (int run = i + 1; run <= j; run++) {
//                    if (arr[run] == 'T') {
//                        arr[run] = 'C';
//                        ans++;
//                        flag = true;
//                        break;
//                    }
//                }
//            }
//        }
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
//        int n, k;
//        cin >> n >> k;
//        char arr[n];
//        for (int i = 0; i < n; ++i) {
//            cin >> arr[i];
//        }
//        cout << solve(arr, n, k) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//5 1
//P T T P T
//6 2
//T T P P T P
//
//OUTPUT:
//2
//3
//*/