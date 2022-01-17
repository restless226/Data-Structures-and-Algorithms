/*
PROBLEM STATEMENT:
There are M job applicants and N jobs.
Each applicant has a subset of jobs that he/she is interested in.
Each job opening can only accept one applicant and a job applicant can be appointed for only one job.
Given a matrix G where G(i,j) denotes ith applicant is interested in jth job.
Find an assignment of jobs to applicant in such that as many applicants as possible get jobs.

Expected Time Complexity: O(N3)
Expected Auxiliary Space: O(N)
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int solve(vector<vector<int>> &graph) {

}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> graph(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                cin >> graph[i][j];
        }
        cout << solve(graph) << "\n";
    }
    return 0;
}

/*
INPUT:
2
3 5
1 1 0 1 1
0 1 0 0 1
1 1 0 1 1
5 2
1 1
0 1
0 1
0 1
1 0

OUTPUT:

*/