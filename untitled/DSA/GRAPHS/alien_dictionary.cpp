/*
PROBLEM STATEMENT:
Given a sorted dictionary of an alien language having
N words and k starting alphabets of standard dictionary.
Find the order of characters in the alien language.
Note: Many orders may be possible for a particular test case,
thus you may return any valid order and output will be 1
if the order of string returned by the function is correct
else 0 denoting incorrect string returned.

PREREQUISITE: Topological Sorting

Expected Time Complexity: O(N * |S| + K) , where |S| denotes maximum length.
Expected Space Complexity: O(K)
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

void dfs(vector<vector<int>> &graph, vector<bool> &visited, int node, string &ans) {
    visited[node] = true;
    for (auto &vertex : graph[node]) {
        if (!visited[vertex]) {
            dfs(graph, visited, vertex, ans);
        }
    }
    ans.push_back(node + 'a');
}

string solve(string dict[], int N, int K) {
    vector<vector<int>> graph(K);
    for (int i = 0; i < N - 1; i++) {
        string w1 = dict[i];
        string w2 = dict[i + 1];
        for (int j = 0; j < min(w1.length(), w2.length()); j++) {
            if (w1[j] != w2[j]) {
                graph[w1[j] - 'a'].push_back(w2[j] - 'a');
                break;
            }
        }
    }
    vector<bool> visited(K, false);
    string ans;
    for (int i = 0; i < K; i++) {
        if (!visited[i]) dfs(graph, visited, i, ans);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

string order;

bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
    }
    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();
    return p1 < p2;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        string ans = solve(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];
        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);
        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;
        if (f) cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}

/*
INPUT:
2
5 4
baa abcd abca cab cada
3 3
caa aaa aab

OUTPUT:
1
1
*/