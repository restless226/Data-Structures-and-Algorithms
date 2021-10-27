///*
//PROBLEM STATEMENT:
//Given two numbers as stings s1 and s2. Calculate their Product.
//
//Expected Time Complexity: O(n1* n2)
//Expected Auxiliary Space: O(n1 + n2)
//where n1 and n2 are sizes of strings s1 and s2 respectively.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//string solve(string &s1, string &s2) {
//    int ans = 0;
//    int power1 = 0;
//    for (int i = s1.size() - 1; i >= 0; i--) {
//        int power2 = 0;
//        if (s1[i] == '-') break;
//        for (int j = s2.size() - 1; j >= 0; j--) {
//            if (s2[j] == '-') break;
//            ans += ((s1[i] - 48) * (int) pow(10, power1))
//                   * ((s2[j] - 48) * (int) pow(10, power2));
//            power2++;
//        }
//        power1++;
//    }
//    if ((s1[0] == '-' && s2[0] == '-') || (s1[0] != '-' && s2[0] != '-')) return to_string(ans);
//    else return '-' + to_string(ans);
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        string s1, s2;
//        cin >> s1;
//        cin >> s2;
//        cout << solve(s1, s2) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//6
//33 2
//11 23
//3 2
//19 4
//4416 -333
//10 0
//
//OUTPUT:
//66
//253
//6
//76
//-1470528
//0
//*/