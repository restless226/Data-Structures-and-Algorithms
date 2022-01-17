#include <iostream>

using namespace std;

bool is_sorted2(int a[], int size) {
    // base case
    if (size == 0 || size == 1) {
        return true;
    }
    bool smallerOutput = is_sorted2(a + 1, size - 1);
    if (!smallerOutput) {
        return false;
    }
    if (a[0] > a[1]) {
        return false;
    } else {
        return true;
    }
}


bool is_sorted(int a[], int size) {
    // base case
    if (size == 0 || size == 1) {
        return true;
    }
    if (a[0] > a[1]) {
        return false;
    }
    return is_sorted(a + 1, size - 1);
}


int main() {
    int n;
    cout << "Enter size:" << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (is_sorted(a, n) == 0) {
        cout << "not sorted" << '\n';
    } else {
        cout << "sorted" << '\n';
    }

    if (is_sorted2(a, n) == 0) {
        cout << "not sorted" << '\n';
    } else {
        cout << "sorted" << '\n';
    }
    return 0;
}