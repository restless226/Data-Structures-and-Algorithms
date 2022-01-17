#include <bits/stdc++.h>

#define MAX 20
using namespace std;


int count_solutions = 0;

void printSolution(int **solution, int n) {
    cout << "PRINTING SOLUTION " << ++count_solutions << '\n';
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << solution[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}

void mazeHelp(int maze[][MAX], int n, int **solution, int x, int y) {

    // print the solution as we have reached destination cell
    if (x == n - 1 && y == n - 1) {
        solution[x][y] = 1; // including destination cell as well :)
        printSolution(solution, n);
//        solution[x][y] = 0;   // optional
        return;
    }

    // cases in which we cannot move further
    if (x >= n || x < 0 || y >= n || y < 0 || maze[x][y] == 0 || solution[x][y] == 1) {
        return;
    }

    // cell at which we are currently standing we have to make that cell entry as 1(visited)
    solution[x][y] = 1;

    // Exploring Up, Down, Left, Right cells
    mazeHelp(maze, n, solution, x - 1, y);    // Up
    mazeHelp(maze, n, solution, x + 1, y);    // Down
    mazeHelp(maze, n, solution, x, y - 1);    // Left
    mazeHelp(maze, n, solution, x, y + 1);    // Right

    solution[x][y] = 0; // making entry 0 so as to use it freshly for next path exploration
}

void ratInAMaze(int maze[][MAX], int n) {
    int **solution = new int *[n];
//    memset(solution,0,sizeof(solution));
    for (int i = 0; i < n; i++) {
        solution[i] = new int[n];
        memset(solution[i], 0, sizeof(solution[i]) * n);
    }

//    cout << "PRINTING SOLUTION " << '\n';
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << solution[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    cout << '\n';

    // rat is initially at position maze[0][0]
    mazeHelp(maze, n, solution, 0, 0);
}

int32_t main() {

    int t, n;
    cout << "Enter no of test cases:" << '\n';
    cin >> t;

    while (t--) {
        cout << "Enter size n of nxn maze:" << '\n';
        cin >> n;

        int maze[MAX][MAX];

        cout << "Enter space separated elements of maze row wise..." << '\n';
        for (int i = 0; i < n; ++i) {
            cout << "Enter elements in row " << i << ":" << '\n';
            for (int j = 0; j < n; ++j) {
                cin >> maze[i][j];
            }
        }

        if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0) {
            cout << "NO POSSIBLE PATH FOR GIVEN MAZE :(" << '\n';
            continue;
        }

        ratInAMaze(maze, n);

        if (count_solutions == 0) {
            cout << "NO POSSIBLE PATH FOR GIVEN MAZE :(" << '\n';
        }
        cout << '\n';

        count_solutions = 0;
    }

    return 0;
}


/*
OUTPUT:

Enter no of test cases:
3
Enter size n of nxn maze:
2
Enter space separated elements of maze row wise...
Enter elements in row 0:
1 0
Enter elements in row 1:
1 1
PRINTING SOLUTION 1
1 0
1 1


Enter size n of nxn maze:
3
Enter space separated elements of maze row wise...
Enter elements in row 0:
1 1 0
Enter elements in row 1:
1 1 1
Enter elements in row 2:
1 1 1
PRINTING SOLUTION 1
1 0 0
1 1 1
1 1 1

PRINTING SOLUTION 2
1 0 0
1 0 0
1 1 1

PRINTING SOLUTION 3
1 0 0
1 1 0
0 1 1

PRINTING SOLUTION 4
1 0 0
1 1 1
0 0 1

PRINTING SOLUTION 5
1 1 0
0 1 0
0 1 1

PRINTING SOLUTION 6
1 1 0
1 1 0
1 1 1

PRINTING SOLUTION 7
1 1 0
0 1 1
0 0 1


Enter size n of nxn maze:
5
Enter space separated elements of maze row wise...
Enter elements in row 0:
1 1 1 1 0
Enter elements in row 1:
1 1 1 0 0
Enter elements in row 2:
1 1 0 1 1
Enter elements in row 3:
1 1 1 1 0
Enter elements in row 4:
1 0 0 1 1
PRINTING SOLUTION 1
1 0 0 0 0
1 0 0 0 0
1 0 0 0 0
1 1 1 1 0
0 0 0 1 1

PRINTING SOLUTION 2
1 0 0 0 0
1 0 0 0 0
1 1 0 0 0
0 1 1 1 0
0 0 0 1 1

PRINTING SOLUTION 3
1 0 0 0 0
1 1 0 0 0
0 1 0 0 0
0 1 1 1 0
0 0 0 1 1

PRINTING SOLUTION 4
1 0 0 0 0
1 1 0 0 0
1 1 0 0 0
1 1 1 1 0
0 0 0 1 1

PRINTING SOLUTION 5
1 1 0 0 0
0 1 0 0 0
0 1 0 0 0
0 1 1 1 0
0 0 0 1 1

PRINTING SOLUTION 6
1 1 0 0 0
0 1 0 0 0
1 1 0 0 0
1 1 1 1 0
0 0 0 1 1

PRINTING SOLUTION 7
1 1 0 0 0
1 1 0 0 0
1 0 0 0 0
1 1 1 1 0
0 0 0 1 1

PRINTING SOLUTION 8
1 1 0 0 0
1 1 0 0 0
1 1 0 0 0
0 1 1 1 0
0 0 0 1 1

PRINTING SOLUTION 9
1 1 1 0 0
0 1 1 0 0
0 1 0 0 0
0 1 1 1 0
0 0 0 1 1

PRINTING SOLUTION 10
1 1 1 0 0
0 1 1 0 0
1 1 0 0 0
1 1 1 1 0
0 0 0 1 1

PRINTING SOLUTION 11
1 1 1 0 0
1 1 1 0 0
1 0 0 0 0
1 1 1 1 0
0 0 0 1 1

PRINTING SOLUTION 12
1 1 1 0 0
1 1 1 0 0
1 1 0 0 0
0 1 1 1 0
0 0 0 1 1
*/