/*
PROBLEM STATEMENT:
Given two distinct words startWord and targetWord,
and a list denoting wordList of unique words of equal lengths.
Find the length of the shortest transformation sequence from startWord to targetWord.
Keep the following conditions in mind:
1. A word can only consist of lowercase characters.
2. Only one letter can be changed in each transformation.
3. Each transformed word must exist in the wordList including the targetWord.
4. startWord may or may not be part of the wordList.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

int solve(string &startWord, string &targetWord, vector<string> &wordList) {
    unordered_set<string> wl;
    bool isPresent = false;
    for (string &word:wordList) {
        if (targetWord == word) {
            isPresent = true;
        }
        wl.insert(word);
    }
    if (!isPresent) return 0;
    queue<string> queue;
    queue.push(startWord);
    int level = 0;
    while (!queue.empty()) {
        int size = queue.size();
        level++;
        while (size--) {
            string currentWord = queue.front();
            queue.pop();
            for (int i = 0; i < currentWord.length(); i++) {
                string temp = currentWord;
                for (char c = 'a'; c <= 'z'; c++) {
                    temp[i] = c;
                    if (currentWord == temp) continue;
                    if (temp == targetWord) return level + 1;
                    if (wl.find(temp) != wl.end()) {
                        queue.push(temp);
                        wl.erase(temp);
                    }
                }
            }
        }
    }
    return 0;
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
        vector<string> wordList(n);
        for (int i = 0; i < n; i++)cin >> wordList[i];
        string startWord, targetWord;
        cin >> startWord >> targetWord;
        cout << solve(startWord, targetWord, wordList) << "\n";
    }
    return 0;
}

/*
INPUT:
4
5
des
der
dfr
dgt
dfs
der dfs
6
hot
dot
dog
lot
log
cog
hit cog
7
poon
plee
same
poie
plea
plie
poin
toon plea
2
geek
gefk
gedk geek

OUTPUT:
3
5
7
2
*/