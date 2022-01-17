#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
public:
    int data;
    SinglyLinkedListNode *next;

    SinglyLinkedListNode(int node_data) {
        this->data = node_data;
        this->next = nullptr;
    }
};

class SinglyLinkedList {
public:
    SinglyLinkedListNode *head;
    SinglyLinkedListNode *tail;

    SinglyLinkedList() {
        this->head = nullptr;
        this->tail = nullptr;
    }

    void insert_node(int node_data) {
        SinglyLinkedListNode *node = new SinglyLinkedListNode(node_data);

        if (!this->head) {
            this->head = node;
        } else {
            this->tail->next = node;
        }

        this->tail = node;
    }
};

void print_singly_linked_list(SinglyLinkedListNode *node, string sep, ofstream &fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode *node) {
    while (node) {
        SinglyLinkedListNode *temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode *head, int positionFromTail) {
//    int length=2;
//    SinglyLinkedListNode *ptr=head;
//    if(head!=NULL){
//        while(ptr!=NULL){
//            ptr=ptr->next;
//            length++;
//        }
//        if(length-1>=positionFromTail) {
//            int count = length - positionFromTail;
//            int key=1;
//            ptr=head;
//            while(key!=count){
//                ptr=ptr->next;
//                key++;
//            }
//            return ptr->data;
//        } else{
//            return 0;
//        }
//    } else{
//        return 0;
//    }

    if (head == NULL) {
        return -1;
    }

    int length = 1;
    SinglyLinkedListNode *ptr = head;
    SinglyLinkedListNode *ptr1 = head;

    while (ptr->next != NULL) {
        ptr = ptr->next;
        length++;
    }
    int count = length - positionFromTail;
    int key = 1;
    while (key != count) {
        ptr1 = ptr1->next;
        key++;
    }
    return ptr1->data;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int tests;
    cin >> tests;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int tests_itr = 0; tests_itr < tests; tests_itr++) {
        SinglyLinkedList *llist = new SinglyLinkedList();

        int llist_count;
        cin >> llist_count;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 0; i < llist_count; i++) {
            int llist_item;
            cin >> llist_item;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            llist->insert_node(llist_item);
        }

        int position;
        cin >> position;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = getNode(llist->head, position);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
