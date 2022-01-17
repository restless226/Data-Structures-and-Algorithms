/*
PROBLEM STATEMENT:
Given an array of strings products and a string searchWord.
We want to design a system that suggests at most three product names
from products after each character of searchWord is typed.
Suggested products should have common prefix with the searchWord.
If there are more than three products with a common prefix
return the three lexicographically minimums products.
Return list of lists of the suggested products after each character of searchWord is typed.
*/

#include <bits/stdc++.h>

#define int long long int
#define ALPHABET_SIZE 26
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
using namespace std;
const int mod = 1000000007;

struct TrieNode {
    string word;
    TrieNode *children[26];
};

TrieNode *buildTrie(vector<string> &products) {
    TrieNode *root = new TrieNode();
    for (int i = 0; i < products.size(); i++) {
        TrieNode *temp = root;
        for (int j = 0; j < products[i].size(); j++) {
            if (temp->children[CHAR_TO_INDEX(products[i][j])] == NULL) {
                temp->children[CHAR_TO_INDEX(products[i][j])] = new TrieNode();
            }
            temp = temp->children[CHAR_TO_INDEX(products[i][j])];
        }
        temp->word = products[i];
    }
    return root;
}

void dfs(TrieNode *root, vector<string> &temp) {
    if (root == NULL || temp.size() == 3) return;
    if (!root->word.empty()) temp.push_back(root->word);
    for (int i = 0; i < ALPHABET_SIZE; i++) dfs(root->children[i], temp);
}

vector<vector<string>> solve(vector<string> &products, string &searchWord) {
    TrieNode *root = buildTrie(products);
    int n = searchWord.size();
    vector<vector<string>> ans;
    for (int i = 0; i < n; i++) {
        vector<string> temp;
        if (root->children[CHAR_TO_INDEX(searchWord[i])] == NULL) {
            while (i++ < n) ans.push_back(temp);
            return ans;
        } else {
            root = root->children[CHAR_TO_INDEX(searchWord[i])];
            dfs(root, temp);
            ans.push_back(temp);
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
        vector<string> products(n);
        for (int i = 0; i < n; i++) cin >> products[i];
        string word;
        cin >> word;
        vector<vector<string>> ans = solve(products, word);
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < ans[i].size(); j++) {
                cout << ans[i][j] << " ";
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}

/*
INPUT:
2
1
havana
havana
5
mobile mouse moneypot monitor mousepad
mouse

OUTPUT:
havana
havana
havana
havana
havana
havana

mobile moneypot monitor
mobile moneypot monitor
mouse mousepad
mouse mousepad
mouse mousepad
*/