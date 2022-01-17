#include <iostream>

using namespace std;

void BubbleSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] > A[j]) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main() {

    int s;
    cout << "Enter size of array:" << endl;
    cin >> s;
    int Array[s];
    cout << endl;

    for (int i = 0; i < s; i++) {
        cout << "Enter element " << i + 1 << ":" << endl;
        cin >> Array[i];
    }

    cout << "Displaying your array..." << endl;
    for (int i = 0; i < s; i++) {
        cout << Array[i] << " ";
    }

    cout << endl;

    BubbleSort(Array, s);

    for (int i = 0; i < s; i++) {
        cout << Array[i] << " ";
    }

    return 0;
}

// Time complexity - O(n**2) in worst case