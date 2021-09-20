//#include<iostream>
//#include "StackHeader.h"  //including header file
//#include "ExpressionHeader.h"
//#include<string.h>
//using namespace std;
//
//template<typename T>
////method of bool return type to check if stack is empty
//bool Stack<T>::isEmpty()
//{
//    return (size==0);
//}
//
//template<typename T>
////method to push new data
//void Stack<T>::push(T element)
//{
//    Node<T>* newNode = new Node<T>(element);
//    newNode->next=Top;
//    Top=newNode;
//
//    size++; //incrementing size variable
//    return;
//}
//
//template<typename T>
////method to delete the top element of stack
//T Stack<T>::pop()
//{
//    Node<T>* temp=Top;
//    Top=Top->next;
//    temp->next=NULL;
//    T del = temp->data;  //storing the element to be deleted
//    delete temp;
//    size--;  //decrementing size variable on delete
//    return del;
//}
//
//template<typename T>
////method to display the complete stack
//void Stack<T>::display()
//{
//    InfixToPostfix object;
//    string displayStr;
//    //checking isEmpty condition
//    if(isEmpty())
//    {
//        cout<<"Empty.";
//        return;
//    }
//    Node<T>* temp=Top;
//    while(temp!=NULL)
//    {
//        displayStr+=temp->data;
//        temp=temp->next;
//    }
//    string reversed = object.reverseArray(displayStr);
//    cout<<reversed;
//}
//
//template<typename T>
////method to display only top element in the stack
//T Stack<T>::peep()
//{
//    return Top->data;
//}
//
//template<typename T>
////parameterized constructor of class Node
//Node<T>::Node(T data)
//{
//    this->data=data;
//    next=NULL;
//}
//
//template<typename T>
////default constructor of class Stack
//Stack<T>::Stack()
//{
//    Top=NULL;
//    size=0;
//    //maxSize = 0;
//}
//
///*template<typename T>
////destructor of class Stack
//Stack<T>::~Stack()
//{
//	Node<T>* temp=Top;
//	while(Top!=NULL)
//	{
//		temp=Top;
//		Top=Top->next;
//		delete(temp);
//	}
//}*/
