//#include <iostream>
//
//// Given a list of n distinct integers, determine the position of an integer in the list using linear search
//using namespace std;
//
//int search(int arr[], int n, int x) {
//    int i;
//    bool flag = false;
//    for (i = 0; i < n; i++) {
//        if (arr[i] == x) {
//            flag = true;
//            return i;
//        }
//    }
//    if (!flag) {
//        cout << "element not found" << endl;
//        return -1;
//    }
//}
//
//int main() {
//    int n;
//    cout << "Enter size of list:" << endl;
//    cin >> n;
//    int array[n];
//    cout << endl;
//
//    for (int i = 0; i < n; i++) {
//        cout << "Enter element " << i + 1 << endl;
//        cin >> array[i];
//        int count = 0;
//        if (i > 0) {
//            for (int j = 0; j < n; j++) {
//                if (array[j] == i) {
//                    count++;
//                }
//            }
//        }
//        if (count == 2) {
//            cout << "This no is already present in list" << endl;
//            cout << "Please enter a value again..." << endl;
//            cout << "Enter element " << i + 1 << ":" << endl;
//            cin >> array[i];
//        }
//    }
//    cout << "Displaying list.." << endl;
//    for (int i = 0; i < n; i++) {
//        cout << array[i] << ", ";
//    }
//    cout << endl;
//
//    int e;
//    cout << "Enter element value whose position you want to know:" << endl;
//    cin >> e;
//    int z = search(array, n, e);
//
//    if (z != -1) {
//        cout << "Index of element is:" << z << endl;
//    }
//}