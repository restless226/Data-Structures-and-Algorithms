#include<iostream>
#include<cstring>

using namespace std;
//structure containing student's parameters
struct student {
    int roll_no;
    string name;
    string classes;
};

//Queue Implementation
class CircularQueue {
    int front1;
    int rear;
    int count1;
    struct student s[50];
public:
    //Constructor
    CircularQueue(int n) {
        count1 = n;
        front1 = -1;
        rear = -1;
    }

    //Function to check whether the QUEUE is empty or not.
    bool isEmpty() {
        if (front1 == -1 && rear == -1) {
            return true;
        } else
            return false;
    }

    //Function to check whether the QUEUE is full or not.
    bool isFull() {
        if ((rear + 1) % count1 == front1)
            return true;
        else
            return false;
    }

    //Function to enter a student in a QUEUE.
    void enqueue() {
        if (isFull()) {
            cout << "The QUEUE is full" << endl;
            return;
        } else if (isEmpty()) {
            rear = 0;
            front1 = 0;
            cout << "Enter student's name: " << endl;
            cin.ignore();
            getline(cin, s[rear].name);
            cout << "Enter roll number: " << endl;
            cin >> s[rear].roll_no;

            cout << "Enter the class of the student: " << endl;
            cin.ignore();
            getline(cin, s[rear].classes);
        } else {
            //incrementing rear counter.
            rear = (rear + 1) % count1;
            cout << "Enter student's name: " << endl;
            cin.ignore();
            getline(cin, s[rear].name);
            cout << "Enter roll number: " << endl;
            cin >> s[rear].roll_no;
            //positive roll number validation
            while (s[rear].roll_no <= 0) {
                cout << "Please enter a valid roll number" << endl;
                cin >> s[rear].roll_no;
            }
            //Duplicate roll number validation
            for (int i = front1; i < rear; i++) {
                while (s[rear].roll_no == s[i].roll_no) {
                    cout << "Roll number is already present in the list. Please enter another number!" << endl;
                    cin >> s[rear].roll_no;
                }
            }
            cout << "Enter the class of the student: " << endl;
            cin.ignore();
            getline(cin, s[rear].classes);
        }

    }

    //Function to serve a student.
    void DEQUE() {
        //Checking whether a QUEUE is empty or not while dequeuing
        if (isEmpty()) {
            cout << "The QUEUE is Empty" << endl;
            return;
        }
            //checking if there is only one element left.
        else if (front1 == rear) {
            cout << "Dequeued Student" << endl;
            cout << "Student Name: " << s[front1].name << endl;
            cout << "Roll Number: " << s[front1].roll_no << endl;
            cout << "Standard: " << s[front1].classes << endl;
            s[front1].name = "";
            s[front1].roll_no = 0;
            s[front1].classes = "";
            front1 = -1;
            rear = -1;
        } else {
            cout << "Dequeued Student" << endl;
            cout << "Student Name: " << s[front1].name << endl;
            cout << "Roll Number: " << s[front1].roll_no << endl;
            cout << "Standard: " << s[front1].classes << endl;
            s[front1].name = "";
            s[front1].roll_no = 0;
            s[front1].classes = "";
            front1 = (front1 + 1) % count1;
        }
    }

    void display() {
        //checking if there is no student in the list.
        if (isEmpty()) {
            cout << "There are no students in the QUEUE!!" << endl;
            return;
        } else {
            //displaying the number of students in the QUEUE in tabular format.
            cout << "Students in the QUEUE are: " << endl;
            cout << "Roll No." << "\t" << "    Name    " << "\t" << " Class " << endl;
            int i = front1;
            while (1) {
                cout << (s[i].roll_no) << "\t";
                cout << '\t' << (s[i].name) << "\t" << "  ";
                cout << s[i].classes << endl;
                if (i == rear)
                    break;
                i = (i + 1) % count1;
            }
        }

    }
};

int main() {
    int n;
    //taking the size of the QUEUE from the user.
    cout << "Enter the size of QUEUE: " << endl;
    cin >> n;
    CircularQueue q1(n);

    int option;
    do {
        cout << "What Operation do you want to perform? Select an option number! Press 0 to exit!!" << endl;
        cout << "Press 1 To Enter a student in a Queue" << endl;
        cout << "Press 2 To Serve the student" << endl;
        cout << "3. isEmpty" << endl;
        cout << "4. isFull" << endl;
        cout << "5. Display the list of students in a QUEUE:" << endl;
        cout << "6. Clear the screen" << endl << endl;

        cin >> option;
        switch (option) {
            case 1:
                cout << "Enqueue Function called!!" << endl;
                q1.enqueue();
                break;
            case 2:
                cout << "Dequeue function called!!" << endl;
                q1.DEQUE();
                break;
            case 3:
                if (q1.isEmpty()) {
                    cout << "Queue is Empty" << endl;
                } else {
                    cout << "Queue is not empty" << endl;
                }
                break;
            case 4:
                if (q1.isFull())
                    cout << "Queue is full" << endl;
                else
                    cout << "Queue is not full" << endl;
                break;
            case 5:
                q1.display();
                break;
            case 6:
                system("cls");
                break;
            case 0:
                cout << "Thank you for using the QUEUE application" << endl;
                break;
            default:
                cout << "Please enter a valid option: " << endl;
                break;
        }
    } while (option != 0);
    return 0;
}
