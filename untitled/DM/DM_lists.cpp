///*  Name: Rohit Pendse
//    Roll no: 23333
//    Problem Statement: WRP in C++ to accept two lists of unique numbers from given numbers
//                       Find out common numbers in both lists
//*/
//
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int s1, s2, c = 0;
//
//    cout << "Enter size of list1: " << endl;
//    cin >> s1;
//
//    cout << "Enter size of list2: " << endl;
//    cin >> s2;
//
//    cout << endl;
//
//    int arr1[s1];
//    int arr2[s2];
//
//
//    // taking input of first element for list1
//    cout << "Enter elements in list1:" << endl;
//    cout << "Enter element 1:" << endl;
//    cin >> arr1[0];
//
//    // taking elements input for list1
//    for (int i = 1; i < s1; i++) {
//        cout << "Enter element " << i + 1 << ":" << endl;
//        cin >> arr1[i];
//
//        // checking for duplicates
//        for (int j = 0; j < i; j++) {
//            if (arr1[j] == arr1[i]) {
//                cout << "This no is already present in list" << endl;
//                cout << "Please enter a value again..." << endl;
//                cout << endl;
//                cout << "Enter element " << i + 1 << ":" << endl;
//                cin >> arr1[i];
//            }
//        }
//    }
//
//    cout<<endl;
//    // printing list1
//    cout << "list1:" << endl;
//    for (int i = 0; i < s1; i++) {
//        cout << arr1[i] << " ";
//    }
//
//
//    cout << endl;
//
//
//
//    // taking input of first element for list2
//    cout << "Enter elements in list2:" << endl;
//    cout << "Enter element 1:" << endl;
//    cin >> arr2[0];
//
//    // taking elements input for list2
//    for (int i = 1; i < s2; i++) {
//        cout << "Enter element " << i + 1 << ":" << endl;
//        cin >> arr2[i];
//
//        // checking for duplicates
//        for (int j = 0; j < i; j++) {
//            if (arr2[j] == arr2[i]) {
//                cout << "This no is already present in list" << endl;
//                cout << "Please enter a value again..." << endl;
//                cout << endl;
//                cout << "Enter element " << i + 1 << ":" << endl;
//                cin >> arr2[i];
//            }
//        }
//    }
//
//    cout<<endl;
//    // printing list2
//    cout << "list2:" << endl;
//    for (int i = 0; i < s2; i++) {
//        cout << arr2[i] << " ";
//    }
//
//    cout << endl;
//
//
//
//    // checking for common elements
//    for (int i = 0; i < s1; i++) {
//        for (int j = 0; j < s2; j++) {
//            if (arr1[i] == arr2[j]) {
//                c++;
//            }
//        }
//    }
//
//    // array containing common elements
//    int arr3[c];
//    for (int i = 0; i < s1; i++) {
//        for (int j = 0; j < s2; j++) {
//            if (arr1[i] == arr2[j]) {
//                arr3[j] = arr1[i];
//            }
//        }
//    }
//
//    // printing common array
//    cout<<endl;
//    cout<<"common elements:"<<endl;
//    for (int i = 0; i < c; i++) {
//        cout << arr3[i] << " ";
//    }
//
//    return 0;
//}