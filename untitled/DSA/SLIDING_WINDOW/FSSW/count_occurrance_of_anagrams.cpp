/*
Count Occurrences Of Anagrams | Sliding Window
PROBLEM STATEMENT:
Given a word pat and a text txt.
Return the count of the occurrence of anagrams of the word in the text.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;


int count_occurrence_of_anagrams_2(string pat, string txt) {
    unordered_map<char, int> map_txt;
    unordered_map<char, int> map_pat;

    for (char c:pat) {
        map_pat[c]++;
    }

    int i = 0;
    int j = pat.size() - 1;

    int anagrams = 0;

    for (int l = i; l <= j; ++l) {
        map_txt[txt[l]]++;
    }

    while (j < txt.size()) {
        if (map_txt == map_pat) {
            anagrams++;
        }

        // erasing txt[i]
        if (map_txt[txt[i]] == 1) {
            map_txt.erase(txt[i]);
        } else {
            map_txt[txt[i]] -= 1;
        }

        i++;
        j++;

        // inserting txt[j]
        map_txt[txt[j]]++;
    }

    return anagrams;
}


int count_occurrence_of_anagrams(string pat, string txt) {
    int i = 0;    // window back pointer
    int j = 0;    // window front pointer
    int K = pat.length();
    int anagrams = 0;
    unordered_map<char, int> mp;

    for (char c : pat) {
        mp[c]++;
    }

    int count = mp.size();

    while (j < txt.length()) {
        // calculation of j
        if (mp[txt[j++]]-- == 1) {
            count--;
        }
        // calculation of ans
        if (count == 0) {
            anagrams++;
        }
        // calculation of i (to slide the window further)
        if (j >= K) {
            if (mp[txt[i++]]++ == 0) {
                count++;
            }
        }

    }
    return anagrams;
}

int32_t main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    string pat, txt;

    while (t--) {
        cin >> txt >> pat;
        cout << "\ncount of the occurrence of anagrams of the pat in the txt is : ";
        cout << count_occurrence_of_anagrams(pat, txt) << " ";
        cout << count_occurrence_of_anagrams_2(pat, txt);
    }


    return 0;
}

/*
OUTPUT:

2
forxxorfxdofr
for
kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
kkkkk

count of the occurrence of anagrams of the pat in the txt is : 3 3
count of the occurrence of anagrams of the pat in the txt is : 37 37
*/