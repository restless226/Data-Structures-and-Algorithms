//#include <map>
//#include <set>
//#include <list>
//#include <cmath>
//#include <ctime>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <string>
//#include <bitset>
//#include <cstdio>
//#include <limits>
//#include <vector>
//#include <climits>
//#include <cstring>
//#include <cstdlib>
//#include <fstream>
//#include <numeric>
//#include <sstream>
//#include <iostream>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//void solve(vector<int> input, vector<int> output, unordered_map<int, int> &mp, int n) {
//    if (input.empty() ) {
//        if(output.size()!=n){
//            int product = 1;
//            for (auto itr : output) {
//                cout << itr << " ";
//            }
//            cout << '\n';
//            for (auto itr : output) {
//                product *= itr;
//            }
//            mp[product]++;
//        }
//        return;
//    }
//    vector<int> output1 = output;
//    vector<int> output2 = output;
//    output2.push_back(input[0]);
//    input.erase(input.begin());
//    solve(input, output1, mp, n);
//    solve(input, output2, mp, n);
//}
//
//void countStablePartitions(int n, vector<int> &input) {
//    vector<int> output;
//    unordered_map<int, int> mp;
//    vector<pair<int, int>> ans;
//    solve(input, output, mp, n);
//    for (auto itr : mp) {
////        cout << itr.first << " " << itr.second << '\n';
//        ans.emplace_back(itr.first, itr.second);
//    }
//    int count = 0;
//    for (int i = 0; i < ans.size() - 1; i++) {
//        for (int j = i + 1; j < ans.size(); j++) {
//            if (__gcd(ans[i].first, ans[j].first) == 1) {
//                count += (ans[i].second * ans[j].second);
//            }
//        }
//    }
//    cout << count << '\n';
//}
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> values(n);
//    for (int i = 0; i < n; ++i) {
//        cin >> values[i];
//    }
//    countStablePartitions(n, values);
//    return 0;
//}
