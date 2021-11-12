///*
//PROBLEM STATEMENT:
//Trie is an efficient information retrieval data structure.
//Use this data structure to store Strings and search strings.
//Your task is to use TRIE data structure and search the given string A.
//If found print 1 else 0.
//*/
//
//#include <bits/stdc++.h>
//
//#define ALPHABET_SIZE (26)
//#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
//#define int long long int
//using namespace std;
//const int mod = 1000000007;
//
//struct TrieNode {
//    struct TrieNode *children[ALPHABET_SIZE];
//    bool isLeaf;    // isLeaf is true if the node represents end of a word
//};
//
//struct TrieNode *getNode() {
//    struct TrieNode *pNode = NULL;
//    pNode = (struct TrieNode *) malloc(sizeof(struct TrieNode));
//    if (pNode) {
//        pNode->isLeaf = false;
//        for (int i = 0; i < ALPHABET_SIZE; i++) pNode->children[i] = NULL;
//    }
//    return pNode;
//}
//
//void insert(struct TrieNode *root, string key) {
//    TrieNode *node = root;
//    for (int i = 0; i < key.size(); i++) {
//        int index = CHAR_TO_INDEX(key[i]);
//        if (node->children[index] == NULL) {
//            node->children[index] = new TrieNode();
//        }
//        node = node->children[index];
//    }
//    node->isLeaf = true;
//}
//
//bool search(struct TrieNode *root, string key) {
//    TrieNode *node = root;
//    for (int i = 0; i < key.size(); i++) {
//        int index = CHAR_TO_INDEX(key[i]);
//        if (node->children[index] == NULL) return false;
//        node = node->children[index];
//    }
//    return (node->isLeaf) ? true : false;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        // Input keys (use only 'a' through 'z' and lower case)
//        int n;
//        cin >> n;
//        string keys[n];
//        for (int i = 0; i < n; i++) cin >> keys[i];
//        struct TrieNode *root = getNode();
//        // Construct trie
//        for (int i = 0; i < n; i++) insert(root, keys[i]);
//        string abc;
//        cin >> abc;
//        // Search for different keys
//        if (search(root, abc)) cout << "1\n";
//        else cout << "0\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//8
//the a there answer any by bye their
//the
//8
//the a there answer any by bye their
//geeks
//
//OUTPUT:
//1
//0
//*/