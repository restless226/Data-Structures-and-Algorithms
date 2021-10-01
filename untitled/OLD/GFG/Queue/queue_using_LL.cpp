//// { Driver Code Starts
//#include<bits/stdc++.h>
//using namespace std;
//
//struct QueueNode
//{
//    int data;
//    QueueNode *next;
//    QueueNode(int a)
//    {
//        data = a;
//        next = NULL;
//    }
//};
//
//struct MyQueue {
//    QueueNode *front;
//    QueueNode *rear;
//    void push(int);
//    int pop();
//    MyQueue() {front = rear = NULL;}
//};
//
//
//
//int main()
//{
//    int T;
//    cin>>T;
//    while(T--)
//    {
//        MyQueue *sq = new MyQueue();
//
//        int Q;
//        cin>>Q;
//        while(Q--){
//            int QueryType=0;
//            cin>>QueryType;
//            if(QueryType==1)
//            {
//                int a;
//                cin>>a;
//                sq->push(a);
//            }else if(QueryType==2){
//                cout<<sq->pop()<<" ";
//
//            }
//        }
//        cout<<endl;
//    }
//}
//// } Driver Code Ends
//
//
///* Structure of a node in Queue
//struct QueueNode
//{
//    int data;
//    QueueNode *next;
//    QueueNode(int a)
//    {
//        data = a;
//        next = NULL;
//    }
//};
//
//And structure of MyQueue
//struct MyQueue {
//    QueueNode *front;
//    QueueNode *rear;
//    void push(int);
//    int pop();
//    MyQueue() {front = rear = NULL;}
//}; */
//
///* The method push to push element into the QUEUE*/
//void MyQueue:: push(int x)
//{
//    // Your Code
//    QueueNode* ptr=new QueueNode(x);
//    ptr->next=NULL;
//    // if empty
//    if(front==NULL){
//        front=rear=ptr;
//    } else{
//        rear->next=ptr;
//        rear=ptr;
//    }
//}
//
///*The method pop which return the element
//  poped out of the QUEUE*/
//int MyQueue :: pop()
//{
//    // Your Code
//    if(front==NULL){
//        return -1;
//    } else{
//        QueueNode* ptr = front;
//        front=front->next;
//        return ptr->data;
//    }
//}
