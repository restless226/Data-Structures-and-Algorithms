/* 'UNORDERED MAPS' are build using 'Hashing'
 * 'MAPS' are build using 'RBT' - sorted on the basis of key
 *
 *      UNORDERED MAPS                          MAPS
 *
 *      1. built using 'Hashing                 1. built using 'RBT'
 *      2. not sorted                           2. sorted on the basis of key
 *      3. keys are unique                      3. keys are unique
 *      4. Search,insert delete                 4.Search,insert delete
 *         has O(1) time complexity               has O(1) time complexity
*/



#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    pair<int, char> p{2, 'a'};
    make_pair(3, 'b');

    // int is 'key' and char is 'value'
    unordered_map<int, int> um = {
            {1, 1},
            {2, 4},
            {3, 9}
    };
    // 'key-value' pair

    // indexing through key -
    um[4] = 8;
    um.insert(pair<int, int>(5, 25));
    um.insert(make_pair(6, 25));

    for (auto i :um) {
        cout << i.first << " " << i.second << endl;
    }

    auto itr = um.find(4);
    cout << (*itr).first << " " << (*itr).second << endl;

    cout << endl;

    // use of unordered_map to examine
    // whether a value is present in a vector or not in O(1) time complexity
    vector<int> v = {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 6, 6, 6, 6};

    unordered_map<int, int> unorderedMap = {};

    for (auto itr1:v) {
        if (unorderedMap.find(itr1) != unorderedMap.end()) {
            unorderedMap[itr1]++;
        } else {
            unorderedMap[itr1] = 1;
        }
    }

    unorderedMap.at(4); // parameter-key
    for (auto i:unorderedMap) {
        cout << i.first << " " << i.second << endl;
    }

    unorderedMap.clear();

    for (auto i:unorderedMap) {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;

    unordered_map<int, int> unorderedMap2 = {{1, 1},
                                             {2, 1},
                                             {4, 3}};

    unorderedMap2[6] = 7;
    unorderedMap2[8] = 8;
    unorderedMap2[10] = 9;

    cout << unorderedMap2.bucket_size(1) << " " << unorderedMap2.bucket_count() << endl;

    return 0;
}