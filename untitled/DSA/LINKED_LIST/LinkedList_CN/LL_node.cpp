#include <iostream>

using namespace std;

#include "LL_node.h"


void printLL(LLNode *head) {
    cout << "[PRINTING LL...]" << endl;

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


LLNode *takeInput() {

    int data;
    cout << "[ENTER HEAD NODE DATA]:" << endl;
    cin >> data;

    LLNode *head = NULL;

    int i = 2;

    while (data != -1) {
        LLNode *newNode = new LLNode(data);

        if (head == NULL) {
            head = newNode;
        } else {
            LLNode *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }
        cout << "[ENTER DATA OF NODE " << i << "]:" << endl;
        cout << "[ENTER DATA AS -1 IF YOU WANT TO STOP] :(" << endl;
        cin >> data;
        i++;
    }


    return head;
}


LLNode *takeInputPro() {
    int data;
    cout << "[ENTER HEAD NODE DATA]:" << endl;
    cin >> data;

    LLNode *head = NULL;
    LLNode *tail = NULL;

    int i = 2;

    while (data != -1) {
        LLNode *newNode = new LLNode(data);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next; // OR tail=newNode;
        }

        cout << "[ENTER DATA OF NODE " << i << "]:" << endl;
        cout << "[ENTER DATA AS -1 IF YOU WANT TO STOP] :(" << endl;
        cin >> data;
        i++;
    }

    return head;
}


//LLNode* insertNode(LLNode* head,int index, int data){
//
//    if(head==NULL){
//        head =new LLNode(data);
//    }else if(index==0){
//        LLNode* newNode=new LLNode(data);
//        newNode->next=head;
//        head=newNode;
//    }else{
//        LLNode* newNode=new LLNode(data);
//        int i=0;
//
//        LLNode* temp=head;
//        while (i!=index-1){
//            temp=temp->next;
//            i++;
//        }
//
//        if(temp->next==NULL){
//            temp->next=newNode;
//        }else{
//            newNode->next=temp->next;
//            temp->next=newNode;
//        }
//    }
//    return head;
//
//}



//LLNode* deleteNode(LLNode* head,int index){
//    if(head==NULL){
//        cout<<"[NOTHING TO DELETE :)]"<<endl;
//        return head;
//    }else if(index==0){
//        head=head->next;
//        return head;
//    }else{
//        int i=0;
//
//        LLNode* temp=head;
//
//        while (i!=index-1){
//            temp=temp->next;
//            i++;
//        }
//
//        temp->next=temp->next->next;
//        cout<<"[NODE DELETED SUCCESSFULLY:)]"<<endl;
//    }
//
//    return head;
//}




//int lengthLL(LLNode* head){
//    int len=0;
//
//    while (head!=NULL){
//        len++;
//        head=head->next;
//    }
//    return len;
//}


int lengthLLRecursive(LLNode *head) {
    if (head == NULL) {
        return 0;
    }

    return lengthLLRecursive(head->next) + 1;
}


LLNode *insertNodeRecursive(LLNode *head, int index, int data) {
    if (head == NULL) {
        head = new LLNode(data);
        return head;
    } else if (index == 0) {
        LLNode *newNode = new LLNode(data);
        newNode->next = head;
        head = newNode;
        return head;
    }

    head->next = insertNodeRecursive(head->next, index - 1, data);

    return head;
}


LLNode *deleteNodeRecursive(LLNode *head, int index) {
    if (head == NULL) {
        cout << "[NOTHING TO DELETE :)]" << endl;
        return head;
    } else if (index == 0) {
        head = head->next;
        return head;
    }

    head->next = deleteNodeRecursive(head->next, index - 1);

    return head;
}


void midpointLL(LLNode *head, int halfLength) {
    int i = 0;

    while (i != halfLength) {
        head = head->next;
        i++;
    }

    cout << "[MIDPOINT OF LL HAS VALUE]:" << head->data << endl;
}


// FINDING MIDPOINT OF LL WITHOUT LENGTH OF LL
void midpointLLProApproach(LLNode *head) {

    if (head == NULL) {
        cout << "[NO MIDPOINT AS LL IS EMPTY :)]" << endl;
    } else {
        LLNode *slow = head;
        LLNode *fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }

        cout << "[MIDPOINT OF LL HAS VALUE]:" << slow->data << endl;
    }

}

//TODO
LLNode *mergeTwoSortedLL(LLNode *head1, LLNode *head2) {
    LLNode *headFinal = NULL;
    LLNode *tailFinal = NULL;

    if (head1->data > head2->data) {
        headFinal = tailFinal = new LLNode(head2->data);
        head2 = head2->next;
    } else if (head1->data < head2->data) {
        headFinal = tailFinal = new LLNode(head1->data);
        head1 = head1->next;
    } else if (head1->data == head2->data) {
        headFinal = tailFinal = new LLNode(head1->data);
        head1 = head1->next;
        head2 = head2->next;
    }

    LLNode *newNode = tailFinal;

    while (head1->next != NULL && head2->next != NULL) {
        if (head1->data > head2->data) {
            newNode = new LLNode(head2->data);
            head1 = head1->next;
        } else if (head1->data < head2->data) {
            head2 = head2->next;
        } else if (head1->data == head2->data) {
            headFinal = tailFinal = new LLNode(head1->data);
            head1 = head1->next;
            head2 = head2->next;
        }
    }

    return headFinal;
}


// O(n**2) - Time Complexity
// [NOOB APPROACH :(]
LLNode *reverseLL(LLNode *head) {
    // Base case
    if (head == NULL || head->next == NULL) {
        return head;
    }


    // Recursive call
    LLNode *smallAns = reverseLL(head->next);

    // small calculation
    LLNode *temp = smallAns;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = head;
    head->next = NULL;

    return smallAns;
}


// O(n) - Time Complexity
// [PRO APPROACH :)]

// [NOTE]: pair.first=head and pair.second=tail
pair<LLNode *, LLNode *> reverseLLDoubleNode(LLNode *head) {
// Base case
    if (head == NULL || head->next == NULL) {
        pair<LLNode *, LLNode *> p;
        p.first = head;
        p.second = head;
        return p;
    }

    // Recursive call
    pair<LLNode *, LLNode *> p = reverseLLDoubleNode(head->next);

    // small calculation
    p.second->next = head;
    head->next = NULL;

    p.second = head;  // NOW TAIL BECOMES HEAD :)
    return p;
}


// O(n) - Time Complexity
// [PRO APPROACH :)]
LLNode *reverseLLFinal(LLNode *head) {
    // Base case
    if (head == NULL || head->next == NULL) {
        return head;
    }


    // Recursive call
    LLNode *smallAns = reverseLLFinal(head->next);

    // small calculation
    LLNode *tail = head->next;

    tail->next = head;
    head->next = NULL;

    return smallAns;
}

// TODO
LLNode *reverseLLIterative(LLNode *head) {
    LLNode *previous = NULL;
    LLNode *current = head;
    LLNode *next = head->next;

    while (current != NULL) {
        current->next = previous;
        previous = current;
        current = next;
        next = current->next;
    }

    return previous;
}


int main() {
    // STATIC CREATION OF NODES
//    LLNode node1(10);
//
//    // Let 'node1' be HEAD NODE
//    // Storing address of 'node1' in 'head' pointer
//    LLNode* head=&node1;
//
//    LLNode node2(20);
//
//    node1.next=&node2;
//
//    cout<<node1.data<<" "<<node2.data<<endl;
//
//    // PRINTING 'node1' and 'node2' with the help of 'head' pointer
//    cout<<head->data<<" "<<head->next->data<<endl;



    // DYNAMIC CREATION OF NODES
    // [NOTE]: 'node3' is a pointer variable which contains the address of 'node3', which is created in 'STACK MEMORY'
//    LLNode* node3=new LLNode(100);
//    LLNode* head=node3;
//
//    LLNode* node4=new LLNode(200);
//    LLNode* node5=new LLNode(200);
//    LLNode* node6=new LLNode(200);
//    LLNode* node7=new LLNode(200);
//
//    node3->next=node4;
//    node4->next=node5;
//    node5->next=node6;
//    node6->next=node7;
//    node7->next=NULL;
//
//    printLL(head);
//    printLL(head);


    cout << "[TAKING NODES OF LL AS INPUT]..." << endl;
    LLNode *head = takeInputPro();
    cout << '\n';


    int data;
    int index;
    int choice;

    while (true) {
        cout << "********************MENU********************" << endl;
        cout << "\nEnter Your choice:" << endl;
        cout << "PRESS:";
        cout << "\n1. [TO INSERT NODE A NEW NODE IN LL]"
                "\n2. [TO DELETE NODE A NEW NODE IN LL]"
                "\n3. [TO FIND MIDPOINT(NODE) IN LL]... "
                "\n4. [REVERSE LL NOOB WAY :(]... "
                "\n5. [REVERSE LL USING RECURSION AND PAIR OF NODES]... "
                "\n6. [REVERSE LL USING RECURSION NAD TAIL NODE]... "
                "\n7. [REVERSE LL ITERATIVELY...] "
                "\n8. [TO DISPLAY LENGTH OF LL]..."
                "\n9. [TO PRINT LL]..."
                "\n10.[TO EXIT] ";
        cout << "\n********************************************" << endl;
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1: {
                cout << "[ENTER INDEX(0-BASED INDEXING) WHERE YOU WANT TO INSERT NODE]:" << endl;
                cin >> index;

                if (index > lengthLLRecursive(head)) {
                    cout << "[WARNING] INVALID INDEX VALUE :)" << endl;
                    cout << "[ENTER INDEX AGAIN]:" << endl;
                    cin >> index;
                }

                cout << "[ENTER DATA OF NODE YOU WANT TO INSERT]:" << endl;
                cin >> data;

                head = insertNodeRecursive(head, index, data);
                cout << '\n';
                break;
            }

            case 2: {
                cout << "[ENTER INDEX(0-BASED INDEXING) OF NODE WHICH YOU WANT TO DELETE]:" << endl;
                cin >> index;

                if (index > lengthLLRecursive(head)) {
                    cout << "[WARNING] INVALID INDEX VALUE :)" << endl;
                    cout << "[ENTER INDEX AGAIN]:" << endl;
                    cin >> index;
                }

                head = deleteNodeRecursive(head, index);
                cout << '\n';
                break;
            }
            case 3: {
                midpointLL(head,
                           lengthLLRecursive(head) % 2 == 0
                           ? (lengthLLRecursive(head) - 1) / 2
                           : lengthLLRecursive(head) - 1 / 2);

                midpointLLProApproach(head);
                cout << '\n';
                break;
            }

            case 4: {
                head = reverseLL(head);
                printLL(head);
                cout << '\n';
                break;
            }

            case 5: {
                pair<LLNode *, LLNode *> p = reverseLLDoubleNode(head);
                head = p.first;
                cout << "[PRINTING REVERSE LINKED LIST AGAIN :)]..." << endl;
                printLL(head);
                cout << '\n';
            }

            case 6: {
                head = reverseLLFinal(head);
                cout << "[PRINTING REVERSE LINKED LIST ONE MORE TIME :)]..." << endl;
                printLL(head);
                cout << '\n';
            }

            case 7: {
                //TODO
//                head=reverseLLIterative(head);
//                cout<<"[PRINTING REVERSE LINKED LIST USING ITERATIVE APPROACH :)]..."<<endl;
//                printLL(head);
//                cout<<'\n';
            }

            case 8:
                cout << "[LENGTH OF LL IS]:" << lengthLLRecursive(head);
                cout << '\n';
                break;

            case 9:
                printLL(head);
                break;

            case 10: {
                cout << "[EXITING]..." << endl;
                _Exit(0);
            }

            default: {
                cout << "[ENTER A VALID CHOICE]..." << endl;
                break;
            }
        }
    }

    return 0;
}


