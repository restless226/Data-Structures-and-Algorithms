/*
PROBLEM STATEMENT:
Given N activities with their start and finish day given in array start[ ] and end[ ].
Select the maximum number of activities that can be performed by a single person,
assuming that a person can only work on a single activity at a given day.
NOTE : Duration of the activity includes both starting and ending day.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

struct Activity {
    int start;
    int end;
};

void printArray(Activity activity[], int n) {
    cout << "start : ";
    for (int i = 0; i < n; i++) {
        cout << activity[i].start << " ";
    }
    cout << '\n';

    cout << "end :   ";
    for (int i = 0; i < n; i++) {
        cout << activity[i].end << " ";
    }
    cout << '\n';
}

bool cmp(Activity activity1, Activity activity2) {
    return activity1.end < activity2.end ? true : false;
}

int solve(vector<int> &start, vector<int> &end, int n) {
    Activity activity[n];
    for (int i = 0; i < n; i++) {
        activity[i].start = start.at(i);
        activity[i].end = end.at(i);
    }
    cout << "\nACTIVITY ARRAY BEFORE...\n";
    printArray(activity, n);
    sort(activity, activity + n, cmp);
    cout << "\nACTIVITY ARRAY AFTER...\n";
    printArray(activity, n);
    int ans = 1;
    int previous = activity[0].end;
    for (int i = 1; i < n; i++) {
        if (activity[i].start > previous) {
            ans++;
            previous = activity[i].end;
        }
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
        vector<int> start(n);
        vector<int> end(n);
        for (int i = 0; i < n; i++) {
            cin >> start[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> end[i];
        }
        int ans = solve(start, end, n);
        cout << "maximum number of activities is : " << ans << '\n';
    }
    return 0;
}

/*
INPUT:
2
2
2 1
2 2
4
1 3 2 5
2 4 3 6

OUTPUT:
ACTIVITY ARRAY BEFORE...
start : 2 1
end :   2 2

ACTIVITY ARRAY AFTER...
start : 2 1
end :   2 2
maximum number of activities is : 1

ACTIVITY ARRAY BEFORE...
start : 1 3 2 5
end :   2 4 3 6

ACTIVITY ARRAY AFTER...
start : 1 2 3 5
end :   2 3 4 6
maximum number of activities is : 3
*/