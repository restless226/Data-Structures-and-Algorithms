// { Driver Code Starts
#include <bits/stdc++.h>

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

struct Node *start = NULL;

struct Node *segregate(struct Node *head);

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        struct Node *newHead = segregate(start);
        printList(newHead);
    }

    return 0;
}// } Driver Code Ends


/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

// This function is to segregate the elememtns in the linked list
// This will do the required arrangement by changing the links
Node *segregate(Node *head) {

    // Add code here
    int zeroes, ones, twos = 0;
    Node *ptr = head;

    while (ptr != NULL) {
        if (ptr->data == 0) {
            zeroes++;
        } else if (ptr->data == 1) {
            ones++;
        } else {
            twos++;
        }
        ptr = ptr->next;
    }

    ptr = head;

    int a = 0;
    while (ptr != NULL) {
        if (a <= zeroes) {
            ptr->data = 0;
        } else if (a <= zeroes + ones && a > zeroes) {
            ptr->data = 1;
        } else if (a <= zeroes + ones + twos && a > zeroes + ones) {
            ptr->data = 2;
        }
        a++;
        ptr = ptr->next;
    }


}
