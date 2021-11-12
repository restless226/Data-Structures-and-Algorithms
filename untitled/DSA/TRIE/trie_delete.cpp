///*
//PROBLEM STATEMENT:
//Trie is an efficient information retrieval data structure.
//This data structure is used to store Strings and search strings,
//String stored can also be deleted.
//Given a Trie root for a larger string super and a string key,
//delete all the occurrences of key in the Trie.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long int
//#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
//#define MAX 10^19
//#define ALPHABET_SIZE (26)
//#define INDEX(c) ((int)c - (int)'a')
//#define FREE(p) free(p);p = NULL;
//using namespace std;
//const int mod = 1000000007;
//
//typedef struct trie_node trie_node_t;   // forward declaration
//
//struct trie_node {
//    int value;
//    trie_node_t *children[ALPHABET_SIZE];
//};
//
//typedef struct trie trie_t; // trie ADT
//
//struct trie {
//    trie_node_t *root;
//    int count;
//};
//
//trie_node_t *getNode() {
//    trie_node_t *pNode = NULL;
//    pNode = (trie_node_t *) malloc(sizeof(trie_node_t));
//    if (pNode) {
//        pNode->value = 0;
//        for (int i = 0; i < ALPHABET_SIZE; i++) {
//            pNode->children[i] = NULL;
//        }
//    }
//    return pNode;
//}
//
//void initialize(trie_t *pTrie) {
//    pTrie->root = getNode();
//    pTrie->count = 0;
//}
//
//void insert(trie_t *pTrie, char key[]) {
//    int level;
//    int length = strlen(key);
//    int index;
//    trie_node_t *pCrawl;
//    pTrie->count++;
//    pCrawl = pTrie->root;
//    for (level = 0; level < length; level++) {
//        index = INDEX(key[level]);
//        if (pCrawl->children[index]) {
//            // Skip current node
//            pCrawl = pCrawl->children[index];
//        } else {
//            // Add new node
//            pCrawl->children[index] = getNode();
//            pCrawl = pCrawl->children[index];
//        }
//    }
//    // mark last node as leaf (non zero)
//    pCrawl->value = pTrie->count;
//}
//
//int ifExist(trie_t *pTrie, char key[]) {
//    int level;
//    int length = strlen(key);
//    int index;
//    trie_node_t *pCrawl;
//    pCrawl = pTrie->root;
//    if (!pCrawl) return 0;
//    for (level = 0; level < length; level++) {
//        index = INDEX(key[level]);
//        if (!pCrawl->children[index]) return 0;
//        pCrawl = pCrawl->children[index];
//    }
//    if (pCrawl && pCrawl->value) return 1;
//    else return 0;
//}
//
//int compare_strings(char a[], char b[]) {
//    if (strlen(a) != strlen(b)) return 1;
//    for (int i = 0; i < strlen(a); i++) {
//        if (a[i] != b[i]) return 1;
//    }
//    return 0;
//}
//
//void solve(trie_node_t *root, string word, int index) {
//    if (root == NULL) return;
//    if (index == word.size()) {
//        root->value = 0;
//        return;
//    }
//    return solve(root->children[INDEX(word[index])], word, index + 1);
//}
//
//void deleteKey(trie_node_t *root, char key[]) {
//    if (root == NULL) return;
//    string word;
//    int i = 0;
//    while (key[i] != '\0') {
//        word += key[i];
//        i++;
//    }
//    solve(root, word, 0);
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        char keys[MAX][MAX];
//        for (int i = 0; i < n; i++) {
//            fflush(stdin);
//            cin >> keys[i];
//        }
//        trie_t trie;
//        initialize(&trie);
//        for (int i = 0; i < n; i++) insert(&trie, keys[i]);
//        char abc[MAX];
//        fflush(stdin);
//        cin >> abc;
//        deleteKey(trie.root, abc);
//        if (ifExist(&trie, abc) == false) {
//            int f1 = 0;
//            for (int i = 0; i < n; i++) {
//                if (compare_strings(keys[i], abc)) {
//                    if (ifExist(&trie, keys[i]) == false) {
//                        f1 = 1;
//                        break;
//                    }
//                }
//            }
//            if (f1) cout << "0";
//            else cout << "1";
//        } else {
//            cout << "0";
//        }
//        cout << endl;
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
//1
//*/