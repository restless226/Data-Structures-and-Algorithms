///*
//PROBLEM STATEMENT:
//A celebrity is a person who is known to all but does not know anyone at a party.
//If you go to a party of N people, find if there is a celebrity in the party or not.
//A square NxN matrix M[][] is used to represent people at the party such that
//if an element of row i and column j  is set to 1 it means ith person knows jth person.
//Here M[i][i] will always be 0.
//Return the index of the celebrity if present. If no such celebrity is present, return -1.
//Note: Follow 0 based indexing.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//
//// TODO
//// using stack
//int celebrity(vector<vector<int> > &mat, int n) {
//
//}
//
//// without using stack
//int solve(vector<vector<int> > &mat, int n) {
//    unordered_map<int, int> mp;
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (mat[i][j] == 1 && mat[j][i] == 0) {
//                mp[j]++;
//            } else if (mat[i][j] == 0 && mat[j][i] == 1) {
//                mp[i]++;
//            }
//        }
//    }
//    int flag = -1;
//    for (auto itr:mp) {
//        if (itr.second == n - 1) {
//            flag = itr.first;
//            break;
//        }
//    }
//    return flag;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n;
//        cin >> n;
//        vector<vector<int> > mat(n, vector<int>(n, 0));
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                cin >> mat[i][j];
//            }
//        }
//        cout << solve(mat, n) << '\n';
//    }
//
//    return 0;
//}
//
///*
//OUTPUT:
//2
//3
//0 1 0 0 0 0 0 1 0
//2
//0 1 1 0
//1 2
//
//1
//-1
//*/