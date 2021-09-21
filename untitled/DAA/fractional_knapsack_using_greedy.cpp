///*
//Name: Rohit Pendse
//Roll no: 33358
//Subject: DAA Lab Assignment 1
//Problem Statement:
//Write a menu driven C++ program to implement Fractional Knapsack using Greedy Algorithm
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//
//using namespace std;
//
//struct Item {
//    int value;
//    int weight;
//};
//
//bool cmp(struct Item a, struct Item b) {
//    double r1 = (double) a.value / a.weight;
//    double r2 = (double) b.value / b.weight;
//    return r1 > r2;
//}
//
//
//double fractionalKnapsack(int W, Item arr[], int n) {
//    sort(arr, arr + n, cmp);
//
//    int total_weights = 0;
//    int total_values = 0;
//    double value = 0;
//
//    for (int i = 0; i < n; i++) {
//        total_weights += arr[i].weight;
//        total_values += arr[i].value;
//    }
//
//    if (W >= total_weights) {
//        return total_values;
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (arr[i].weight <= W) {
//            W -= arr[i].weight;
//            value += arr[i].value;
//        } else {
//            value += arr[i].value * ((double) W / arr[i].weight);
//            break;
//        }
//    }
//
//    return value;
//}
//
//int32_t main() {
//
//    //size of array and weight
//    int n, W;
//
//    cout << "Enter no of items:" << '\n';
//    cin >> n;
//    cout << "Enter capacity of knapsack:" << '\n';
//    cin >> W;
//
//    Item arr[n];
//
//    //value and weight of each item
//    for (int i = 0; i < n; i++) {
//        cout << "Enter value " << i + 1 << ":" << '\n';
//        cin >> arr[i].value;
//        cout << "Enter weight " << i + 1 << ":" << '\n';
//        cin >> arr[i].weight;
//    }
//
//
//    cout << "Total Maximum value of item we can have from the given capacity of sack is:"
//         << fractionalKnapsack(W, arr, n) << endl;
//
//    return 0;
//}
//
///*
//INPUT:
//Enter no of items:
//3
//Enter capacity of knapsack:
//50
//Enter value 1:
//60
//Enter weight 1:
//10
//Enter value 2:
//100
//Enter weight 2:
//20
//Enter value 3:
//120
//Enter weight 3:
//30
//
//OUTPUT:
//Total Maximum value of item we can have from the given capacity of sack is:240
// */