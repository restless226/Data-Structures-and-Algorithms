/*
PROBLEM STATEMENT:
Given a list of string str[] and a prefix string pre.
The task is to count the number of words
in list of string with given prefix using trie.

Time Complexity: O(n*l) where n = number of words inserted in Trie
and l = length of longest word inserted in Trie.
*/

#include <bits/stdc++.h>

#define int long long int
#define ALPHABET_SIZE (26)
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
using namespace std;
const int mod = 1000000007;

struct TrieNode {
    char data;
    int pc; // prefix count
    TrieNode *children[26];
};

struct TrieNode *getNode() {
    struct TrieNode *node = NULL;
    node = (struct TrieNode *) malloc(sizeof(struct TrieNode));
    if (node) {
        node->pc = 0;
        for (int i = 0; i < ALPHABET_SIZE; i++) node->children[i] = NULL;
    }
    return node;
}

void insert(struct TrieNode *root, string key) {
    TrieNode *node = root;
    for (int i = 0; i < key.size(); i++) {
        int index = CHAR_TO_INDEX(key[i]);
        if (node->children[index] == NULL) {
            node->children[index] = new TrieNode();
        }
        node->children[index]->pc++;
        node = node->children[index];
    }
}

//TODO
int solve(vector<string> &words, int n, string &prefix) {
    struct TrieNode *root = getNode();
    TrieNode *node = root;
    for (int i = 0; i < n; i++) insert(root, words[i]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < words[i].size(); j++) {
            int index = CHAR_TO_INDEX(words[i][j]);
            if (node->children[index] == NULL
                || node->children[index]->pc == 0) {
                return 0;
            }
            node = node->children[index];
        }
    }
    return node->pc;
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
        vector<string> words(n);
        for (int i = 0; i < n; i++) cin >> words[i];
        string prefix;
        cin >> prefix;
        cout << solve(words, n, prefix) << '\n';
    }
    return 0;
}

/*
INPUT:
3
5
apk app apple arp array
ap
4
ababc abaxy abcd adb
ab
6
army arm arms ary amy api
ar

OUTPUT:
3
3
4
*/