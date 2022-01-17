/*
PROBLEM STATEMENT:
Given a dictionary of distinct words and an M x N board where every cell has one character.
Find all possible words from the dictionary that can be formed by a sequence of adjacent characters on the board.
We can move to any of 8 adjacent characters, but a word should not have multiple instances of the same cell.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(vector<vector<char> > &board, unordered_set<string> &wordList, vector<vector<bool>> &visited,
         int n, int m, int i, int j, vector<string> &ans) {
    if (i < 0 || i >= n || j < 0 || j >= m || visited[i][j]) return;
    visited[i][j] = true;
    for (int k = 0; k < 8; k++) {
        dfs(board, wordList, visited, n, m, i + dx[k], j + dy[k], ans);
    }
}

vector<string> solve(vector<vector<char> > &board, vector<string> &dictionary) {
    int n = board.size();
    int m = board[0].size();
    unordered_set<string> wordList;
    for (string &word:dictionary) {
        wordList.insert(word);
    }
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<string> ans;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> dictionary;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            dictionary.push_back(s);
        }

        int R, C;
        cin >> R >> C;
        vector<vector<char> > board(R);
        for (int i = 0; i < R; i++) {
            board[i].resize(C);
            for (int j = 0; j < C; j++) cin >> board[i][j];
        }
        vector<string> output = solve(board, dictionary);
        if (output.size() == 0)
            cout << "-1";
        else {
            sort(output.begin(), output.end());
            for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
INPUT:


OUTPUT:

*/