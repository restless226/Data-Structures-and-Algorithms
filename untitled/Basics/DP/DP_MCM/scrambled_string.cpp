///*
//PROBLEM STATEMENT:
//Given two strings A and B of the same length,
//determine if B is a scrambled string of A.
//To scramble the string, we may choose any non-leaf node and swap its two children.
//Return an integer, 0 or 1:
//    => 0 : False
//    => 1 : True
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//unordered_map<string, bool> mp;
//// key -> a + " " + b
//
//bool scrambled_string_MEMOIZED(string a, string b) {
//
//    // base case
//    if (a == b) {
//        return true;
//    }
//
//    if (a.length() <= 1) {
//        return false;
//    }
//
//    string key = a;
//    key.push_back(' ');
//    key.append(b);
//
//    // memoization block check
//    if (mp.find(key) != mp.end()) {
//        mp[key];
//    }
//
//    int n = a.length();
//
//    bool flag = false;    // assuming initially not scrambled
//    bool condition1, condition2;
//    bool s1, s2;     // swapping occurred   (swapped_1, swapped_2)
//    bool ns1, ns2;   // swapping not occurred   (not_swapped_1, not_swapped_2)
//
//
//    for (int i = 1; i <= n - 1; i++) {
//
//        // case 1 : swapping occurred at ith index
//        if (mp.find(a.substr(0, i) + " " + b.substr(n - i, i)) != mp.end()) {
//            s1 = mp[a.substr(0, i) + " " + b.substr(n - i, i)];
//        } else {
//            s1 = scrambled_string_MEMOIZED(a.substr(0, i), b.substr(n - i, i));
//            mp[a.substr(0, i) + " " + b.substr(n - i, i)] = s1;
//        }
//
//        if (mp.find(a.substr(i, n - i) + " " + b.substr(0, n - i)) != mp.end()) {
//            s2 = mp[a.substr(i, n - i) + " " + b.substr(0, n - i)];
//        } else {
//            s2 = scrambled_string_MEMOIZED(a.substr(i, n - i), b.substr(0, n - i));
//            mp[a.substr(i, n - i) + " " + b.substr(0, n - i)] = s2;
//        }
//
//
//        // case 2 : swapping not occurred at ith index
//        // however swapping may have occurred at indices other than i
//        if (mp.find(a.substr(0, i) + " " + b.substr(0, i)) != mp.end()) {
//            ns1 = mp[a.substr(0, i) + " " + b.substr(0, i)];
//        } else {
//            ns1 = scrambled_string_MEMOIZED(a.substr(0, i), b.substr(0, i));
//            mp[a.substr(0, i) + " " + b.substr(0, i)] = ns1;
//        }
//
//        if (mp.find(a.substr(i, n - i) + " " + b.substr(i, n - i)) != mp.end()) {
//            ns2 = mp[a.substr(i, n - i) + " " + b.substr(i, n - i)];
//        } else {
//            ns2 = scrambled_string_MEMOIZED(a.substr(i, n - i), b.substr(i, n - i));
//            mp[a.substr(i, n - i) + " " + b.substr(i, n - i)] = ns2;
//        }
//
//        condition1 = s1 & s2;
//        condition2 = ns1 & ns2;
//
////        condition1 = scrambled_string_MEMOIZED(a.substr(0, i), b.substr(n - i, i))
////                     && scrambled_string_MEMOIZED(a.substr(i, n - i), b.substr(0, n - i));
////
////        condition2 = scrambled_string_MEMOIZED(a.substr(0, i), b.substr(0, i))
////                     && scrambled_string_MEMOIZED(a.substr(i, n - i), b.substr(i, n - i));
//
//        if (condition1 || condition2) {
//            flag = true;
//            break;
//        }
//    }
//
//    mp[key] = flag;
//    return flag;
//}
//
//
//bool scrambled_string_RECURSIVE(string a, string b) {
//
//    // base case
//    if (a == b) {
//        return true;
//    }
//
//    if (a.length() <= 1) {
//        return false;
//    }
//
//    int n = a.length();
//
//    bool flag = false;    // assuming initially not scrambled
//
//    for (int i = 1; i <= n - 1; i++) {
//        // case 1 : swapping occurred at ith index
//        bool condition1 = scrambled_string_RECURSIVE(a.substr(0, i), b.substr(n - i, i))
//                          && scrambled_string_RECURSIVE(a.substr(i, n - i), b.substr(0, n - i));
//
//        // case 2 : swapping not occurred at ith index
//        // however swapping may have occurred at indices other than i
//        bool condition2 = scrambled_string_RECURSIVE(a.substr(0, i), b.substr(0, i))
//                          && scrambled_string_RECURSIVE(a.substr(i, n - i), b.substr(i, n - i));
//
//        if (condition1 || condition2) {
//            flag = true;
//            break;
//        }
//    }
//
//    return flag;
//}
//
//int32_t main() {
//    cin.tie(NULL);
//    cout.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    string a, b;
//
//    while (t--) {
//
//        cin >> a >> b;
//
//        // invalid cases
//        if (a.length() != b.length()) {
//            cout << "\nnot possible as a and b have different lengths\n";
//        }
//        if (a.length() == 0 || b.length() == 0) {
//            cout << "\nyes\n";
//        }
//
//        mp.clear();
//        cout << "\nscrambled_string_RECURSIVE -> ";
//        if (scrambled_string_RECURSIVE(a, b)) {
//            cout << "yes\n";
//        } else {
//            cout << "no\n";
//        }
//
//        cout << "scrambled_string_MEMOIZED -> ";
//        if (scrambled_string_MEMOIZED(a, b)) {
//            cout << "yes\n";
//        } else {
//            cout << "no\n";
//        }
//
//    }
//
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//2
//great rgeat
//phqtrnilf ilthnqrpf
//
//scrambled_string_RECURSIVE -> yes
//scrambled_string_MEMOIZED -> yes
//
//scrambled_string_RECURSIVE -> no
//scrambled_string_MEMOIZED -> no
//*/