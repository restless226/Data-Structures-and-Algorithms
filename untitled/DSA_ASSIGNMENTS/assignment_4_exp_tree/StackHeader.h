#ifndef ASSIGNMENT2FINALHEADER_H_
#define ASSIGNMENT2FINALHEADER_H_

//templates
template<typename T>
//class Node
class Node {
public:
    //Data members of class Node
    T data;
    Node<T> *next;

    //Parameterized constructor of class Node
    Node(T data);
};

template<typename T>
//class Stack
class Stack {
    //Private data members
    Node<T> *Top; //pointer to the top element of stack
    int size;  //variable for size of the stack
    //int maxSize; //variable for maximum size of stack
public:
    Stack(); //default constructor
    //~Stack();  //destructor
    bool isEmpty();  //method to check if the stack is empty
    void push(T element);  //method to push new element in stack
    T pop();  //method to delete top element of stack
    void display();  //method to display complete stack
    T peep();  //method to display only the top element of stack
};


#endif /* ASSIGNMENT2FINALHEADER_H_ */
