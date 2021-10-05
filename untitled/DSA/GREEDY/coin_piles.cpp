///*
//PROBLEM STATEMENT:
//There are N piles of coins each containing  Ai (1<=i<=N) coins.
//Find the minimum number of coins to be removed such that
//the absolute difference of coins in any two piles is at most K.
//NOTE: You can also remove a pile by removing all the coins of that pile.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//struct Pile {
//    int value;
//    int quantity;
//};
//
//void printArray(Pile pile[], int n) {
//    cout << "value :    ";
//    for (int i = 0; i < n; i++) {
//        cout << pile[i].value << " ";
//    }
//    cout << '\n';
//
//    cout << "quantity : ";
//    for (int i = 0; i < n; i++) {
//        cout << pile[i].quantity << " ";
//    }
//    cout << '\n';
//}
//
//bool cmp(Pile pile1, Pile pile2) {
//    return pile1.quantity > pile2.quantity ? true : false;
//}
//
//int solve(int arr[], int n, int k) {
//    unordered_map<int, int> mp;
//    for (int i = 0; i < n; i++) {
//        mp[arr[i]]++;
//    }
//    if(mp.size()==1){
//        return 0;
//    }
//    Pile pile[mp.size()];
//    int i = 0;
//    for (auto itr:mp) {
//        pile[i].value = itr.first;
//        pile[i].quantity = itr.second;
//        i++;
//    }
//
//    cout << "\nPILE ARRAY BEFORE...\n";
//    printArray(pile, mp.size());
//    sort(pile, pile + mp.size(), cmp);
//    cout << "\nPILE ARRAY AFTER...\n";
//    printArray(pile, mp.size());
//
//    for (int j = 0; j < n; j++) {
//
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
//        int n, k;
//        cin >> n >> k;
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        cout << solve(arr, n, k) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//4 0
//2 2 2 2
//6 3
//1 5 1 2 5 1
//
//OUTPUT:
//
//*/