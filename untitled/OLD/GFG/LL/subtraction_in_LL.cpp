// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *buildList(int size) {
    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++) {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node *n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

Node *subLinkedList(Node *l1, Node *l2);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;

        cin >> n;
        Node *first = buildList(n);

        cin >> m;
        Node *second = buildList(m);

        Node *res = subLinkedList(first, second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* Structure of linked list Node

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

*/

//You are required to complete this method

Node *subLinkedList(Node *l1, Node *l2) {
    //Your code here
    int unit1 = 1;
    Node *ptr1 = l1;
    while (ptr1 != NULL) {
        unit1++;
        ptr1 = ptr1->next;
    }
    ptr1 = l1;

    int unit2 = 1;
    Node *ptr2 = l2;
    while (ptr2 != NULL) {
        unit2++;
        ptr2 = ptr2->next;
    }
    ptr2 = l2;

    int sum1 = 0;
    while (ptr1 != NULL) {
        sum1 += ptr1->data;
        unit1--;
        ptr1 = ptr1->next;
    }

    int sum2 = 0;
    while (ptr2 != NULL) {
        sum2 += ptr2->data;
        unit2--;
        ptr2 = ptr2->next;
    }

    int r;
    if (sum1 > sum2) {
        r = sum1 - sum2;
    } else {
        r = sum2 - sum1;
    }

    while (r >= 10) {
        r = r / 10;
    }

    Node *p = new Node(r);

    return p;

}