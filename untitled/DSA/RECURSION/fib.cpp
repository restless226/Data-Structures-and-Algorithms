#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    int fib1 = fib(n - 1);
    int fib2 = fib(n - 2);

    return fib1 + fib2;
}

int main() {
    int n;
    cout << "Enter no:" << endl;
    cin >> n;
    cout << fib(n) << '\n';
    return 0;
}