//#include <bits/stdc++.h>
//
//using namespace std;
//
//int portfolio_profit_maximisation(int maxSum, vector<int> a, vector<int> b) {
//    //write your code here
//    int n1 = a.size();
//    int n2 = b.size();
//    for (int i = 1; i < n1; i++) a[i] += a[i - 1];
//    for (int j = 1; j < n2; j++) b[j] += b[j - 1];
//    int sum1 = 0, sum2 = 0;
//    int top1 = 0, top2 = 0;
//    while (top1 < n1 && top2 < n2) {
//        sum1 += a[top1];
//        top1++;
//        if (sum1 + sum2 > maxSum)
//            top1--;
//        sum2 += b[top2];
//        top2++;
//        if (sum1 + sum2 > maxSum)
//            top2--;
//        if (sum1 + sum2 > maxSum)
//            break;
//    }
//    return top1 + top2;
//}
//
//
//int main() {
//    ios::sync_with_stdio(false);
//
//    int n, m, x;
//    cin >> n >> m >> x;
//
//    vector<int> a(n);
//    vector<int> b(m);
//
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//
//    for (int i = 0; i < m; ++i) {
//        cin >> b[i];
//    }
//    int result = portfolio_profit_maximisation(x, a, b);
//    cout << result;
//    return 0;
//}
