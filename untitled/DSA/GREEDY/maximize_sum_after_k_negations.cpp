///*
//PROBLEM STATEMENT:
//Given an array of integers of size N and a number K.,
//Your must modify array arr[] exactly K number of times.
//Here modify array means in each operation you can replace
//any array element either arr[i] by -arr[i] or -arr[i] by arr[i].
//You need to perform this operation in such a way that after K operations,
//the sum of the array must be maximum.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int arr[], int n, int k) {
//    sort(arr, arr + n);
//    for (int i = 0; i < n; i++) {
//        if (arr[i] < 0 && k > 0) {
//            arr[i] = -arr[i];
//            k--;
//        }
//    }
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += arr[i];
//    }
//    if (k % 2 == 0) {
//        return sum;
//    }
//    int mn = *min_element(arr, arr + n);
//    sum -= 2 * mn;
//    return sum;
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
//        int arr[n + 5];
//        for (int i = 0; i < n; i++)
//            cin >> arr[i];
//        cout << solve(arr, n, k) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//4
//5 1
//1 2 -3 4 5
//10 5
//5 -2 5 -4 5 -12 5 5 5 20
//5 0
//1 2 3 4 5
//5 10
//-1 -2 -3 -4 -5
//
//OUTPUT:
//15
//68
//15
//13
//*/