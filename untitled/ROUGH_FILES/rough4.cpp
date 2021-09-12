//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//
//float solve() {
//    int n;
//    cin >> n;
//
//    string s;
//    float count = 0;
//    bool isLeft;
//    unordered_map<string, float> mp;
//
//    for (int i = 0; i < n; i++) {
//        cin >> s;
//        if (mp.find(s) != mp.end()) {
//            count += mp[s] / 2;
//        } else {
//            mp[s] = count;
//
//            isLeft = false;
//            if (s[0] == 'd' || s[0] == 'f') {
//                isLeft = true;
//            }
//            count += 0.2;
//
//            for (int j = 1; j < s.length(); j++) {
//                if ((isLeft && (s[j] == 'j' || s[j] == 'k'))
//                    || (!isLeft && (s[j] == 'd' || s[j] == 'f'))) {
//                    // s[j] is different than previous (s[j-1])
//                    isLeft = !isLeft;
//                    count += 0.2;
//                } else {
//                    // s[j] is same as previous (s[j-1])
//                    count += 0.4;
//                }
//            }
//
//            mp[s] = count - mp[s];
//        }
////        cout << "count : " << count << "\n";
//    }
//    return count;
//}
//
//int32_t main() {
//    cin.tie(NULL);
//    cout.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//
//    while (t--) {
//        cout << (int) (solve() * 10) << '\n';
//    }
//
//    return 0;
//}