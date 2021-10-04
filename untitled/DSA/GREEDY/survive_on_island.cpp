///*
//PROBLEM STATEMENT:
//Ishika got stuck on an island. There is only one shop on this island and
//it is open on all days of the week except for Sunday.
//Consider following constraints:
//N – The maximum unit of food you can buy each day.
//S – Number of days you are required to survive.
//M – Unit of food required each day to survive.
//Currently, it’s Monday, and she needs to survive for the next S days.
//Find the minimum number of days on which you need to buy food from the shop so that
//she can survive the next S days, or determine that it isn’t possible to survive.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//int solve(int s, int n, int m) {
//    int x = (s / 7);
//    int y = s - x;
//    int sm = s * m;
//    int days = sm / n;
//    if (sm % n != 0) {
//        days++;
//    }
//    if (days <= y) {
//        return days;
//    } else {
//        return -1;
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
//        int s, n, m;
//        cin >> s >> n >> m;
//        cout << solve(s, n, m) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//10 16 2
//10 20 30
//
//OUTPUT:
//2
//-1
//*/