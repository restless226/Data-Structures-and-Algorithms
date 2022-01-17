// header file

#ifndef TBT
#define TBT

#include <iostream>

using namespace std;

template<typename T>
class tbtnode {
public:
    T data;
    tbtnode<T> *lptr;
    tbtnode<T> *rptr;
    int left_thread, right_thread;
    int check = 0;
};

template<typename T>
class tbt {
public:
    tbtnode<T> *head;
    tbtnode<T> *root = NULL;

    //constructor
    tbt();

    //method to create root
    void create_root();

    //method to insert new node
    void insert_node(T);

    //method for inorder traversal
    void inorder();

    //method for preorder traversal of TBT
    void preorder();

    //method for postorder traversal of TBT
    void postorder();
};

#endif // TBT_H_



// implementation file

#include<iostream>
#include "tbt.h"

using namespace std;

//constructor
template<typename T>
tbt<T>::tbt() {
    head = new tbtnode<T>;
    head->lptr = head;
    head->rptr = head;
    head->data = -1;
    head->left_thread = 0;
    head->right_thread = 1;
}

//method to create root of TBT
template<typename T>
void tbt<T>::create_root() {
    root = new tbtnode<T>;

    cout << "\nEnter data to be inserted at root : ";
    cin >> root->data;

    head->lptr = root;
    head->left_thread = 1;
    root->lptr = head;
    root->rptr = head;

    root->left_thread = 0;
    root->right_thread = 0;
}

//method to insert new node in TBT
template<typename T>
void tbt<T>::insert_node(T data) {
    if (head->lptr == head) {
        cout << "A root is needed to be created." << endl;
        return;
    }

    tbtnode<T> *temp1 = new tbtnode<T>;
    temp1->data = data;
    temp1->left_thread = temp1->right_thread = 0;
    tbtnode<T> *temp2 = root;
    int choice1;

    int check1 = 1;

    do {
        cout << "\nThe current node is : ";
        cout << temp1->data;
        cout << "\nMenu : \n1. Add to left. \n2. Add right.\n";
        cin >> choice1;
        switch (choice1) {
            case 1: {
                if (temp2->left_thread == 1) {
                    temp2 = temp2->lptr;
                } else {
                    temp1->lptr = temp2->lptr;
                    temp2->lptr = temp1;
                    temp1->rptr = temp2;
                    temp2->left_thread = 1;
                    check1 = 0;
                    break;
                }
                break;
            }

            case 2: {
                if (temp2->right_thread == 1) {
                    temp2 = temp2->rptr;
                } else {
                    temp1->rptr = temp2->rptr;
                    temp2->rptr = temp1;
                    temp1->lptr = temp2;
                    temp2->right_thread = 1;
                    check1 = 0;
                    break;
                }
                break;
            }

            default: {
                cout << "\nEnter from above choices only.\n";
            }
        }
    } while (check1 != 0);


}

//method for inorder traversal of TBT
template<typename T>
void tbt<T>::inorder() {
    tbtnode<T> *temp = head->lptr;

    while (temp != head) {
        while (temp->left_thread != 0) {
            temp = temp->lptr;
        }

        while (temp->right_thread != 1) {
            cout << temp->data << " ";
            temp = temp->rptr;
        }

        if (temp == head) {
            break;
        }

        cout << temp->data << " ";
        temp = temp->rptr;
    }
}

//method for preorder traversal
template<typename T>
void tbt<T>::preorder() {
    tbtnode<T> *temp = head->lptr;

    while (temp != head) {
        while (true) {
            cout << temp->data << " ";

            if (temp->left_thread == 0) {
                break;
            } else {
                temp = temp->lptr;
            }
        }

        while (temp->right_thread != 1) {
            temp = temp->rptr;
        }

        temp = temp->rptr;
    }
}

//method for postorder traversal of TBT
template<typename T>
void tbt<T>::postorder() {
    tbtnode<T> *temp = head->lptr;
    temp->check = 0;

    while (temp != head) {
        if (temp->left_thread == 1 && (temp->lptr->check != 2)) {
            temp = temp->lptr;
            temp->check = 0;
        }

        if (temp->right_thread == 1 && (temp->rptr->check != 2)) {
            temp = temp->rptr;
            temp->check = 1;
        }

        cout << temp->data << " ";

        if (temp->check == 0) {
            temp->check = 2;
            while (temp->right_thread == 1) {
                temp = temp->rptr;
            }

            temp = temp->rptr;
        } else {
            temp->check = 2;
            while (temp->left_thread == 1) {
                temp = temp->lptr;
            }
            temp = temp->lptr;
        }
    }
    return;
}



// main file


#include<iostream>
#include "tbt.h"
#include "tbt_impl.cpp"

using namespace std;

int main() {
    cout << "TBT Assignment" << endl;

    tbt<int> tree;
    int choice;
    while (true) {
        cout << "\nMenu:\n\t0.Exit\n\t1. Create root.\n\t2. Inserion.\n\t3. Inorder.\n\t4. Postorder. \n\t5. Preorder."
             << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        if (choice != 0) {
            switch (choice) {
                case 1:
                    tree.create_root();
                    cout << endl << "The node has been created.";
                    break;

                case 2:
                    int data;
                    cout << "\nEnter data to be inserted : ";
                    cin >> data;
                    tree.insert_node(data);
                    cout << endl << data << " has been inserted in TBT." << endl;
                    break;

                case 3:
                    cout << "Inorder Traversal: ";
                    tree.inorder();
                    break;

                case 4:
                    cout << endl << "Postorder Traversal: ";
                    tree.postorder();
                    break;

                case 5:
                    cout << endl << "Preorder Traversal: ";
                    tree.preorder();
                    break;

                default:
                    cout << "Select from the above options" << endl;
                    break;

            }
        } else {
            break;
        }
    }


}