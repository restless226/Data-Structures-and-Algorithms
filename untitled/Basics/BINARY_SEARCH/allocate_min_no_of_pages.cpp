///*
//PROBLEM STATEMENT:
//You are given N number of books.
//Every ith book has Ai number of pages.
//You have to allocate contagious books to M number of students.
//There can be many ways or permutations to do so.
//
//In each permutation, one of the M students will be allocated the maximum number of pages.
//Out of all these permutations, the task is to find that particular permutation in which
//the maximum number of pages allocated to a student is minimum of those in all the other permutations and print this minimum value.
//
//Each book will be allocated to exactly one student.
//Each student has to be allocated at least one book.
//NOTE: Return -1 if a valid assignment is not possible,
//      and allotment should be in contiguous order
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//bool isValid(int arr[], int n, int k, int mx) {
//    int stud = 1;
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += arr[i];
//        if (sum > mx) {
//            stud++;
//            sum = arr[i];
//        }
//        if (stud > k) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int solve(int arr[], int n, int k) {
//    if (n < k) {
//        // less books and more students
//        // hence we cannot allocate even 1 book per student (constraint)
//        return -1;
//    }
//    int start = arr[0];
//    int end = arr[0];
//    for (int i = 1; i < n; i++) {
//        end += arr[i];
//        start = max(start, arr[i]);
//    }
//    int ans = -1;
//    while (start <= end) {
//        int mid = start + (end - start) / 2;
//        if (isValid(arr, n, k, mid)) {
//            ans = mid;
//            end = mid - 1;
//        } else {
//            start = mid + 1;
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
//        cin >> n;
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        int k;  // no of students
//        cin >> k;
//        cout << solve(arr, n, k) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//4
//12 34 67 90
//2
//3
//15 17 20
//2
//8
//250 74 159 181 23 45 129 174
//6
//OUTPUT:
//113
//32
//*/