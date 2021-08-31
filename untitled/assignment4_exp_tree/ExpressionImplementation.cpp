//#include<iostream>
//#include "StackHeader.h"
//#include "StackImplementation.cpp" //including header file
//#include "ExpressionHeader.h"
//#include<string>
//#include<string.h>
//#include<cmath>
//using namespace std;
//
////Method to check if the character is an operator
//bool InfixToPostfix::isOperator(char c)
//{
//    if(c=='+' || c=='*' || c=='/' || c=='^' || c=='-')
//    {
//        return true;
//    }
//    return false;
//}
//
////Method to check associativity of operators
//int InfixToPostfix::associativity(char c)
//{
//    if(c=='^')
//    {
//        return 2;
//    }
//    return 1;
//}
//
////Method to check precedence of operators
//int InfixToPostfix::precedence(char c)
//{
//    if(c=='^')
//    {
//        return 3;
//    }
//    else if(c=='*' || c=='/')
//    {
//        return 2;
//    }
//    else if(c=='+' || c=='-')
//    {
//        return 1;
//    }
//    else
//    {
//        return -1;
//    }
//}
//
////Method to convert Infix to postfix
//string InfixToPostfix::infixToPostfix(string infix)
//{
//    Stack<char> s;
//    string postfix;
//    int i=0;
//    //Start of while loop
//    while(i<infix.length())
//    {
//        char token = infix[i];
//        if(isalnum(token))
//        {
//            postfix+=token;
//        }
//        if(token=='(')
//        {
//            s.push(token);
//        }
//        if(token==')')
//        {
//            char out = s.pop();
//            while(out!='(')
//            {
//                postfix+=out;
//                out=s.pop();
//            }
//        }
//        if(isOperator(token))
//        {
//            if(s.isEmpty())
//            {
//                s.push(token);
//            }
//            else
//            {
//                if(s.peep()=='(')
//                {
//                    s.push(token);
//                }
//                else
//                {
//                    if(precedence(token)<precedence(s.peep()))
//                    {
//                        while(!(s.isEmpty()))
//                        {
//                            postfix+=s.pop();
//                        }
//                        continue;
//                    }
//                    if(precedence(token)==precedence(s.peep()))
//                    {
//                        if(associativity(token)==1)
//                        {
//                            postfix+=s.pop();
//                            s.push(token);
//                        }
//                        if(associativity(token)==2)
//                        {
//                            s.push(token);
//                        }
//                    }
//                    else
//                    {
//                        s.push(token);
//                    }
//                }
//            }
//        }
//        i++;
//    }//End of while loop
//    while(!(s.isEmpty()))
//    {
//        postfix+=s.pop();
//    }
//    return postfix;
//}
//
////Method to reverse a string
//string InfixToPostfix::reverseArray(string expression)
//{
//    int sizeOfArray=expression.length();
//    string reversed;
//    int i;
//    for(i=sizeOfArray-1 ; i>=0 ; i--)
//    {
//        reversed+=expression[i];
//    }
//    return reversed;
//}
//
////Method to convert infix to prefix
//string InfixToPostfix::infixToPrefix(string infix)
//{
//    int sizeOfArray=infix.length();
//    //calling reverseArray() Method
//    string ptrArray=reverseArray(infix);
//    for(int i=0 ; i<sizeOfArray ; i++)
//    {
//        if(ptrArray[i]=='(')
//        {
//            ptrArray[i]=')';
//            i++;
//        }
//        else if(ptrArray[i]==')')
//        {
//            ptrArray[i]='(';
//            i++;
//        }
//    }
//    //calling infixToPostfix method
//    string postfixExp = infixToPostfix(ptrArray);
//    string prefix=reverseArray(postfixExp);
//    return prefix;
//}
//
////Method to check validity of the input expression
//bool InfixToPostfix::isValid(string infix)
//{
//    int sizeOfArray=infix.length();
//    int count1=0,count2=0;
//    for(int i=0 ; i<sizeOfArray ; i++)
//    {
//        if(isOperator(infix[i]))
//        {
//            count1++;
//        }
//        if(isalnum(infix[i]))
//        {
//            count2++;
//        }
//    }
//    if(count2!=(count1+1))
//    {
//        return false;
//    }
//    int count=0 , count3=0;
//    for(int i=0 ; i<sizeOfArray ; i++)
//    {
//        if(infix[i]=='(')
//        {
//            count++;
//        }
//        if(infix[i]==')')
//        {
//            count3++;
//        }
//    }
//    if(count!=count3)
//    {
//        return false;
//    }
//    for(int i=0 ; i<sizeOfArray-1 ; i++)
//    {
//        if((isOperator(infix[i]) && isOperator(infix[i+1])) || (isalnum(infix[i]) && isalnum(infix[i+1])))
//        {
//            return false;
//        }
//    }
//    if(isOperator(infix[0]) || isOperator(infix[sizeOfArray-1]))
//    {
//        return false;
//    }
//    return true;
//}
//
//
//
//
