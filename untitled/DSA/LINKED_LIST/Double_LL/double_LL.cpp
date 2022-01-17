#include <iostream>

using namespace std;

class Node {
public:
    int key;
    int data;
    Node *prev;
    Node *next;

    Node() {
        key = 0;
        data = 0;
        next = NULL;
        prev = NULL;
    }

    Node(int k, int d) {
        key = k;
        data = d;
    }
};

class DoublyLinkedList {
public:
    Node *head;

    DoublyLinkedList() {
        head = NULL;
    }

    DoublyLinkedList(Node *h) {
        this->head = h;
    }

    Node *nodeExists(int k) {
        Node *ptr = head;
        Node *temp = NULL;

        while (ptr != NULL) {
            if (ptr->key == k) {
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }

    void appendNode(Node *n) {
        if (nodeExists(n->key) != NULL) {
            cout << "Node with this key already exists" << endl;
        } else {
            if (head == NULL) {
                head = n;
                cout << "Node appended as head node" << endl;
            } else {
                if (head == NULL) {
                    head = n;
                    cout << "Node Appended as Head Node" << endl;
                } else {
                    Node *ptr = head;
                    while (ptr->next != NULL) {
                        ptr = ptr->next;
                    }
                    ptr->next = n;
                    n->prev = ptr;
                    cout << "Node appended" << endl;
                }
            }
        }
    }

    void prependNode(Node *n) {
        if (nodeExists(n->key) != NULL) {
            cout << "Node with this key already exists" << endl;
        } else {
            if (head == NULL) {
                head = n;
                cout << "Node prepended as head node" << endl;
            } else {
                n->next = head;
                head->prev = n;
                head = n;
                cout << "Node prepended" << endl;
            }
        }
    }

    void insertNodeAfter(int k, Node *n) {
        Node *ptr = nodeExists(k);
        if (ptr == NULL) {
            cout << "Node with this key does not exist" << endl;
        } else {
            if (nodeExists(n->key) != NULL) {
                cout << "Node with this key already exists;" << " Try again" << endl;
            } else {
                // inserting at end
                Node *temp = ptr->next;
                if (temp == NULL) {
                    n->prev = ptr;
                    ptr->next = n;
                }
                    // inserting in between
                else {
                    n->prev = ptr;
                    n->next = ptr->next;

                    temp->prev = n;
                    ptr->next = n;
                    cout << "Node inserted" << endl;
                }
            }
        }
    }

    void deleteNode(int k) {
        Node *ptr = nodeExists(k);
        if (ptr == NULL) {
            cout << "Node with this key does not exist" << endl;
        } else {
            if (head == NULL) {
                cout << "LL is empty, cannot delete anything" << endl;
            } else {
                // deleting head node
                if (head->key == k) {
                    head = head->next;
                    cout << "Node unlinked with key value:" << k << endl;
                } else {
                    Node *prevNode = ptr->prev;
                    Node *nextNode = ptr->next;

                    // deleting at end
                    if (nextNode == NULL) {
                        prevNode->next == NULL;
                        cout << "Node at end unlinked" << endl;
                    }

                        // deleting in between
                    else {
                        prevNode->next = nextNode;
                        nextNode->prev = prevNode;
                        cout << "Node unlinked with key value:" << k << endl;
                    }
                }
            }
        }
    }

    void updateNode(int k, int d) {
        Node *ptr = nodeExists(k);
        if (ptr != NULL) {
            ptr->data = d;
            cout << "Node data updated" << endl;
        } else {
            cout << "Node with this key does not exist" << endl;
        }
    }

    void printList() {
        if (head == NULL) {
            cout << "LL is empty" << endl;
        } else {
            Node *ptr = head;
            cout << "printing LL..." << endl;
            while (ptr != NULL) {
                cout << "key:" << (ptr->key) << " " << "data:" << (ptr->data) << endl;
                ptr = ptr->next;
            }
            cout << endl;
        }

    }
};

int main() {
    DoublyLinkedList obj;
    int option;
    int key1, k1, data1;
    do {
        cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. appendNode()" << endl;
        cout << "2. prependNode()" << endl;
        cout << "3. insertNodeAfter()" << endl;
        cout << "4. deleteNodeByKey()" << endl;
        cout << "5. updateNodeByKey()" << endl;
        cout << "6. print()" << endl;
        cout << "7. Clear Screen" << endl << endl;

        cin >> option;
        Node *n1 = new Node();
        //Node n1;

        switch (option) {
            case 0:
                break;
            case 1:
                cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
                cin >> key1;
                cin >> data1;
                n1->key = key1;
                n1->data = data1;
                obj.appendNode(n1);
                break;

            case 2:
                cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
                cin >> key1;
                cin >> data1;
                n1->key = key1;
                n1->data = data1;
                obj.prependNode(n1);
                break;

            case 3:
                cout
                        << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: "
                        << endl;
                cin >> k1;
                cout << "Enter key & data of the New Node first: " << endl;
                cin >> key1;
                cin >> data1;
                n1->key = key1;
                n1->data = data1;

                obj.insertNodeAfter(k1, n1);
                break;

            case 4:

                cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
                cin >> k1;
                obj.deleteNode(k1);
                break;

            case 5:
                cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
                cin >> key1;
                cin >> data1;
                obj.updateNode(key1, data1);
                break;

            case 6:
                obj.printList();
                break;

            case 7:
                system("cls");
                break;

            default:
                cout << "Enter Proper Option number " << endl;
                break;
        }

    } while (option != 0);

    return 0;
}