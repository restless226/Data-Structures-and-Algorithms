#include <iostream>

using namespace std;


void Merge(int array1[], int array2[], int array3[]) {

    for (int i = 0; i < 5; i++) {
        array3[i] = array1[i];
    }
    for (int j = 0; j < 5; j++) {
        array3[j + 5] = array2[j];
    }

    int temp;
    //sorting in ascending order
    for (int k = 0; k < 10; k++) {
        for (int l = k + 1; l < 10; l++) {
            if (array3[k] > array3[l]) {
                temp = array3[k];
                array3[k] = array3[l];
                array3[l] = temp;
            }
        }
    }

    //print sorted array elements
    cout << "Sorted (Ascending Order) Array elements:" << endl;
    for (int x = 0; x < 10; x++)
        cout << array3[x] << " ";


}

int main() {
    int a[5], b[5], c[5];

    cout << "Enter elements in array 1:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    cout << "Enter elements in array 2:" << endl;
    for (int j = 0; j < 5; j++) {
        cin >> b[j];
    }

    // calling merge function1
    Merge(a, b, c);

    return 0;


}

// Output-
//Enter elements in array 1:
//1
//3
//4
//5
//6
//Enter elements in array 2:
//2
//6
//3
//4
//2
//Sorted (Ascending Order) Array elements:
//1 2 2 3 3 4 4 5 6 6
//Process finished with exit code 0