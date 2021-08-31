//// { Driver Code Starts
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<bits/stdc++.h>
//using namespace std;
//
//struct Node {
//    int data;
//    struct Node *next;
//    Node(int x) {
//        data = x;
//        next = NULL;
//    }
//};
//
//bool areIdentical(struct Node *a, struct Node *b);
//
//
//int main()
//{
//    int T;
//    cin>>T;
//    while(T--){
//        int n1, n2, tmp , d1 , d2;
//        struct Node *head1 = NULL , *tail1=NULL;
//        struct Node *head2 = NULL , *tail2 =NULL;
//        cin>>n1;
//        cin>>d1;
//        head1 = new Node(d1);
//        tail1 = head1;
//        while(n1-- > 1){
//            cin>>tmp;
//            tail1->next = new Node(tmp);
//            tail1 = tail1->next;
//        }
//        cin>>n2;
//        cin>>d2;
//        head2 = new Node(d2);
//        tail2 = head2;
//        while(n2-- >1)
//        {
//            cin>>tmp;
//            tail2->next = new Node(tmp);
//            tail2 = tail2->next;
//        }
//        areIdentical(head1, head2)?cout<<"Identical"<<endl:cout<<"Not identical"<<endl;
//    }
//    return 0;
//}
//// } Driver Code Ends
//
//
///*
//Structure of the node of the linked list is as
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
//// This function should return true if both
//// linked lists are identical else return false.
//bool areIdentical(struct Node *head1, struct Node *head2)
//{
//    // Code here
//    bool flag=false;
//    Node *ptr1=head1;
//    Node *ptr2=head2;
//
//    while(ptr1!=NULL && ptr2!=NULL){
//
//        if(ptr1->data==ptr2->data){
//            flag=true;
//        }else{
//            flag=false;
//            break;
//        }
//        ptr1=ptr1->next;
//        ptr2=ptr2->next;
//    }
//
//    return flag;
//
//}