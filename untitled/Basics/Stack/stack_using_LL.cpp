//#include <iostream>
//
//using namespace std;
//
//
//class Node {
//public:
//    int key;
//    int data;
//    Node *next;
//
//    Node() {
//        key = 0;
//        data = 0;
//        next = nullptr;
//    }
//
//    Node(int k, int d) {
//        key = k;
//        data = d;
//        next = nullptr;
//    }
//};
//
//class Stack {
//public:
//    Node *top;
//
//    Stack() {
//        top = nullptr;
//    }
//
//    bool isEmpty() {
//        if (top == nullptr) {
//            return true;
//        } else {
//            return false;
//        }
//    }
//
//    bool nodeExists(Node *n) {
//        Node *temp = top;
//        bool flag = false;
//        while (temp != nullptr) {
//            if (temp->key == n->key) {
//                flag = true;
//                break;
//            }
//            temp = temp->next;
//        }
//        return flag;
//    }
//
//    void push(Node *n) {
//        if (top == nullptr) {
//            top = n;
//            cout << "Node pushed" << endl;
//        } else if (nodeExists(n)) {
//            cout << "Node with this key already exists" << endl;
//        } else {
//            Node *temp = top;
//            top = n;
//            n->next = temp;
//            cout << "Node pushed" << endl;
//        }
//    }
//
//    Node *pop() {
//        Node *temp = nullptr;
//        if (isEmpty()) {
//            cout << "Stack is empty, nothing to pop" << endl;
//            return temp;
//        } else {
//            temp = top;
//            top = top->next;
//            return temp;
//        }
//    }
//
//    Node *peek() {
//        Node *temp = nullptr;
//        if (isEmpty()) {
//            cout << "Stack is empty" << endl;
//            return temp;
//        } else {
//            return top;
//        }
//    }
//
//    int count() {
//        int c = 0;
//        if (isEmpty()) {
//            return c;
//        } else {
//            Node *temp = top;
//            while (temp != nullptr) {
//                c++;
//                temp = temp->next;
//            }
//            return c;
//        }
//    }
//
//    void display() {
//        Node *temp = top;
//        if (isEmpty()) {
//            cout << "Stack is empty" << endl;
//        } else {
//            cout << "Displaying values in stack..." << endl;
//            while (temp != nullptr) {
//                cout << "Key value:" << temp->key << ", " << "Data value:" << temp->data << endl;
//                temp = temp->next;
//            }
//        }
//    }
//
//};
//
//int main() {
//    Stack s;
//    int ch, key1, val1;
//    while (true) {
//        cout << "Enter a choice:" << endl;
//        cout << "Press: \n1 isEmpty \n2 Push \n3 Pop \n4 count \n5 peek \n6 Display \n7 To exit" << endl;
//        cin >> ch;
//        Node *newNode = new Node();   // Global variable
//        switch (ch) {
//            case 1:
//                if (s.isEmpty()) {
//                    cout << "Stack is empty" << endl;
//                } else {
//                    cout << "Stack is not empty" << endl;
//                }
//                break;
//            case 2:
//                cout << "Enter key value of node:" << endl;
//                cin >> key1;
//                cout << "Enter data value to push:" << endl;
//                cin >> val1;
//
//                newNode->key = key1;
//                newNode->data = val1;
//                s.push(newNode);
//                break;
//            case 3:
//                newNode = s.pop();
//                cout << "Popped element key value:" << newNode->key << endl;
//                cout << "Popped element data value:" << newNode->data << endl;
//                cout << endl;
//                break;
//            case 4:
//                cout << "Count : " << s.count() << endl;
//                break;
//            case 5:
//                if (s.isEmpty()) {
//                    cout << "Stack is empty" << endl;
//                } else {
//                    cout << "Enter position:" << endl;
//                    newNode = s.peek();
//                    cout << "Top of stack is: " << newNode->data;
//                }
//                break;
//            case 6:
//                s.display();
//                break;
//            case 7:
//                cout << "Exiting from the application..." << endl;
//                _Exit(0);
//            default:
//                cout << "Enter a valid choice" << endl;
//                break;
//
//        }
//    }
//    return 0;
//}