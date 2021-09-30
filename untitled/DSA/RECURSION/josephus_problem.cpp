///*
//PROBLEM STATEMENT:
//There are n people standing in a circle (numbered clockwise 1 to n) waiting to be executed.
//The counting begins at point 1 in the circle and proceeds around the circle in a fixed direction (clockwise).
//In each step, a certain number of people are skipped and the next person is executed.
//The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed),
//until only the last person remains, who is given freedom.
//Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle.
//The task is to choose the place in the initial circle so that you are the last one remaining and so survive.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//void solve(vector<int> &persons, int k, int sword_index, int &ans) {
//    // base condition
//    if (persons.size() == 1) {
//        ans = persons[0];
//        return;
//    }
//    // hypothesis
//    sword_index = (sword_index + k) % ((int) persons.size());
//    persons.erase(persons.begin() + sword_index);
//    solve(persons, k, sword_index, ans);
//    // induction - nothing to do
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
//        vector<int> persons(n);
//        for (int i = 0; i < n; i++) {
//            persons[i] = i + 1;
//        }
//        int sword_index = 0;
//        int ans = -1;
//        solve(persons, k - 1, sword_index, ans);
//        cout << ans << '\n';
//    }
//    return 0;
//}
//
///*
//INPUT:
//4
//40 7
//5 2
//2 1
//4 2
//
//OUTPUT:
//24
//3
//2
//1
//*/