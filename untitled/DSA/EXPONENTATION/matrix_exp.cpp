/*
TOPIC - MATRIX EXPONENTIATION
O(logN) time complexity
*/

#include <iostream>

#define int long long
using namespace std;

const int mod = 1e9 + 7;

void multiply(int A[2][2], int M[2][2]) {
    // resultant matrix is 2x2
    int fv = (A[0][0] * M[0][0] + A[0][1] * M[1][0]) % mod;
    int sv = (A[0][0] * M[0][1] + A[0][1] * M[1][1]) % mod;
    int tv = (A[1][0] * M[0][0] + A[1][1] * M[1][0]) % mod;
    int lv = (A[1][0] * M[0][1] + A[1][1] * M[1][1]) % mod;

    A[0][0] = fv % mod;
    A[0][1] = sv % mod;
    A[1][0] = tv % mod;
    A[1][1] = lv % mod;
}

void power(int A[2][2], int n) {
    // base case
    if (n == 0 || n == 1) {
        return;
    }

    // multiplying A*(n/2) with A*(n/2)
    power(A, n / 2);

    multiply(A, A);

    if (n % 2 != 0) {
        int M[2][2] = {{1, 1},
                       {1, 0}};
        multiply(A, M);
    }
}

int fib(int n) {
    // Code here
    int A[2][2] = {{1, 1},
                   {1, 0}};

    // A**(n-1)[0][0] will give nth fibonacci number f(n)
    if (n == 0) {
        return 0;
    }

    // we want to compute power(A,n-1);
    power(A, n);
    return A[0][0] % mod;
}

int32_t main() {
    int t;
    cin >> t;
    int n;

    while (t--) {
        cout << "Enter no:" << endl;
        cin >> n;
        cout << fib(n) << endl;
    }

    return 0;
}

/*
OUTPUT:
3
Enter no:
2
2
Enter no:
3
3
Enter no:
44
134903163
*/