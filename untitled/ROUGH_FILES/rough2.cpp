//#include <map>
//#include <set>
//#include <list>
//#include <cmath>
//#include <ctime>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <string>
//#include <bitset>
//#include <cstdio>
//#include <limits>
//#include <vector>
//#include <climits>
//#include <cstring>
//#include <cstdlib>
//#include <fstream>
//#include <numeric>
//#include <sstream>
//#include <iostream>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//int solve(vector<int> &values, int n, int gcd[], int m) {
//    // Map to store frequency of array elements
//    unordered_map<int, int> freq;
//    // Map to store number of subsets with given gcd
//    unordered_map<int, int> subsets;
//    int arrMax = 0;
//    // Find maximum element in array and fill frequency map.
//    for (int i = 0; i < n; i++) {
//        arrMax = max(arrMax, values[i]);
//        freq[values[i]]++;
//    }
//    // Run a loop from max element to 1 to find subsets with gcd 1
//    for (int i = arrMax; i >= 1; i--) {
//        int sub = 0;
//        int add = freq[i];
//        // Run a loop for all multiples of i
//        for (int j = 2; j * i <= arrMax; j++) {
//            add += freq[j * i];
//            sub += subsets[j * i];
//        }
//        subsets[i] = (1 << add) - 1 - sub;
//    }
//    return subsets[gcd[0]];
//}
//
//void countStablePartitions(int n, vector<int> &values) {
//    int gcd[] = {1};
//    int m = 1;
//    cout << solve(values, n, gcd, m) << '\n';
//}
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> values(n);
//    for (int i = 0; i < n; ++i) {
//        cin >> values[i];
//    }
//    countStablePartitions(n, values);
//    return 0;
//}
