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