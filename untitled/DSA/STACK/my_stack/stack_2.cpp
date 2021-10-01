//#include <iostream>
//
//using namespace std;
//
////structure of node
//template<typename T>
//struct Node {
//    T data;
//    struct Node *next;
//};
////creating class stack
//template<class T>
//class stack
//{
//private:
//    Node<T>* top=NULL;
//    int max,count;
//public :
//    //declaration of constructor
//    stack();
//    //declaration of destructor
//    ~stack();
//    //declaration of functions
//    void push();
//    void pop();
//    void display();
//    void peak();
//    bool isempty();
//    bool isfull();
//};
////constructor
//template<class T>
//stack<T>::stack()
//{
//    top=NULL;
//    max=10;
//    count=0;
//}
////destructor
//template<class T>
//stack<T>::~stack()
//{
//    Node<T>* temp=top;
//    while(top!=NULL)
//    {
//        temp=top;
//        top=top->next;
//        delete(temp);
//    }
//}
////function to check if stack is full
//template<class T>
//bool stack<T>:: isfull()
//{
//    if(count>=max){
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
////function to check if stack is empty
//template<class T>
//bool stack<T>:: isempty()
//{
//    if(top==NULL)
//    {
//        return true;
//    }
//    else{
//        return false;
//    }
//}
////function to add elements in stack
//template<class T>
//void stack<T>:: push() {
//    int value;
//    cout<<"Enter value to be pushed:"<<endl;
//    cin>>value;
//    if(isfull())
//    {
//        cout<<"Overflow condition!!!"<<endl;
//    }
//    else
//    {
//        struct Node<T>* newnode = new Node<T>;
//        newnode->data = value;
//        newnode->next = top;
//        top = newnode;
//        count++;
//        cout<<"Now count is::"<<count;
//    }
//}
////function to delete elements from stack
//template<class T>
//void stack<T>:: pop() {
//    struct Node<T>* temp;
//    if(isempty())
//        cout<<"Underflow condition!!!"<<endl;
//
//    else {
//        cout<<"The popped element is "<< top->data <<endl;
//        temp=top;
//        top = top->next;
//        delete temp;
//        count--;
//        cout<<"Now count is::"<<count;
//    }
//}
////function to display stack
//template<class T>
//void stack<T>:: display() {
//    struct Node<T>* ptr;
//    //if stack is empty
//    if(isempty())
//        cout<<"stack is empty";
//    else {
//        ptr = top;
//        cout<<"Stack elements are: ";
//        while (ptr != NULL) {
//            cout<< ptr->data <<" ";
//            ptr = ptr->next;
//        }
//    }
//    cout<<endl;
//}
////function to find out top element in stack
//template<class T>
//void stack<T>::peak()
//{
//    if(isempty())
//        cout<<"Underflow condition!!!"<<endl;
//    cout<<"\n The top element is::"<<top->data<<endl;
//
//}
//
//int main() {
//    int choice;
//    //creating object of class
//    stack<int> s;
//    cout<<"1) Push "<<endl;
//    cout<<"2) Pop "<<endl;
//    cout<<"3) Display "<<endl;
//    cout<<"4) peak"<<endl;
//    cout<<"5) Exit"<<endl;
//
//    while(true) {
//        cout<<"\nEnter choice: "<<endl;
//        cin>>choice;
//        //switch case for taking choices
//        switch(choice) {
//            case 1: {
//                s.push();
//                break;
//            }
//            case 2: {
//                s.pop();
//                break;
//            }
//            case 3: {
//                s.display();
//                break;
//            }
//            case 4:
//                s.peak();
//                break;
//            case 5:
//            {
//                cout<<"Exit"<<endl;
//                exit(0);
//                break;
//            }
//            default: {
//                cout<<"Invalid Choice"<<endl;
//            }
//        }
//    }
//    return 0;
//}