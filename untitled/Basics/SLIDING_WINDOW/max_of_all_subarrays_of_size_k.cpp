///*
//Maximum of all subarrays of size K | Sliding Window
//PROBLEM STATEMENT:
//Given an array arr[] of size N and an integer K.
//Find the maximum for each and every contiguous subarray of size K.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//vector<int> max_of_all_subarray_2(int arr[], int n, int K) {
//    vector<int> ans;
//
//    int mx = INT_MIN;
//    for (int i = 0; i < K; i++) {
//        mx = max(mx, arr[i]);
//    }
//
//    ans.push_back(mx);
//
//    for (int i = K; i < n; i++) {
//        if (mx > arr[i] && mx != arr[i - K] /* still in same window */) {
//            ans.push_back(mx);
//        } else {
//            mx = INT_MIN;
//            for (int j = i - K + 1; j <= i; j++) {
//                mx = max(mx, arr[j]);
//            }
//            ans.push_back(mx);
//        }
//    }
//    return ans;
//}
//
//
//vector<int> max_of_all_subarray(int arr[], int n, int K) {
//
//    vector<int> ans;
//    deque<int> dq(K);
//
//    for (int i = 0; i < K; i++) {
//        while (!dq.empty() && arr[i] > arr[dq.back()]) {
//            dq.pop_back();
//        }
//        dq.push_back(i);
//    }
//
//    for (int i = K; i < n; i++) {
////        cout << arr[dq.front()] << " ";
//        ans.push_back(arr[dq.front()]);
//
//        // Remove elements which are not part of SW (Contraction)
//        while (!dq.empty() && dq.front() <= (i - K)) {
//            dq.pop_front();
//        }
//
//        // Remove elements  which are not useful and are in SW
//        while (!dq.empty() && arr[i] >= arr[dq.back()]) {
//            dq.pop_back();
//        }
//
//        // Add new elements in SW (Expansion)
//        dq.push_back(i);
//    }
//
////    cout<<arr[dq.front()];
//    ans.push_back(arr[dq.front()]);
//
//    return ans;
//}
//
//int32_t main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n;
//        int K;
//
//        cin >> n;
//        cin >> K;
//
//        int arr[n];
//
//        for (int i = 0; i < n; ++i) {
//            cin >> arr[i];
//        }
//
//        if (n < K) {
//            cout << "\nInvalid window size...\n";
//            continue;
//        }
//
//        vector<int> ans = max_of_all_subarray(arr, n, K);
//
//        cout << "\nmax element for each subarray is :\n ";
//        for (auto itr: ans) {
//            cout << itr << " ";
//        }
//        cout << '\n';
//
//        ans = max_of_all_subarray_2(arr, n, K);
//
//        for (auto itr: ans) {
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
//1
//9 3
//1 2 3 1 4 5 2 3 6
//
//max element for each subarray is :
//3 3 4 5 5 5 6
//3 3 4 5 5 5 6
//*/