#include<iostream>
#include<cmath>
using namespace std;

template <typename T>
struct Node
{
    T data;

    Node<T>* next;
    Node()
    {
        //data = 0;
        next = NULL;
    }
    Node(T d)
    {
        data = d;
        next = NULL;
    }
};
template <typename T>
class Stack
{
private:
    Node<T>* top;
    int count;
    int max_size;
public:
    T element;
    Stack();
    Stack(int c);
    void push(T data);
    bool isFull();
    bool isEmpty();
    T pop();
    T peep();
    void display();
    int counts();
    Node<T>* getNode(T data);
};


class Expression{
public:

    string InfixToPostfix(Stack<char> s,string infix);
    string InfixToPrefix(Stack<char> s,string infix);
    bool isOperator(char c);
    int precedence(char c);
    string Reverse(string s);
    void PrefixEvaluation(Stack<char> s,string Expression);
    void PostfixEvaluation(Stack<char> s,string Expression);
    bool Validate_expression(string expression);
};