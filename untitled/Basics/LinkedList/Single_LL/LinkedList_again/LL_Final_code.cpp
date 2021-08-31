//#include <iostream>
//
//using namespace std;
//
//class Node {
//public:
//    int key;
//    int data;
//    Node *next;
//
//public:
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
//class SingleLinkedList {
//public:
//    Node *head;
//
//    SingleLinkedList() {
//        head = nullptr;
//    }
//
//    Node *nodeExists(int k) const {
//        Node *temp = nullptr;
//        Node *ptr = head;
//        while (ptr!= nullptr) {
//            if (ptr->key == k) {
//                temp = ptr;
//            }
//            ptr = ptr->next;
//        }
//        return temp;
//    }
//
//    void appendNode(Node *n) {
//        if (nodeExists(n->key) != nullptr) {
//            cout << "Node already exists" << endl;
//        } else {
//            // when LL is empty
//            if (head == nullptr) {
//                head = n;
//                cout << "Node appended" << endl;
//            } else {
//                Node *ptr = head;
//                while (ptr->next != nullptr) {
//                    ptr = ptr->next;
//                }
//                ptr->next = n;
//                cout << "Node appended" << endl;
//            }
//        }
//    };
//
//    void prependNode(Node *n) {
//        if (nodeExists(n->key) != nullptr) {
//            cout << "Node already exists" << endl;
//        } else {
//            if (head == nullptr) {
//                head = n;
//                cout << "Node prepended" << endl;
//            } else {
//                n->next = head;
//                head = n;
//                cout << "Node prepended" << endl;
//            }
//        }
//    };
//
//    // inserting a new node n after a node whose key value is k
//    void insertNode(int k, Node *n) {
//        Node *ptr = nodeExists(k);
//        if (ptr == nullptr) {
//            cout << "Invalid key value" << endl;
//        } else {
//            if (nodeExists(n->key) != nullptr) {
//                n->next = ptr->next;
//                ptr->next = n;
//            }
//        }
//    };
//
//    void deleteNode(int k) {
//        if (head == nullptr) {
//            cout << "LL is empty, can't delete anything" << endl;
//        } else if (head != nullptr) {
//            if (head->key == k) {
//                head = head->next;
//                cout << "Node unlinked" << endl;
//            } else {
//                Node *temp = nullptr;
//                Node *prev = head;
//                Node *current = head->next;
//
//                while (current != nullptr) {
//                    if (current->key == k) {
//                        temp = current;
//                        current = nullptr;
//                    } else {
//                        prev = prev->next;
//                        current = current->next;
//                    }
//                }
//
//                if (temp != nullptr) {
//                    prev->next = temp->next;
//                    cout << "Node unlinked" << endl;
//                } else {
//                    cout << "Node does not exist with key value " << k << endl;
//                }
//            }
//        }
//    };
//
//    void updateNode(int k, int d) {
//        Node *ptr = nodeExists(k);
//        if (ptr == nullptr) {
//            cout << "Node does not exist with key value " << k << endl;
//        } else {
//            ptr->data = d;
//            cout << "data updated" << endl;
//        }
//    };
//
//    void display() {
//        if (head == nullptr) {
//            cout << "List is empty" << endl;
//        } else {
//            Node *ptr = head;
//            while (ptr != nullptr) {
//                cout << ptr->data<<" ";
//                ptr = ptr->next;
//            }
//            cout<<endl;
//        }
//    }
//
//};
//
//int main() {
//
//    SingleLinkedList s;
//    int ch;
//    int key1, k1, data1;
//
//    while (ch != 7) {
//        cout << "Enter your choice:" << endl;
//        cout << "Press:" << endl;
//        cout << "1. To append Node" << endl;
//        cout << "2. To prepend Node" << endl;
//        cout << "3. To Insert Node after" << endl;
//        cout << "4. To Delete node by key" << endl;
//        cout << "5. To Update node by key" << endl;
//        cout << "6. To Display" << endl;
//        cout << "7. To exit" << endl;
//
//        cin >> ch;
//        Node *n1 = new Node;
//
//        switch (ch) {
//            case 1:
//                cout << "Enter key:" << endl;
//                cin >> key1;
//                cout << "Enter data:" << endl;
//                cin >> data1;
//                n1->data = data1;
//                n1->key = key1;
//                s.appendNode(n1);
//                break;
//
//            case 2:
//                cout << "Enter key:" << endl;
//                cin >> key1;
//                cout << "Enter data:" << endl;
//                cin >> data1;
//                n1->data = data1;
//                n1->key = key1;
//                s.prependNode(n1);
//                break;
//
//            case 3:
//                cout << "Enter key value of node after which you want to insert a new node:" << endl;
//                cin >> k1;
//                cout << "Enter key of node you want to insert:" << endl;
//                cin >> key1;
//                cout << "Enter data:" << endl;
//                cin >> data1;
//                s.insertNode(k1, n1);
//                break;
//
//            case 4:
//                cout << "Enter key of node you want to delete:" << endl;
//                cin >> key1;
//                s.deleteNode(key1);
//                break;
//
//            case 5:
//                cout << "Enter key of node you want to update:" << endl;
//                cin >> key1;
//                cout << "Enter new data value:" << endl;
//                cin >> data1;
//                s.updateNode(key1, data1);
//                break;
//
//            case 6:
//                s.display();
//                break;
//
//            case 7:
//                cout << "Exiting from the application..." << endl;
//                break;
//
//            default:
//                cout << "Enter a valid choice" << endl;
//                break;
//        }
//    }
//
//    return 0;
//}