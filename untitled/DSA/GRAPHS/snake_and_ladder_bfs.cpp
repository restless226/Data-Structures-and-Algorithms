///*
//PROBLEM STATEMENT:
//Given a 5x6 snakes and ladders board, find the minimum number of dice throws required
//to reach the destination or last cell (30th cell) from the source (1st cell).
//You are given an integer N denoting the total number of snakes and ladders and
//an array arr[] of 2*N size where 2*i and (2*i + 1)th values denote
//the starting and ending point respectively of ith snake or ladder.
//
//Expected Time Complexity: O(N)
//Expected Auxiliary Space: O(N)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int solve(int n, int arr[]) {
//    unordered_map<int, int> ladders;
//    unordered_map<int, int> snakes;
//    for (int i = 0; i < 2 * n; i += 2) {
//        if (arr[i] < arr[i + 1]) {
//            ladders[arr[i]] = arr[i + 1];
//        } else if (arr[i] > arr[i + 1]) {
//            snakes[arr[i]] = arr[i + 1];
//        }
//    }
//    int moves = 0;
//    queue<int> queue;
//    queue.push(1);
//    vector<bool> visited(31, false);
//    visited[1] = true;
//    while (!queue.empty()) {
//        int size = queue.size();
//        moves++;
//        while (size--) {
//            int currentPosition = queue.front();
//            queue.pop();
//            for (int die = 1; die <= 6; die++) {
//                if (currentPosition + die > 30) break;
//                if (currentPosition + die == 30) return moves;
//                if (visited[currentPosition + die]) continue;
//                if (ladders.count(currentPosition + die) > 0 && !visited[ladders[currentPosition + die]]) {
//                    visited[ladders[currentPosition + die]] = true;
//                    queue.push(ladders[currentPosition + die]);
//                    if (ladders[currentPosition + die] == 30) {
//                        return moves;
//                    }
//                } else if (snakes.count(currentPosition + die) > 0 && !visited[snakes[currentPosition + die]]) {
//                    visited[snakes[currentPosition + die]] = true;
//                    queue.push(snakes[currentPosition + die]);
//                } else {
//                    visited[currentPosition + die] = true;
//                    queue.push(currentPosition + die);
//                }
//            }
//        }
//    }
//    return -1;
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
//        int arr[2 * n];
//        for (int i = 0; i < 2 * n; i++)
//            cin >> arr[i];
//        cout << solve(n, arr) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//8
//3 22
//5 8
//11 26
//20 29
//17 4
//19 7
//27 1
//21 9
//
//OUTPUT:
//3
//*/