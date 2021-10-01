/*
PROBLEM STATEMENT:
We have N persons sitting on a round table.
Any person can do a handshake with any other person.
     1
2         3
     4
Handshake with 2-3 and 1-4 will cause cross.
In how many ways these N people can make handshakes
so that no two handshakes cross each other. N would be even.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int solve(int n) {

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
        cout << solve(n) << '\n';
    }
    return 0;
}

/*
INPUT:


OUTPUT:

*/