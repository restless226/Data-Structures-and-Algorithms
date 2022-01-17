/*
PROBLEM STATEMENT:
Every house in the colony has at most one pipe going into it and at most one pipe going out of it.
Tanks and taps are to be installed in a manner such that every house with one outgoing pipe
but no incoming pipe gets a tank installed on its roof and every house with only an incoming pipe and no outgoing pipe gets a tap.
Given two integers n and p denoting the number of houses and the number of pipes.
The connections of pipe among the houses contain three input values: ai, bi, di denoting the pipe of diameter di
from house ai to house bi. Find the efficient way for the construction of the network of pipes.
The output will contain the number of pairs of tanks and taps t installed in first line and the next t lines contain three integers:
house number of tank, house number of tap and the minimum diameter of pipe between them.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

vector<vector<int>> solve(int n, int p, vector<int> &a, vector<int> &b, vector<int> &d) {

}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> a(p), b(p), d(p);
        for (int i = 0; i < p; i++) {
            cin >> a[i] >> b[i] >> d[i];
        }
        vector<vector<int>> answer = solve(n, p, a, b, d);
        cout << answer.size() << endl;
        for (auto i:answer) {
            cout << i[0] << " " << i[1] << " " << i[2] << endl;
        }
    }
    return 0;
}

/*
INPUT:


OUTPUT:

*/