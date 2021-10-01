///*
//PROBLEM STATEMENT:
//Lucky numbers are subset of integers.
//Rather than going into much theory,
//let us see the process of arriving at lucky numbers.
//
//Take the set of integers
//1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,……
//
//First, delete every second number, we get following reduced set.
//1, 3, 5, 7, 9, 11, 13, 15, 17, 19,…………
//
//Now, delete every third number, we get
//1, 3, 7, 9, 13, 15, 19,….….
//
//Continue this process indefinitely……
//
//Any number that does NOT get deleted due to above process is called “lucky”.
//Return True if the given number is a lucky number else return False
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//bool solve(int n) {
//    static int counter = 2;
//    if (counter > n) {
//        return true;
//    }
//    if (n % counter == 0) {
//        return false;
//    }
//    int nextPosition = n;
//    nextPosition = n - (nextPosition / counter);
//    counter++;
//    return solve(nextPosition);
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
//        cout << solve(n) << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//4
//5
//19
//7
//74
//
//OUTPUT:
//1
//1
//0
//0
//*/