#include <iostream>
#include "linkedlistwithstack.h"

using namespace std;

template<class T>
Node_t<T>::Node_t() {
    cout << "Enter maximum size of stack : ";
    cin >> size;
    while (size < 0) {
        cout << "Enter maximum size of stack : ";
        cin >> size;
    }
    cout << endl;
}

template<class T>
void Node_t<T>::push(int da) {
    count++;

    struct Node<T> *temp;
    temp = new(Node<T>);
    if (count <= size) {

        temp->data = da;
        temp->link = top;
        top = temp;
    } else {
        cout << "Stack is full" << endl;
    }


}

template<class T>
int Node_t<T>::pop() {
    struct Node<T> *temp;

    if (top == NULL) {
        cout << "Stack is empty" << endl;
    } else {
        count--;
        // Top assign into temp
        temp = top;
        // Assign second node to top
        top = top->link;
        // remove connection between first and second
        temp->link = NULL;
        int a = temp->data;
        cout << "Element popped : ";
        // removes memory of top node
        free(temp);
        return a;
    }
}

template<class T>
void Node_t<T>::peek() {

    // Check for empty stack
    if (top != NULL)
        cout << "Peek Value : " << top->data << endl;
    else
        cout << "Stack is empty" << endl;
}

template<class T>
void Node_t<T>::display() {
    struct Node<T> *temp;

    // Check for stack underflow
    if (top == NULL) {
        cout << "Stack is empty";
    } else {
        temp = top;
        while (temp != NULL) {

            // Print node data
            cout << temp->data << "-> ";

            // Assign temp link to temp
            temp = temp->link;
        }
    }
}
