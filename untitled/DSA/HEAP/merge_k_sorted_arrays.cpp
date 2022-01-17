/*
PROBLEM STATEMENT:
Given K sorted arrays arranged in the form of a matrix of size K*K.
The task is to merge them into one sorted array.
*/

#include <bits/stdc++.h>
#define N 105
#define int long long
using namespace std;
typedef pair<int, int> pii;
const int mod = 1000000007;

vector<int> solve(vector<vector<int>> &arr, int k) {
    vector<int> ans;
    priority_queue<pii, vector<pii>, greater<pii>> mnh;
    vector<int> indices(k, 0);
    for (int i = 0; i < k; i++) {
        mnh.push({arr[i][0], i});
    }
    while (!mnh.empty()) {
        pii pair = mnh.top();
        mnh.pop();
        ans.push_back(pair.first);
        indices[pair.second]++;
        if (indices[pair.second] < k) {
            mnh.push({arr[pair.second][indices[pair.second]], pair.second});
        }
    }
    return ans;
}


void printArray(vector<int> arr, int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<vector<int>> arr(N, vector<int>(N, 0));
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                cin >> arr[i][j];
            }
        }
        vector<int> output = solve(arr, k);
        printArray(output, k * k);
        cout << endl;
    }
    return 0;
}

/*
INPUT:
2
3
1 2 3
4 5 6
7 8 9
4
1 2 3 4
2 2 3 4
5 5 6 6
7 8 9 9

OUTPUT:
1 2 3 4 5 6 7 8 9
1 2 2 2 3 3 4 4 5 5 6 6 7 8 9 9
*/