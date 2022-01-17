#include <iostream>

using namespace std;

void Merge(int *L, int *R, int *A) {
    int i, j, k = 0;    // zeroth index of arrays L,R,A
    int nL = sizeof(L);
    int nR = sizeof(R);

    while (i < nL && j < nR) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            k += 1;
            i += 1;
        } else {
            A[k] = R[j];
            k += 1;
            j += 1;
        }
    }
    while (i < nL) {
        A[k] = L[i];
        i += 1;
        k += 1;
    }
    while (j < nR) {
        A[k] = R[j];
        j += 1;
        k += 1;
    }
}

void MergeSort(int *A1) {
    int n = sizeof(A1);
    if (n < 2) {
        return;
    }
    int mid = n / 2;
    int left[mid];
    int right[n - mid];

    for (int i = 0; i < mid; i++) {
        left[i] = A1[i];
    }

    for (int j = mid; j < n; j++) {
        right[j] = A1[j];
    }

    MergeSort(left);
    MergeSort(right);
    Merge(left, right, A1);
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

    MergeSort(Array);

    cout << "Displaying sorted array..." << endl;
    for (int i = 0; i < s; i++) {
        cout << Array[i] << " ";
    }

    return 0;
}

// time complexity - O(log(n)) worst case
// divide and conquer type algorithm
// recursive algorithm
// stable sorting algorithm
// amount of extra memory required is proportional to size of array
// space complexity - O(n)
//