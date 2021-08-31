//#include <iostream>
//#include "header.h"
//using namespace std;
//int main() {
//    int n, choice;
//    cout << "Enter no of members:" << endl;
//    cin >> n;
//    Bank b(n);
//    while (true) {
//        cout << "Enter your choice:" << endl;
//        cout<< "Press: \n1. To enter details \n2. To arrange by account no \n3. To arrange by name \n4. To search by name \n5. To exit the application"<< endl;
//        cin >> choice;
//        switch (choice) {
//            case 1:
//                b.enterDetails();
//                break;
//            case 2:
//                cout << "Members list sorted by account no:" << endl;
//                b.selectionSort();
//                break;
//            case 3 :
//                cout << "Members list sorted by name:" << endl;
//                b.insertionSort();
//                break;
//            case 4:
//                b.binarySearch(n);
//                break;
//            case 5:
//                _Exit(0);
//                break;
//            default :
//                cout << "Please enter valid choice" << endl;
//                break;
//        }
//    }
//    return 0;
//}