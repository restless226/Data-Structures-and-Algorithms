//#include "Stack.h"
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    Stack<char> s(100);
//    Expression e;
//    int option=0;
//    string infix,postfix,prefix;
//    cout<<"Enter Expression: "<<endl;
//    cin>>infix;
//
//    do{
//        cout<<"Which Operation do you want to perform. Enter the option Number. Press 0 to exit"<<endl;
//        cout<<"1. To Convert the Expression to Postfix Expression"<<endl;
//        cout<<"2. To Convert the Expression to Prefix Expression"<<endl;
//        cout<<"3. To Evaluate the Postfix Expression"<<endl;
//        cout<<"4. To Evaluate the Prefix Expression"<<endl;
//
//        cin>>option;
//
//        switch(option)
//        {
//            case 0:
//                cout<<"Thank You for using the application"<<endl;
//                break;
//            case 1:
//                postfix = e.InfixToPostfix(s,infix);
//                cout<<"Postfix Expression: "<<postfix<<endl;
//                break;
//
//            case 2:
//                prefix = e.InfixToPrefix(s,infix);
//                cout<<"Prefixed Expression"<<prefix<<endl;
//                break;
//            case 3:
//                e.PostfixEvaluation(s,infix);
//                break;
//            case 4:
//                e.PrefixEvaluation(s,infix);
//                break;
//            default:
//                cout<<"Enter a Valid Option"<<endl;
//                break;
//        }
//    }while(option!=0);
//    return 0;
//}
