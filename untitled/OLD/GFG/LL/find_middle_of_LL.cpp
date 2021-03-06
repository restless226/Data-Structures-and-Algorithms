// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

/* Function to get the middle of the linked list*/
int getMiddle(Node *head);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n - 1; ++i) {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        cout << getMiddle(head) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head) {
    // Your code here
    if (head == NULL) {
        return -1;
    }

    Node *ptr = head;
    int l = 0;
    while (ptr != NULL) {
        l++;
        ptr = ptr->next;
    }

    if (l % 2 == 0) {
        l = (l + 2) / 2;
    } else {
        l = (l + 1) / 2;
    }

    int m = 0;

    Node *ptr1 = head;
    while (ptr1 != NULL) {
        m++;
        if (m == l) {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
    }


}
