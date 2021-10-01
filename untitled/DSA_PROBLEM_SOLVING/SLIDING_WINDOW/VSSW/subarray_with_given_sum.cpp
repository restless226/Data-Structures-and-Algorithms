///*
//PROBLEM STATEMENT:
//Given an unsorted array A of size N that contains only non-negative integers,
//find a continuous sub-array which adds to a given number S.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//vector<int> subarraySum(int arr[], int n, int s) {
//    // Your code here
//    vector<int> v;
//    int sum = 0;
//    int i = 0;
//    int j = 0;
//
//    while (j < n) {
//        sum += arr[j];
//        if (sum < s) {
//            j++;
//        } else if (sum == s) {
//            // calculation of ans
//            v.push_back(i + 1);
//            v.push_back(j + 1);
//            break;
//        } else if (sum > s) {
//            // calculation of i
//            while (sum > s) {
//                sum -= arr[i];
//                i++;
//            }
//            if (sum == s) {
//                // calculation of ans
//                v.push_back(i + 1);
//                v.push_back(j + 1);
//                break;
//            }
//
//            j++;
//        }
//    }
//
//    if (v.empty()) {
//        v.push_back(-1);
//    }
//    return v;
//}
//
//
//int32_t main() {
//    int t;
//    int n;
//    int s;
//    cin >> t;
//
//    while (t--) {
//        cin >> n >> s;
//
//        int arr[n];
//
//        for (int i = 0; i < n; i++){
//            cin >> arr[i];
//        }
//
//        vector<int> res = subarraySum(arr, n, s);
//
//        cout << '\n';
//        for (auto itr: res) {
//            cout << itr << " ";
//        }
//        cout << '\n';
//
//    }
//    return 0;
//}
//
///*
//OUTPUT:
//3
//5 12
//1 2 3 7 5
//10 15
//1 2 3 4 5 6 7 8 9 10
//42 468
//135 101 170 125 79 159 163 65 106 146 82 28 162 92 196 143 28 37 192 5 103 154 93 183 22 117 119 96 48 127 172 139 70 113 68 100 36 95 104 12 123 134
//
//2 4
//1 5
//38 42
//*/