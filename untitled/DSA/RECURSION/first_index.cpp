#include <iostream>

using namespace std;


int first_index(int a[], int size, int x) {

    // base case
    if (size == 0) {
        return -1;
    }


    // small calculation
    if (a[0] == x) {
        return 0;
    }

    // recursive case
    int ans = first_index(a + 1, size - 1, x);

    if (ans == -1) {
        return ans;
    } else {
        return ans + 1;
    }


}

int main() {
    int x;
    cout << "Enter no:" << endl;
    cin >> x;

    int size;
    cout << "Enter size of array:" << endl;
    cin >> size;


    int a[size];

    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> a[i];
    }

    if (first_index(a, size, x) == -1) {
        cout << "not found";
    } else {
        cout << "index is=" << first_index(a, size, x);
    }

    return 0;
}