///*
//PROBLEM STATEMENT:
//Given an array A[] of size N and a positive integer K,
//find the first negative integer for each and every window(contiguous subarray) of size K.
//If a window does not contain a negative integer , then return 0 for that window.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//
//vector<int> print_first_negative_no(int arr[], int n, int K) {
//    int i = 0;    // window back pointer
//    int j = 0;    // window front pointer
//
//    queue<int> q;
//    vector<int> ans;
//
//    while (j < n) {
//        // calculation of j
//        if (arr[j] < 0) {
//            q.push(arr[j]);
//        }
//
//        if (j - i + 1 < K) {
//            j++;
//        } else if (j - i + 1 == K) {
//            // calculation of ans
//            if (q.empty()) {
//                ans.push_back(0);
//            } else {
//                ans.push_back(q.front());
//
//            }
//
//            // calculation of i (to slide the window further)
//            if (arr[i] < 0) {
//                q.pop();
//            }
//
//            i++;
//            j++;
//        }
//    }
//
//    return ans;
//}
//
//int32_t main() {
//
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n;
//        int K;
//
//        cin >> n;
//        int arr[n];
//
//        for (int i = 0; i < n; ++i) {
//            cin >> arr[i];
//        }
//
//        cin >> K;
//
//        if (n < K) {
//            cout << "\nInvalid window size...\n";
//            continue;
//        }
//
//        vector<int> ans = print_first_negative_no(arr, n, K);
//
//        cout << "\nfirst negative integer for every window of size K is...\n";
//        for (auto itr:ans) {
//            cout << itr << " ";
//        }
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
//1
//5
//-8 2 3 -6 10
//2
//
//first negative integer for every window of size K is...
//-8 0 -6 -6
//*/