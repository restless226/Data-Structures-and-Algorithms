//#include<bits/stdc++.h>
//using namespace std;
//// Linked list Node structure
//struct Node
//{
//    char c;
//    struct Node *next;
//
//    Node(char x){
//        c = x;
//        next = NULL;
//    }
//
//};
//
//
//int compare(Node *list1, Node *list2);
//
//
//int main()
//{
//    int t,n;
//    cin>>t;
//    char x;
//    while(t--)
//    {
//        cin>>n;
//        cin>>x;
//        Node *list1 = new Node(x);
//        Node *temp=list1;
//        for(int i=0;i<n-1;i++){
//            cin>>x;
//            temp->next = new Node(x);
//            temp=temp->next;
//        }
//        int m;
//        cin>>m;
//        cin>>x;
//        Node *list2 = new Node(x);
//        temp=list2;
//        for(int i=0;i<m-1;i++){
//            cin>>x;
//            temp->next = new Node(x);
//            temp=temp->next;
//        }
//
//        cout << compare(list1, list2)<<endl;
//    }
//    return 0;
//}
//// } Driver Code Ends
//
//
///* Linked list Node structure
//struct Node
//{
//    char c;
//    struct Node *next;
//
//    Node(char x){
//        c = x;
//        next = NULL;
//    }
//
//};
//*/
//
//// Compare two strings represented as linked lists
//int compare(Node *list1, Node *list2)
//{
//    // Code Here
////    Node *ptr1=list1;
////    Node *ptr2=list2;
////
////    const char *s1;
////    const char *s2;
////
////    while(ptr1!=NULL){
////        s1+=ptr1->c;
////        ptr1=ptr1->next;
////    }
////
////    while(ptr2!=NULL){
////        s2+=ptr2->c;
////        ptr2=ptr2->next;
////    }
////
////    int res=strcmp(s1,s2);
////    return res;
//
//    while (list1 && list2 && list1->c == list2->c)
//    {
//        list1 = list1->next;
//        list2 = list2->next;
//    }
//
//    //  If both lists are not empty, compare mismatching
//    //  characters
//    if (list1 && list2)
//        return (list1->c > list2->c)? 1: -1;
//
//    // If either of the two lists has reached end
//    if (list1 && !list2) return 1;
//    if (list2 && !list1) return -1;
//
//    // If none of the above conditions is true, both
//    // lists have reached end
//    return 0;
//
//}