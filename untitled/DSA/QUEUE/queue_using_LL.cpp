#include <iostream>

using namespace std;

struct Node *front = NULL;
struct Node *rear = NULL;

struct Node {
    int data;
    Node *next;
};

void LLTraversal(Node *ptr) {
    cout << "Printing elements of LL..." << endl;
    while (ptr != NULL) {
        cout << "" << ptr->data << endl;
        ptr = ptr->next;
    }
}

void enqueue(int val) {
    Node *n = new Node();
    if (n == NULL) {
        cout << "Queue is full" << endl;
    } else {
        n->data = val;
        n->next = NULL;
        if (front == NULL) {
            front = rear = n;
        } else {
            rear->next = n;
            rear = n;
        }
    }
}

int DEQUE() {
    int val = -1;
    Node *ptr = front;
    if (front == NULL) {
        cout << "QUEUE is empty" << endl;
    } else {
        front = front->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main() {
    LLTraversal(front);
    cout << "dequeued value:" << DEQUE() << endl;
    enqueue(4);
    enqueue(5);
    enqueue(6);
    LLTraversal(front);
    cout << "dequeued value:" << DEQUE() << endl;
    LLTraversal(front);
    cout << "dequeued value:" << DEQUE() << endl;
    enqueue(8);
    LLTraversal(front);


    return 0;
}