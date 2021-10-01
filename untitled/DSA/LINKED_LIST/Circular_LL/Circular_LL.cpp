//#include <iostream>
//
//using namespace std;
//
//class Node{
//public:
//    int key;
//    int data;
//    Node *next;
//
//    Node(){
//        key=0;
//        data=0;
//        next=NULL;
//    }
//
//    Node(int k,int d){
//        key=k;
//        data=d;
//    }
//};
//
//class CircularLinkedList{
//public:
//    Node *head;
//
//    CircularLinkedList(){
//        head=NULL;
//    }
//
//    CircularLinkedList(Node *h){
//        head=h;
//    }
//
//    Node* nodeExists(int k) {
//        Node *temp = NULL;
//        Node *ptr = head;
//
//        if (ptr == NULL) {
//            cout << "LL is empty" << endl;
//            return temp;
//        } else {
//            do {
//                if (ptr->key == k) {
//                    temp = ptr;
//                }
//                ptr=ptr->next;
//            } while (ptr != head);
//            return temp;
//        }
//    }
//
//    void appendNode(Node *n){
//        if(nodeExists(n->key)!=NULL){
//            cout<<"Node with this key already exists"<<endl;
//        } else{
//            if(head==NULL){
//                head=n;
//                n->next=head;
//                cout<<"Node appended as head node"<<endl;
//            } else{
//                Node *ptr=head;
//                while (ptr->next!=head){
//                    ptr=ptr->next;
//                }
//                n->next=head;
//                ptr->next=n;
//            }
//        }
//    }
//
//    void prependNode(Node *n){
//        if(nodeExists(n->key)!=NULL){
//            cout<<"Node with this key already exists"<<endl;
//        } else{
//            if(head==NULL){
//                head=n;
//                n->next=n;
//            } else{
//                Node *ptr=head;
//                while(ptr->next!=head){
//                    ptr=ptr->next;
//                }
//                ptr->next=n;
//                n->next=head->next;
//                head=n;
//            }
//        }
//    }
//
//    void insertNodeAfter(int k,Node *n){
//        Node *ptr=nodeExists(k);
//        if(ptr==NULL){
//            cout<<"Node with this key does not exist"<<endl;
//        } else{
//            if(nodeExists(n->key)!=NULL){
//                cout<<"Node with this key already exists"<<endl;
//            } else{
//                // insert as last node
//                if(ptr->next==head){
//                    n->next=head;
//                    ptr->next=n;
//                    cout<<"Node inserted at end"<<endl;
//                }
//                // insert in between
//                else {
//                    n->next = ptr->next;
//                    ptr->next = n;
//                    cout<<"Node inserted"<<endl;
//                }
//            }
//        }
//    }
//
//    void deleteNode(int k){
//        Node *ptr=nodeExists(k);
//        if(ptr==NULL){
//            cout<<"Node with this key does not exist"<<endl;
//        }else{
//            // deleting head node
//           if(ptr==head){
//                if(head->next==NULL){
//                    head=NULL;
//                    cout<<"Head node unlinked, LL is empty now"<<endl;
//                } else{
//                    Node *ptr1=head;
//                    while (ptr1->next!=head){
//                        ptr1=ptr1->next;
//                    }
//                    ptr1->next=head->next;
//                    head=head->next;
//                    cout<<"Node unlinked"<<endl;
//                }
//            }
//            // deleting node in between
//            else{
//               Node *temp=NULL;
//               Node *prev=head;
//               Node *current=head->next;
//               while (current!=NULL){
//                   if(current->key==k){
//                       temp=current;
//                       current==NULL;
//                   } else{
//                       current=current->next;
//                       prev=prev->next;
//                   }
//               }
//               prev->next=temp->next;
//               cout<<"Node unlinked"<<endl;
//           }
//        }
//    }
//
//    void updateNode(int k,int d){
//        Node *ptr=nodeExists(k);
//        if(ptr==NULL){
//            cout<<"Node with this key does not exist"<<endl;
//        } else{
//            ptr->data=d;
//            cout<<"data updated"<<endl;
//        }
//    }
//
//    void displayLL(){
//        if(head==NULL){
//            cout << "LL is empty" << endl;
//        } else {
//            Node *ptr = head;
//            while (ptr->next != head) {
//                cout << ptr->data << " ";
//                ptr = ptr->next;
//            }
//        }
//    }
//
//};
//
//int main(){
//    return 0;
//}