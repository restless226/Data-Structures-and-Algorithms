/*
PROBLEM STATEMENT:
A gallery with plants is divided into n parts, numbered : 0,1,2,3...n-1.
There are provisions for attaching water sprinklers at every partition.
A sprinkler with range x at partition i can water all partitions from i-x to i+x.
Given an array gallery[ ] consisting of n integers,
where gallery[i] is the range of sprinkler at partition i
(power == -1 indicates no sprinkler attached),
return the minimum number of sprinklers that need to be turned on to water the complete gallery.
If there is no possible way to water the full length using the given sprinklers, print -1.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

void print_array(vector<pair<int, int>> sprinkler, int n) {
    cout << "start : ";
    for (int i = 0; i < n; i++) {
        cout << sprinkler[i].first << " ";
    }
    cout << '\n';

    cout << "end :   ";
    for (int i = 0; i < n; i++) {
        cout << sprinkler[i].second << " ";
    }
    cout << '\n';
}

int solve(int gallery[], int n) {
    vector<pair<int, int>> sprinkler;
    for (int i = 0; i < n; i++) {
        if (gallery[i] > -1) {
            sprinkler.emplace_back(i - gallery[i], i + gallery[i]);
        }
    }
    cout << "\nSPRINKLER ARRAY BEFORE...\n";
    print_array(sprinkler, sprinkler.size());
    sort(sprinkler.begin(), sprinkler.end());
    cout << "\nSPRINKLER ARRAY AFTER...\n";
    print_array(sprinkler, sprinkler.size());
    int max_left = 0;    // stores leftmost range of a sprinkler
    int max_right = 0;   // stores rightmost range of a sprinkler
    int ans = 0;
    while (max_right < n) {
        if (max_left == sprinkler.size() || sprinkler[max_left].first > max_right) {
            return -1;
        }
        // stores the rightmost boundary of current sprinkler
        int max_range = sprinkler[max_left].second;
        while (max_left + 1 < sprinkler.size() && sprinkler[max_left + 1].first <= max_right) {
            max_left++;
            max_range = max(max_range, sprinkler[max_left].second);
        }
        if (max_range < max_right) {
            return -1;
        }
        ans++;
        max_right = max_range + 1;
        max_left++;
    }
    return ans;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int gallery[n];
        for (int i = 0; i < n; i++)
            cin >> gallery[i];
        cout << solve(gallery, n) << '\n';
    }
    return 0;
}

/*
INPUT:
3
8
1 0 4 2 0 6 2 4
6
-1 2 2 -1 0 0
9
2 3 4 -1 2 0 0 -1 0


OUTPUT:
SPRINKLER ARRAY BEFORE...
start : -1 1 -2 1 4 -1 4 3
end :   1 1 6 5 4 11 8 11

SPRINKLER ARRAY AFTER...
start : -2 -1 -1 1 1 3 4 4
end :   6 1 11 1 5 11 4 8
1

SPRINKLER ARRAY BEFORE...
start : -1 0 4 5
end :   3 4 4 5

SPRINKLER ARRAY AFTER...
start : -1 0 4 5
end :   3 4 4 5
2

SPRINKLER ARRAY BEFORE...
start : -2 -2 -2 2 5 6 8
end :   2 4 6 6 5 6 8

SPRINKLER ARRAY AFTER...
start : -2 -2 -2 2 5 6 8
end :   2 4 6 6 5 6 8
-1
*/