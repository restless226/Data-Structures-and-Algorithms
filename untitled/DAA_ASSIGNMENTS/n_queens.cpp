/*
 * Name: Rohit Pendse
 * Roll no: 33358
 * Subject: DAA_ASSIGNMENTS Lab Assignment 3:N-Queens Problem
 */

#include <bits/stdc++.h>

#define MAX 50
#define int long long
using namespace std;

int board[MAX][MAX];    // Global array to hold elements of chess board
int solutions = 0;

void printArray(int n) {
    cout << "\nPRINTING SOLUTION " << ++solutions << '\n';
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << board[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}

bool isPossible(int n, int row, int column) {
    // we have to check: upper left diagonal, upper right diagonal, upper column elements;
    // checking of other directions is not required as we are moving downwards row by row
    // checking for upper column elements
    for (int i = row - 1; i >= 0; i--) {
        if (board[i][column] == 1) {
            return false;
        }
    }
    // checking for upper left diagonal elements
    for (int i = row - 1, j = column - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    // checking for upper right diagonal elements
    for (int i = row - 1, j = column + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    // As we did not get any indices for which "board[i][j]==1" hence it is a safe position to insert
    return true;
}

void nQueenHelper(int n, int row) {
    if (row == n) {
        // we have reached some solution
        printArray(n);
        return;
    }
    // Place at all possible positions and move to smaller problem
    for (int j = 0; j < n; ++j) {
        // check is it possible to insert in arr[row][j] or not
        if (isPossible(n, row, j)) {
            board[row][j] = 1;
            nQueenHelper(n, row + 1);
            board[row][j] = 0;    // we have backtracked to previous row because no possible to insert in its next row we have to initialize it with 0
        }
    }
}

void placeNQueens(int n) {
    memset(board, 0, sizeof(board));
    // Starting with row 0
    nQueenHelper(n, 0);
}

int32_t main() {
    int t, n;
    cout << "Enter no of test cases:" << '\n';
    cin >> t;
    while (t--) {
        cout << "Enter size n of nxn board:" << '\n';
        cin >> n;
        placeNQueens(n);
        if (solutions == 0) {
            cout << "\nNO POSSIBLE SOLUTION FOR n=" << n << '\n';
        }
        cout << '\n';
    }
    return 0;
}


/*
OUTPUT:

Enter no of test cases:
2
Enter size n of nxn board:
3

NO POSSIBLE SOLUTION FOR n=3

Enter size n of nxn board:
4
PRINTING SOLUTION 1
0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0

PRINTING SOLUTION 2
0 0 1 0
1 0 0 0
0 0 0 1
0 1 0 0
*/