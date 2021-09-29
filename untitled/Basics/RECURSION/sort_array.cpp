///*
//PROBLEM STATEMENT:
//Sort an array and vector using recursion
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void insert_arr(int arr[], int n, int temp) {
//    if (n == 0 || arr[n - 1] <= temp) {
//        arr[n] = temp;
//        return;
//    } else {
//        int val = arr[n - 1];
//        insert_arr(arr, n - 1, temp);
//        arr[n] = val;
//    }
//}
//
//void insert_vector(vector<int> &v, int temp) {
//    if (v.empty() || v[v.size() - 1] <= temp) {
//        v.push_back(temp);
//        return;
//    } else {
//        int val = v[v.size() - 1];
//        v.pop_back();
//        insert_vector(v, temp);
//        v.push_back(val);
//    }
//}
//
//void sort_rec_arr(int *arr, int n) {
//    if (n == 0 || n == 1) {
//        return;
//    } else {
//        sort_rec_arr(arr, n - 1);
//        insert_arr(arr, n - 1, arr[n - 1]);
//    }
//}
//
//void sort_rec_vector(vector<int> &v) {
//    if (v.empty() || v.size() == 1) {
//        return;
//    } else {
//        int temp = v[v.size() - 1];
//        v.pop_back();
//        sort_rec_vector(v);
//        insert_vector(v, temp);
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
//        int n;
//        cin >> n;
//        int *arr = new int[n];
//        vector<int> v(n);
//
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//            v[i] = arr[i];
//        }
//
//        sort_rec_arr(arr, n);
//        for (int i = 0; i < n; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << '\n';
//
//        sort_rec_vector(v);
//        for (int i = 0; i < n; i++) {
//            cout << v[i] << " ";
//        }
//        cout << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//6
//5 7 3 9 2 9
//7
//4 8 2 6 1 2 9 9
//
//OUTPUT:
//2 3 5 7 9 9
//2 3 5 7 9 9
//1 2 2 4 6 8 9
//1 2 2 4 6 8 9
//*/