///*
//PROBLEM STATEMENT:
//Given an array of letters sorted in ascending order,
//find the smallest letter in the the array which is greater than a given key letter.
//*/
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//char solve(char arr[], int n, char x) {
//    int start = 0;
//    int end = n - 1;
//    char ans = '*';
//    while (start <= end) {
//        int mid = start + (end - start) / 2;
//        if (arr[mid] == x) {
//            ans = arr[mid];
//            break;
//        } else if (int(arr[mid]) < int(x)) {
//            start = mid + 1;
//        } else if (int(arr[mid]) > int(x)) {
//            ans = arr[mid];
//            end = mid - 1;
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
//        int n;
//        char x;
//        cin >> n >> x;
//        char arr[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        cout << solve(arr, n, x) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//4 f
//a c f h
//4 g
//a c f h
//4 z
//a c f h
//
//OUTPUT:
//f
//h
//*
//
//*/