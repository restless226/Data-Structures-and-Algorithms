#include <bits/stdc++.h>

using namespace std;

struct Node {
    string data;
    Node *next;

    Node(string x) {
        data = x;
        next = NULL;
    }
};

Node *newNode(string str) {
    Node *new_node = new Node(str);
    new_node->next = NULL;
    return new_node;
}

bool compute(struct Node *root);

void print(Node *root) {
    Node *temp = root;

    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    // your code goes here
    int T;
    cin >> T;
    while (T--) {
        int K;
        cin >> K;
        struct Node *head = NULL;
        struct Node *temp = head;

        for (int i = 0; i < K; i++) {
            string str = "";
            cin >> str;
            if (head == NULL)
                head = temp = new Node(str);
            else {
                temp->next = new Node(str);
                temp = temp->next;
            }
        }
        if (compute(head))
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}// } Driver Code Ends


/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

bool compute(Node *root) {
    //Your code goes here
    Node *ptr = root;
    int l = 0;
    while (ptr != NULL) {
        l++;
        ptr = ptr->next;
    }
    string a[l];
    string s1;
    string s2;

    ptr = root;
    int x = 0;
    while (ptr != NULL) {
        a[x] = ptr->data;
        x++;
        ptr = ptr->next;
    }

    for (int i = 0; i < l; i++) {
        s1 += a[i];
    }
    for (int i = l - 1; i >= 0; i--) {
        s2 += a[i];
    }
    if (s1 == s2) {
        return true;
    } else {
        return false;
    }

}
