//#include <iostream>
//using namespace std;
//#include "queue.h"
//
//int main() {
//    int n;
//    //taking the size of the queue from the user.
//    cout << "Enter the size of queue: " << endl;
//    cin >> n;
//    CircularQueue q1(n);
//
//    int ch;
//
//    while (ch < 7) {
//        cout << "Press:" << endl;
//        cout << "1 To Enter a student in a Queue" << endl;
//        cout << "2 To Serve the student" << endl;
//        cout << "3 To check whether queue is empty" << endl;
//        cout << "4 To check whether queue is full" << endl;
//        cout << "5 To display the list of students in a queue:" << endl;
//        cout << "6 To exit the application" << endl << endl;
//
//        cin >> ch;
//        switch (ch) {
//            case 1:
//                cout << "Enqueue Function called..." << endl;
//                q1.enqueue();
//                break;
//            case 2:
//                cout << "Dequeue function called..." << endl;
//                q1.dequeue();
//                break;
//            case 3:
//                if (q1.isEmpty()) {
//                    cout << "Queue is Empty" << endl;
//                } else {
//                    cout << "Queue is not empty" << endl;
//                }
//                break;
//            case 4:
//                if (q1.isFull())
//                    cout << "Queue is full" << endl;
//                else
//                    cout << "Queue is not full" << endl;
//                break;
//            case 5:
//                q1.display();
//                break;
//            case 6:
//                cout << "Exiting from the application..." << endl;
//                break;
//            default:
//                cout << "Please enter a valid option: " << endl;
//                break;
//        }
//    }
//    return 0;
//}
