#include<string>
#include<string.h>

#ifndef ASSIGNMNET2HEADER2_H_
#define ASSIGNMNET2HEADER2_H_
using namespace std;

class InfixToPostfix {
public:
    bool isOperator(char c);//method to check if the character is an operator
    int associativity(char c);//method to check associativity
    int precedence(char c);//method to check precedence
    string infixToPostfix(string infix);//method to convert infix to postfix
    bool isValid(string infix);//method to check validity of input expression
    string infixToPrefix(string infix);//method to convert infix to prefix
    string reverseArray(string expression);//method to reverse a string
};


#endif /* ASSIGNMNET2HEADER2_H_ */
