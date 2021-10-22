///*
//PROBLEM STATEMENT:
//Given a non-empty array of integers, find the top k elements which have the highest frequency in the array.
//If two numbers have the same frequency then the larger number should be given preference.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//typedef pair<int, int> pii;
//
//vector<int> solve(vector<int> &nums, int k) {
//    priority_queue<pii, vector<pii>, greater<pii>> mnh;
//    unordered_map<int, int> mp;
//    for (int i = 0; i < nums.size(); i++) {
//        mp[nums[i]]++;
//    }
//    vector<int> ans;
//    for (auto &itr:mp) {
//        mnh.push({itr.second, itr.first});
//        if (mnh.size() > k) {
//            mnh.pop();
//        }
//    }
//    while (!mnh.empty()) {
//        ans.push_back(mnh.top().second);
//        mnh.pop();
//    }
//    reverse(ans.begin(), ans.end());
//    return ans;
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
//        vector<int> nums(n);
//        for (auto &i : nums) cin >> i;
//        int k;
//        cin >> k;
//        vector<int> ans = solve(nums, k);
//        for (auto i : ans) cout << i << " ";
//        cout << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//6
//1 1 1 2 2 3
//2
//8
//1 1 2 2 3 3 3 4
//2
//
//OUTPUT:
//1 2
//3 2
//*/
//
