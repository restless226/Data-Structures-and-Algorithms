/*
PROBLEM STATEMENT:
Given an infinite number line. You start at 0 and can go either to the left or to the right.
The condition is that in the ith move,you must take i steps.
Given a destination D, find the minimum number of steps required to reach that destination.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int solve(int d) {

}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    int d;
    while (t--) {
        cin >> d;
        cout << "\nminimum number of steps required to reach d is : " << solve(d);
    }

    return 0;
}

/*
INPUT:


OUTPUT:

*/