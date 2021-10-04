///*
//PROBLEM STATEMENT:
//Given three stacks of the positive numbers,
//the task is to find the possible equal maximum sum of the stacks
//with the removal of top elements allowed.
//Stacks are represented as an array, and
//the first index of the array represent the top element of the stack.
//
//Time Complexity : O(n1 + n2 + n3)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int s1[], int s2[], int s3[], int n1, int n2, int n3) {
//    int sum1 = 0, sum2 = 0, sum3 = 0;
//    for (int i = 0; i < n1; i++)
//        sum1 += s1[i];
//    for (int i = 0; i < n2; i++)
//        sum2 += s2[i];
//    for (int i = 0; i < n3; i++)
//        sum3 += s3[i];
//    int top1 = 0, top2 = 0, top3 = 0;
//    while (true) {
//        // If any stack is empty
//        if (top1 == n1 || top2 == n2 || top3 == n3)
//            return 0;
//        // If sums of all three stack are equal
//        if (sum1 == sum2 && sum2 == sum3)
//            return sum1;
//        // Finding stack with maximum sum and removing its top element
//        if (sum1 >= sum2 && sum1 >= sum3)
//            sum1 -= s1[top1++];
//        else if (sum2 >= sum1 && sum2 >= sum3)
//            sum2 -= s2[top2++];
//        else if (sum3 >= sum2 && sum3 >= sum1)
//            sum3 -= s3[top3++];
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
//        int n1, n2, n3;
//        cin >> n1 >> n2 >> n3;
//        int s1[n1];
//        int s2[n2];
//        int s3[n3];
//        for (int i = 0; i < n1; i++) {
//            cin >> s1[i];
//        }
//        for (int i = 0; i < n2; i++) {
//            cin >> s2[i];
//        }
//        for (int i = 0; i < n3; i++) {
//            cin >> s3[i];
//        }
//        cout << solve(s1, s2, s3, n1, n2, n3) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//2 2 2
//3 10
//4 5
//2 1
//5 3 4
//3 2 1 1 1
//4 3 2
//1 1 4 1
//
//OUTPUT:
//0
//5
//*/