/*
PROBLEM STATEMENT:
Given a boolean expression S of length N with following symbols.
Symbols
    'T' ---> true
    'F' ---> false
and following operators filled between symbols
Operators
    &   ---> boolean AND
    |   ---> boolean OR
    ^   ---> boolean XOR
Count the number of ways we can parenthesize the expression so that the value of expression evaluates to true.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

// 3D MATRIX is difficult to visualize, hence we are using "unordered_map"
// key : i + " " + j + " " + is_true
//unordered_map<string, int> mp;
//
//int bool_par_MEMOIZED(string x, int i, int j, bool is_true) {
//
//    int no_of_ways = 0;
//    int res = INT_MIN;
//
//    // base condition
//    if (i > j) {
//        return false;
//    } else if (i == j) {
//        if (is_true) {
//            res = (x[i] == 'T');
//        } else {
//            res = (x[i] == 'F');
//        }
//    }
//
////    static int dp[1001][1001][2];   // 3D MATRIX
//
//    string temp = to_string(i);      // i
//    temp.push_back(' ');           // i-
//    temp.append(to_string(j));       // i-j
//    temp.push_back(' ');           // i-j-
//    temp.append(to_string(is_true)); // i-j-is_true
////    cout << "string temp is : " << temp << "\n";
//
//    // memoization block check
//    if (mp.find(temp) != mp.end()) {
//        return mp[temp];
//    }
//
//    // [NOTE] - k always corresponds to index of an operator(|, &, ^)
//    for (int k = i + 1; k <= j - 1; k += 2) {
//        // these 4 are temp_ans
//        int lT;
//        int lF;
//        int rT;
//        int rF;
//
//        if (mp.find(to_string(i) + " " + to_string(k - 1) + " " + to_string(true)) != mp.end()) {
//            lT = mp[to_string(i) + " " + to_string(k - 1) + " " + to_string(true)];
//        } else {
//            lT = bool_par_MEMOIZED(x, i, k - 1, true);
//        }
//
//        if (mp.find(to_string(i) + " " + to_string(k - 1) + " " + to_string(false)) != mp.end()) {
//            lF = mp[to_string(i) + " " + to_string(k - 1) + " " + to_string(false)];
//        } else {
//            lF = bool_par_MEMOIZED(x, i, k - 1, false);
//        }
//
//        if (mp.find(to_string(k + 1) + " " + to_string(j) + " " + to_string(true)) != mp.end()) {
//            rT = mp[to_string(k + 1) + " " + to_string(j) + " " + to_string(true)];
//        } else {
//            rT = bool_par_MEMOIZED(x, k + 1, j, true);
//        }
//
//        if (mp.find(to_string(k + 1) + " " + to_string(j) + " " + to_string(false)) != mp.end()) {
//            rF = mp[to_string(k + 1) + " " + to_string(j) + " " + to_string(false)];
//        } else {
//            rF = bool_par_MEMOIZED(x, k + 1, j, false);
//        }
//
////        int left_true = bool_par_MEMOIZED(x, i, k - 1, true);
////        int left_false = bool_par_MEMOIZED(x, i, k - 1, false);
////        int right_true = bool_par_MEMOIZED(x, k + 1, j, true);
////        int right_false = bool_par_MEMOIZED(x, k + 1, j, false);
//
//
//        if (x[k] == '&') {
//            if (is_true) {
//                no_of_ways += (lT * rT);
//            } else {
//                no_of_ways += (lT * rF) + (lF * rT) + (lF * rF);
//            }
//        } else if (x[k] == '|') {
//            if (is_true) {
//                no_of_ways += (lT * rT) + (lT * rF) + (lF * rT);
//            } else {
//                no_of_ways += (lF * rF);
//            }
//        } else if (x[k] == '^') {
//            if (is_true) {
//                no_of_ways += (lT * rF) + (lF * rT);
//            } else {
//                no_of_ways += (lT * rT) + (lF * rF);
//            }
//        }
//    }
//    res = (res == INT_MIN) ? no_of_ways : res;
//    mp[temp] = res % 1003;
//    return mp[temp] % 1003;
//}


class Solution {
    int dp[202][202][2];

public:
    Solution() {
        memset(dp, -1, sizeof(dp));
    }


    int bool_par_MEMOIZED(string x, int i, int j, bool is_true) {
        // memoization block check
        if (dp[i][j][is_true] == -1) {
            int res = INT_MIN;
            int no_of_ways = 0;

            // base condition
            if (i > j) {
                res = false;
            }
            if (i == j) {
                if (is_true) {
                    res = (x[i] == 'T');
                } else {
                    res = (x[i] == 'F');
                }
            }

            // [NOTE] - k always corresponds to index of an operator(|, &, ^)
            for (int k = i + 1; k <= j - 1; k += 2) {
                // these 4 are temp_ans
                int lT;
                int lF;
                int rT;
                int rF;

                if (dp[i][k - 1][true]) {
                    lT = dp[i][k - 1][true];
                } else {
                    lT = bool_par_MEMOIZED(x, i, k - 1, true);
                }

                if (dp[i][k - 1][false]) {
                    lF = dp[i][k - 1][false];
                } else {
                    lF = bool_par_MEMOIZED(x, i, k - 1, false);
                }

                if (dp[k + 1][j][true]) {
                    rT = dp[k + 1][j][true];
                } else {
                    rT = bool_par_MEMOIZED(x, k + 1, j, true);
                }

                if (dp[k + 1][j][false]) {
                    rF = dp[k + 1][j][false];
                } else {
                    rF = bool_par_MEMOIZED(x, k + 1, j, false);
                }

//        int left_true = bool_par_MEMOIZED(x, i, k - 1, true);
//        int left_false = bool_par_MEMOIZED(x, i, k - 1, false);
//        int right_true = bool_par_MEMOIZED(x, k + 1, j, true);
//        int right_false = bool_par_MEMOIZED(x, k + 1, j, false);

                if (x[k] == '&') {
                    if (is_true) {
                        no_of_ways += (lT * rT);
                    } else {
                        no_of_ways += (lT * rF) + (lF * rT) + (lF * rF);
                    }
                } else if (x[k] == '|') {
                    if (is_true) {
                        no_of_ways += (lT * rT) + (lT * rF) + (lF * rT);
                    } else {
                        no_of_ways += (lF * rF);
                    }
                } else if (x[k] == '^') {
                    if (is_true) {
                        no_of_ways += (lT * rF) + (lF * rT);
                    } else {
                        no_of_ways += (lT * rT) + (lF * rF);
                    }
                }
            }
            res = (res == INT_MIN) ? no_of_ways : res;
            dp[i][j][is_true] = res % 1003;
        }
        return dp[i][j][is_true] % 1003;
    }


    int bool_par_RECURSIVE(string x, int i, int j, bool is_true) {

        int no_of_ways = 0;

        // base condition
        if (i > j) {
            return false;
        } else if (i == j) {
            if (is_true) {
                return x[i] == 'T';
            } else {
                return x[i] == 'F';
            }
        }

        // [NOTE] - k always corresponds to index of an operator(|, &, ^)
        for (int k = i + 1; k <= j - 1; k += 2) {
            // these 4 are temp_ans
            int lT = bool_par_RECURSIVE(x, i, k - 1, true);
            int lF = bool_par_RECURSIVE(x, i, k - 1, false);
            int rT = bool_par_RECURSIVE(x, k + 1, j, true);
            int rF = bool_par_RECURSIVE(x, k + 1, j, false);


            if (x[k] == '&') {
                if (is_true) {
                    no_of_ways += (lT * rT);
                } else {
                    no_of_ways += (lT * rF) + (lF * rT) + (lF * rF);
                }
            } else if (x[k] == '|') {
                if (is_true) {
                    no_of_ways += (lT * rT) + (lT * rF) + (lF * rT);
                } else {
                    no_of_ways += (lF * rF);
                }
            } else if (x[k] == '^') {
                if (is_true) {
                    no_of_ways += (lT * rF) + (lF * rT);
                } else {
                    no_of_ways += (lT * rT) + (lF * rF);
                }
            }
        }

        return no_of_ways;
    }
};


int32_t main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) {
        Solution sol;
        string x;
        cin >> x;
        cout << "\nno of ways to parenthesize the expression is : ";
        cout << "\nbool_par_RECURSIVE -> " << sol.bool_par_RECURSIVE(x, 0, x.length() - 1, true);
        cout << "\nbool_par_MEMOIZED -> " << sol.bool_par_MEMOIZED(x, 0, x.length() - 1, true);

//        cout << "\nPRINTING MAP...\n";
//        for (auto itr:mp) {
//            cout << itr.first << " " << itr.second << '\n';
//        }
//        mp.clear();
        cout << '\n';
    }

    return 0;
}


/*
OUTPUT:

2
T^F|F
T|T&F^T

no of ways to parenthesize the expression is :
bool_par_RECURSIVE -> 2
bool_par_MEMOIZED -> 2

no of ways to parenthesize the expression is :
bool_par_RECURSIVE -> 4
bool_par_MEMOIZED -> 4
*/