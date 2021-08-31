//#include <iostream>
//using namespace std;
//#include "queue.h"
//
////Function to check whether the queue is empty or not.
//bool CircularQueue::isEmpty() {
//    if (front == -1 && rear == -1) {
//        return true;
//    } else
//        return false;
//}
//
////Function to check whether the queue is full or not.
//bool CircularQueue::isFull() {
//    if ((rear + 1) % count == front) {
//        return true;
//    } else {
//        return false;
//    }
//}
//
//void CircularQueue::enqueue() {
//    if (isFull()) {
//        cout << "The queue is full" << endl;
//        return;
//    } else if (isEmpty()) {
//        rear = 0;
//        front = 0;
//
//        cout << "Enter student's name: " << endl;
//        cin >> stu[rear].name;
//
//        cout << "Enter roll number: " << endl;
//        cin >> stu[rear].roll_no;
//
//        cout << "Enter the class of the student: " << endl;
//        cin >> stu[rear].classes;
//
//        cout << endl;
//
//    } else {
//        //incrementing rear counter.
//        rear = (rear + 1) % count;
//
//        cout << "Enter student's name: " << endl;
//        cin >> stu[rear].name;
//
//        cout << "Enter roll number: " << endl;
//        cin >> stu[rear].roll_no;
//
//        //positive roll number validation
//        while (stu[rear].roll_no <= 0) {
//            cout << "Please enter a valid roll number" << endl;
//            cin >> stu[rear].roll_no;
//        }
//        //Duplicate roll number validation
//        for (int i = front; i < rear; i++) {
//            while (stu[rear].roll_no == stu[i].roll_no) {
//                cout << "This roll no is already present in the list" << endl;
//                cout << "Please enter another number" << endl;
//                cin >> stu[rear].roll_no;
//            }
//        }
//        cout << "Enter the class of the student: " << endl;
//        cin >> stu[rear].classes;
//
//        cout << endl;
//
//    }
//
//}
//
////Function to serve a student.
//void CircularQueue::dequeue() {
//    //Checking whether a queue is empty or not while dequeuing
//    if (isEmpty()) {
//        cout << "The queue is Empty" << endl;
//        return;
//    }
//        //checking if there is only one element left.
//    else if (front == rear) {
//        cout << "Displaying information of dequeued Student..." << endl;
//        cout << "Student Name: " << stu[front].name << endl;
//        cout << "Roll Number: " << stu[front].roll_no << endl;
//        cout << "Class: " << stu[front].classes << endl;
//
//        stu[front].name = "";
//        stu[front].roll_no = 0;
//        stu[front].classes = "";
//
//        front = -1;
//        rear = -1;
//
//        cout<<endl;
//
//    } else {
//        cout << "Dequeued Student" << endl;
//        cout << "Student Name: " << stu[front].name << endl;
//        cout << "Roll Number: " << stu[front].roll_no << endl;
//        cout << "Standard: " << stu[front].classes << endl;
//
//        stu[front].name = "";
//        stu[front].roll_no = 0;
//        stu[front].classes = "";
//
//        front = (front + 1) % count;
//
//        cout<<endl;
//    }
//}
//
//
//void CircularQueue::display() {
//    //checking if there is no student in the list.
//    if (isEmpty()) {
//        cout << "Queue is empty" << endl;
//        return;
//    } else {
//        //displaying the number of students in the queue in tabular format.
//        cout << "Students in the queue are: " << endl;
//        cout << "Roll No." << "\t" << "    Name    " << "\t" << " Class " << endl;
//        int i = front;
//        while (true) {
//            cout << stu[i].roll_no << "\t";
//            cout << '\t' << stu[i].name << "\t" << "  ";
//            cout << stu[i].classes << endl;
//            if (i == rear)
//                break;
//            i = (i + 1) % count;
//
//            cout<<endl;
//        }
//    }
//
//}