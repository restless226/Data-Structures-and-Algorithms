//#include <iostream>
//
//using namespace std;
//
//void SelectionSort(int A[], int n) {
//    for (int i = 0; i < n - 1; i++)     // as n-2 passes are required
//    {
//
//        int iMin = i;
//
//        for (int j = i + 1; j < n; j++) {
//            if (A[j] < A[iMin]) {
//                iMin = j;       // update index of min element
//            }
//        }
//        int temp = A[i];
//        A[i] = A[iMin];
//        A[iMin] = temp;
//    }
//
//}
//
//int main() {
//    int s;
//    cout << "Enter size of array:" << endl;
//    cin >> s;
//    int Array[s];
//    cout<<endl;
//
//    for (int i = 0; i < s; i++) {
//        cout << "Enter element " << i + 1 << ":" << endl;
//        cin >> Array[i];
//    }
//
//    cout << "Displaying your array..."<<endl;
//    for (int i = 0; i < s; i++) {
//        cout<<Array[i]<<" ";
//    }
//
//    cout<<endl;
//
//    SelectionSort(Array, s);
//
//    for (int i = 0; i < s; i++) {
//        cout << Array[i] << " ";
//    }
//
//    return 0;
//}
//
//// Time complexity - O(n**2) in worst case