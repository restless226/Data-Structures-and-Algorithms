//#include <iostream>
//
//using namespace std;
//
//void InsertionSort(int A[], int n) {
//    for (int i = 1; i < n; i++) {
//        int value = A[i];
//        int hole = i;
//
//        while (A[hole - 1] > value) {
//            A[hole] = A[hole - 1];
//            hole -= 1;
//        }
//        A[hole] = value;
//    }
//}
//
//int main() {
//
//    int s;
//    cout << "Enter size of array:" << endl;
//    cin >> s;
//    int Array[s];
//    cout << endl;
//    for (int i = 0; i < s; i++) {
//        cout << "Enter element " << i + 1 << ":" << endl;
//        cin >> Array[i];
//    }
//
//    cout << "Displaying your array..." << endl;
//    for (int i = 0; i < s; i++) {
//        cout << Array[i] << " ";
//    }
//
//    cout << endl;
//
//    InsertionSort(Array, s);
//
//    cout << "Displaying SORTED ARRAY..." << endl;
//    for (int i = 0; i < s; i++) {
//        cout << Array[i] << " ";
//    }
//
//    return 0;
//}
//
//// time complexity - best case O(n), worst case O(n**2)