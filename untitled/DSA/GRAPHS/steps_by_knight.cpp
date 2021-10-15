///*
//PROBLEM STATEMENT:
//Given a square chessboard, the initial position of Knight and position of a target.
//Find out the minimum steps a Knight will take to reach the target position.
//NOTE: The initial and the target position co-ordinates of Knight
//      have been given according to 1-base indexing.
//This problem can be seen as shortest path in unweighted graph.
//Therefore we use shortest path in an unweighted graph using Breadth First Search to solve this problem.
//We try all 8 possible positions where a Knight can reach from its position.
//If reachable position is not already visited and is inside the board,
//we push this state into queue with distance 1 more than its parent state.
//Finally, we return distance of target position, when it gets pop out from queue.
//The possible moves for a Knight when it is at cell (x, y) are:
//(x-2, y-1) , (x-2, y+1) , (x-1, y-2) , (x-1, y+2) ,
//(x+2, y-1) , (x+2, y+1) , (x+1, y-2) , (x+1, y+2)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//bool isValid(int x, int y, int n) {
//    return (x < 1 || x > n || y < 1 || y > n) ? false : true;
//}
//
//int solve(vector<int> &KnightPos, vector<int> &TargetPos, int n) {
//    int x1 = KnightPos[0];
//    int y1 = KnightPos[1];
//    int x2 = TargetPos[0];
//    int y2 = TargetPos[1];
//    if (x1 == x2 && y1 == y2) return 0;
//    vector<vector<int>> board(n + 1, vector<int>(n + 1, 0));
//    queue<pair<int, int>> queue;
//    queue.push({x1, y1});
//    while (!queue.empty()) {
//        int x = queue.front().first;
//        int y = queue.front().second;
//        queue.pop();
//        if (isValid(x - 2, y - 1, n) and board[x - 2][y - 1] == 0) {
//            board[x - 2][y - 1] = board[x][y] + 1;
//            queue.push({x - 2, y - 1});
//        }
//        if (isValid(x - 2, y + 1, n) and board[x - 2][y + 1] == 0) {
//            board[x - 2][y + 1] = board[x][y] + 1;
//            queue.push({x - 2, y + 1});
//        }
//        if (isValid(x - 1, y - 2, n) and board[x - 1][y - 2] == 0) {
//            board[x - 1][y - 2] = board[x][y] + 1;
//            queue.push({x - 1, y - 2});
//        }
//        if (isValid(x - 1, y + 2, n) and board[x - 1][y + 2] == 0) {
//            board[x - 1][y + 2] = board[x][y] + 1;
//            queue.push({x - 1, y + 2});
//        }
//        if (isValid(x + 2, y - 1, n) and board[x + 2][y - 1] == 0) {
//            board[x + 2][y - 1] = board[x][y] + 1;
//            queue.push({x + 2, y - 1});
//        }
//        if (isValid(x + 2, y + 1, n) and board[x + 2][y + 1] == 0) {
//            board[x + 2][y + 1] = board[x][y] + 1;
//            queue.push({x + 2, y + 1});
//        }
//        if (isValid(x + 1, y - 2, n) and board[x + 1][y - 2] == 0) {
//            board[x + 1][y - 2] = board[x][y] + 1;
//            queue.push({x + 1, y - 2});
//        }
//        if (isValid(x + 1, y + 2, n) and board[x + 1][y + 2] == 0) {
//            board[x + 1][y + 2] = board[x][y] + 1;
//            queue.push({x + 1, y + 2});
//        }
//    }
//    return board[x2][y2];
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        vector<int> KnightPos(2);
//        vector<int> TargetPos(2);
//        int N;
//        cin >> N;
//        cin >> KnightPos[0] >> KnightPos[1];
//        cin >> TargetPos[0] >> TargetPos[1];
//        cout << solve(KnightPos, TargetPos, N) << "\n";
//    }
//    return 0;
//}
//
///*
//INPUT:
//1
//6
//4 5
//1 1
//
//OUTPUT:
//3
//*/