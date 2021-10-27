///*
//PROBLEM STATEMENT:
//Given an array of names (consisting of lowercase characters) of candidates in an election.
//A candidate name in array represents a vote casted to the candidate.
//Print the name of candidate that received Max votes.
//If there is tie, print lexicographically smaller name.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//vector<string> solve(string arr[], int n) {
//    unordered_map<string, int> mp;
//    string name;
//    int votes;
//    int mx = 0;
//    for (int i = 0; i < n; i++) {
//        mp[arr[i]]++;
//        mx = max(mx, mp[arr[i]]);
//    }
//    for (auto &itr:mp) {
//        if (itr.second == mx) {
//            if (name.empty() || itr.first < name) {
//                name = itr.first;
//                votes = itr.second;
//            }
//        }
//    }
//    return {name, to_string(votes)};
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
//        string arr[n];
//        for (int i = 0; i < n; i++) cin >> arr[i];
//        vector<string> result = solve(arr, n);
//        cout << result[0] << " " << result[1] << endl;
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//13
//john johnny jackie johnny john jackie jamie jamie john johnny jamie johnny john
//3
//andy blake clark
//
//OUTPUT:
//john 4
//andy 1
//*/