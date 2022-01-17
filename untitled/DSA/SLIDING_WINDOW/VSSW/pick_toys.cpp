/*
Problem Description:
John is at a toy store help him pick maximum number of toys.
He can only select in a continuous manner and he can select only two types of toys.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;


int solve(string s) {
    int i = 0;
    int j = 0;
    int ans = 0;
    unordered_map<char, int> mp;
    mp.clear();

    while (j < s.size()) {
        // calculation of j
        mp[s[j]]++;

        if (mp.size() < 2) {
            j++;
        } else if (mp.size() == 2) {
            // calculation of ans
            ans = max(ans, j - i + 1);
            j++;
        } else if (mp.size() > 2) {
            // calculation of i
            while (mp.size() > 2) {
                mp[s[i]]--;
                if (mp[s[i]] == 0) {
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }

    return ans;
}

int32_t main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    string s;

    while (t--) {
        cin >> s;
        cout << "\nmaximum number of toys can be picked is : " << solve(s);
    }

    return 0;
}

/*
OUTPUT:
1
abaccab

maximum number of toys can be picked is : 4
*/