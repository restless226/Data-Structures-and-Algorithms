#include <iostream>

using namespace std;

struct node {
    int data;
    node *next;
};

bool isEmpty(node *head) {
    if (head == NULL) {
        return true;
    } else {
        return false;
    }
}

void insertAsFirstElement(node *&head, node *&last, int n) {
    node *temp = new node;
    temp->data = n;
    temp->next = NULL;

    head = temp;
    last = temp;

}

char menu();

void insert(node *&head, node *&last, int n) {
    if (isEmpty(head)) {
        insertAsFirstElement(head, last, n);
    }
}

void remove(node *&head, node *&last);

void showList(node *current);

int main() {
    node *head = NULL;
    node *last = NULL;

    return 0;
}