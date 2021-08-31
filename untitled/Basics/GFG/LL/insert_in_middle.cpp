//// { Driver Code Starts
//#include <bits/stdc++.h>
//using namespace std;
//
//struct Node
//{
//    int data;
//    struct Node *next;
//
//    Node(int x) {
//        data = x;
//        next = NULL;
//    }
//};
//
//// function to display the linked list
//void display(Node* head)
//{
//    while (head != NULL) {
//        cout << head->data << " ";
//        head = head->next;
//    }
//    cout<<endl;
//}
//
//Node* insertInMiddle(Node* head, int x);
//
//int main()
//{
//    int T, n, x;
//    cin>>T;
//    while(T--)
//    {
//        cin>> n >> x;
//
//        struct Node *head = new Node(x);
//        struct Node *tail = head;
//
//        for (int i=0; i<n-1; i++)
//        {
//            cin>>x;
//            tail->next = new Node(x);
//            tail = tail->next;
//        }
//
//        cin>> x;
//        head = insertInMiddle(head, x);
//        display(head);
//    }
//    return 0;
//}
//// } Driver Code Ends
//
//
///*
//struct Node {
//  int data;
//  struct Node *next;
//  Node(int x) {
//    data = x;
//    next = NULL;
//  }
//};
//*/
//
//// function should insert node at the middle
//// of the linked list
//Node* insertInMiddle(Node* head, int x)
//{
//    // Cpde here
//    Node *ptr=head;
//    if(head==NULL){
//        ptr->data=x;
//        head=ptr;
//        return head;
//    }
//
//    int l=0;
//    while(ptr!=NULL){
//        l++;
//        ptr=ptr->next;
//    }
//
//    if(l%2==0){
//        l=l/2;
//    }else{
//        l=(l+1)/2;
//    }
//
//    int m=0;
//
//    Node *ptr1=head;
//    while(ptr1!=NULL){
//        m++;
//        if(m==l){
//            Node *n=new Node(x);
//            n->next=ptr1->next;
//            ptr1->next=n;
//            return head;
//        }
//        ptr1=ptr1->next;
//    }
//}