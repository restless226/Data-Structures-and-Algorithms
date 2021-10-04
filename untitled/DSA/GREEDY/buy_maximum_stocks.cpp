///*
//PROBLEM STATEMENT:
//In a stock market, there is a product with its infinite stocks.
//The stock prices are given for N days, where arr[i] denotes the price of the stock
//on the ith day. There is a rule that a customer can buy at most i stock on the ith day.
//If the customer has an amount of k amount of money initially,
//find out the maximum number of stocks a customer can buy.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//struct Security {
//    int index;
//    int value;
//};
//
//void printArray(Security security[], int n) {
//    cout << "index : ";
//    for (int i = 0; i < n; i++) {
//        cout << security[i].index << " ";
//    }
//    cout << '\n';
//
//    cout << "value : ";
//    for (int i = 0; i < n; i++) {
//        cout << security[i].value << " ";
//    }
//    cout << '\n';
//}
//
//bool cmp(Security security1, Security security2) {
//    return (security1.value < security2.value) ? true : false;
//}
//
//int solve(int security_value[], int n, int k) {
//    int no_of_stocks = 0;
//    // participants code here
//    struct Security security[n];
//    for (int i = 0; i < n; i++) {
//        security[i].index = i + 1;
//        security[i].value = security_value[i];
//    }
//    cout << "\nSECURITY ARRAY BEFORE...\n";
//    printArray(security, n);
//    sort(security, security + n, cmp);
//    cout << "\nSECURITY ARRAY AFTER...\n";
//    printArray(security, n);
//    for (int i = 0; i < n; i++) {
//        if (k >= security[i].value * security[i].index) {
//            no_of_stocks += security[i].index;
//            k -= security[i].value * security[i].index;
//        } else if (k >= security[i].value) {
//            no_of_stocks += (k / security[i].value);
//            k -= security[i].value * no_of_stocks;
//        }
//    }
//    return no_of_stocks;
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
//        int security_value[n];
//        for (int i = 0; i < n; i++) {
//            cin >> security_value[i];
//        }
//        cout << solve(security_value, n, k) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//3
//3 45
//10 7 19
//12 64
//17 24 7 45 15 14 37 40 8 23 27 17
//20 497
//49 34 2 5 17 28 44 44 18 36 31 31 27 7 8 46 31 18 32 21
//
//OUTPUT:
//SECURITY ARRAY BEFORE...
//index : 1 2 3
//value : 10 7 19
//
//SECURITY ARRAY AFTER...
//index : 2 1 3
//value : 7 10 19
//4
//
//SECURITY ARRAY BEFORE...
//index : 1 2 3 4 5 6 7 8 9 10 11 12
//value : 17 24 7 45 15 14 37 40 8 23 27 17
//
//SECURITY ARRAY AFTER...
//index : 3 9 6 5 1 12 10 2 11 7 8 4
//value : 7 8 14 15 17 17 23 24 27 37 40 45
//8
//
//SECURITY ARRAY BEFORE...
//index : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
//value : 49 34 2 5 17 28 44 44 18 36 31 31 27 7 8 46 31 18 32 21
//
//SECURITY ARRAY AFTER...
//index : 3 4 14 15 5 18 9 20 13 6 11 17 12 19 2 10 8 7 16 1
//value : 2 5 7 8 17 18 18 21 27 28 31 31 31 32 34 36 44 44 46 49
//50
//*/