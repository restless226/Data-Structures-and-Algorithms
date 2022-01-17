#include <cstdlib>
#include <iostream>
#include "List.h"

using namespace std;

LINKED_LIST::LINKED_LIST() {
    head = NULL;
    current = NULL;
    temp = NULL;
}

void LINKED_LIST::addNode(int addData) {
    // creating a new node and pointing nodePtr to that node
    nodePtr n = new node;
    n->next = NULL;   // last node pointer
    n->data = addData;

    // executes when we have at least 1 element in the list
    if (head != NULL) {
        current = head;
        // condition checking whether we are at end of the list or not
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = n;
    } else {
        head = n;
    }
}

void LINKED_LIST::deleteNode(int delData) {
    nodePtr delPtr = NULL;
    temp = head;
    current = head;
    while (current != NULL && current->data != delData) {
        temp = current;
        current = current->next;
    }
    if (current == NULL) {
        cout << delData << "was not found in the list" << endl;
        delete delPtr;  // to free-up memory
    } else {
        // found node with delData
        delPtr = current;
        current = current->next;
        temp->next = current;

        if (delPtr == head) {
            head = head->next;
            temp = NULL;
        }

        delete delPtr;
        cout << "Value " << delData << " deleted successfully" << endl;
    }
}

void LINKED_LIST::printList() {
    current = head;
    while (current != NULL) {
        cout << current->data << endl;
        current = current->next;
    }
}