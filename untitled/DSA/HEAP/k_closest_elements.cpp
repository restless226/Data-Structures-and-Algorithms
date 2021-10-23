///*
//PROBLEM STATEMENT:
//Given a sorted array, arr[] of N integers, and a value X.
//Find the K closest elements to X in arr[].
//Keep the following points in mind:
//
//1. If X is present in the array, then it need not be considered.
//2. If there are two elements with the same difference with X, the greater element is given priority.
//3. If sufficient elements are not present on the right side then take elements from left and vice versa.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//typedef pair<int, int> pii;
//
//struct cmp {
//public:
//    int operator()(pii &p1, pii &p2) {
//        if (p1.first < p2.first) return true;
//        else if (p1.first > p2.first) return false;
//        else return (p1.second > p2.second) ? true : false;
//    }
//};
//
//vector<int> solve(vector<int> &arr, int n, int k, int x) {
//    priority_queue<pii, vector<pii>, cmp> mxh;
//    int check = binary_search(arr.begin(), arr.end(), x);
//    int min_size;
//    vector<int> ans;
//    if (check) {
//        min_size = 1;
//        k = k + 1;
//    } else {
//        min_size = 0;
//    }
//    int i = 0;
//    while (i < k) {
//        mxh.push({abs(arr[i] - x), i});
//        i++;
//    }
//    while (i < n) {
//        mxh.push({abs(arr[i] - x), i});
//        mxh.pop();
//        i++;
//
//    }
//    while (mxh.size() > min_size) {
//        int top = mxh.top().second;
//        ans.push_back(arr[top]);
//        mxh.pop();
//    }
//    reverse(ans.begin(), ans.end());
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
//        int n, k, x;
//        cin >> n;
//        vector<int> arr(n);
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        cin >> k >> x;
//        vector<int> ans = solve(arr, n, k, x);
//        for (auto e : ans) {
//            cout << e << " ";
//        }
//        cout << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//13
//12 16 22 30 35 39 42 45 48 50 53 55 56
//4 35
//5
//1 2 3 6 10
//3 4
//5
//5 6 7 8 9
//3 7
//
//OUTPUT:
//39 30 42 45
//3 6 2
//8 6 9
//*/