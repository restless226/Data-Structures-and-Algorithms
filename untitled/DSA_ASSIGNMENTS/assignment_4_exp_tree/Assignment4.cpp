////#include <iostream>
//#include<string.h>
//#include "StackHeader.h"
//#include "StackImplementation.cpp" //including header file
//#include "ExpressionHeader.h"
//#include "TreeExpressionHeader.h"
//using namespace std;
//
//int main() {
//    int choice;
//    InfixToPostfix object;
//    int ch;
//    //Menu driven
//    do
//    {
//
//        cout<<"\n 1. Recursive Traversal \n 2. Non-Recursive Traversal \n 3. Exit"<<endl;
//        cout<<"Enter your choice: "<<endl;
//        cin>>ch;
//        switch(ch)
//        {
//            case 1:
//            {
//                do
//                {
//                    cout<<"\n 1. In-Order Traversal \n 2. Post-Order Traversal \n"
//                          " 3. Pre-Order Traversal \n 4. Exit"<<endl;
//                    cin>>choice;
//                    switch(choice)
//                    {
//                        case 1:
//                        {
//                            string infix;
//                            cout<<"Enter Infix Expression: "<<endl;
//                            cin>>infix;
//                            if(object.isValid(infix))
//                            {
//                                ExpressionTree tree;
//                                TNode* root = tree.createNode(infix);
//                                cout<<"Recursive In-Order Traversal of tree: "<<endl;
//                                tree.recursiveInorder(root);
//                            }
//                            else
//                            {
//                                while(!(object.isValid(infix)))
//                                {
//                                    cout<<"The infix expression is invalid!!!"<<endl;
//                                    cout<<"Re-Enter Infix Expression: "<<endl;
//                                    cin>>infix;
//                                }
//                                ExpressionTree tree;
//                                TNode* root = tree.createNode(infix);
//                                cout<<"Recursive In-Order Traversal of tree: "<<endl;
//                                tree.recursiveInorder(root);
//                            }
//
//                            break;
//                        }
//                        case 2:
//                        {
//                            string infix;
//                            cout<<"Enter Infix Expression: "<<endl;
//                            cin>>infix;
//                            if(object.isValid(infix))
//                            {
//                                ExpressionTree tree;
//                                TNode* root = tree.createNode(infix);
//                                cout<<"Recursive Post-Order Traversal of tree: "<<endl;
//                                tree.recursivePostorder(root);
//                            }
//                            else
//                            {
//                                while(!(object.isValid(infix)))
//                                {
//                                    cout<<"Enter Infix Expression: "<<endl;
//                                    cin>>infix;
//                                }
//                                ExpressionTree tree;
//                                TNode* root = tree.createNode(infix);
//                                cout<<"Recursive Post-Order Traversal of tree: "<<endl;
//                                tree.recursivePostorder(root);
//                            }
//
//                            break;
//                        }
//                        case 3:
//                        {
//                            string infix;
//                            cout<<"Enter Infix Expression: "<<endl;
//                            cin>>infix;
//                            if(object.isValid(infix))
//                            {
//                                ExpressionTree tree;
//                                TNode* root = tree.createNode(infix);
//                                cout<<"Recursive Pre-Order Traversal of tree: "<<endl;
//                                tree.recursivePreorder(root);
//                            }
//                            else
//                            {
//                                while(!(object.isValid(infix)))
//                                {
//                                    cout<<"Enter Infix Expression: "<<endl;
//                                    cin>>infix;
//                                }
//                                ExpressionTree tree;
//                                TNode* root = tree.createNode(infix);
//                                cout<<"Recursive Pre-Order Traversal of tree: "<<endl;
//                                tree.recursivePreorder(root);
//                            }
//
//                            break;
//                        }
//                        case 4:
//                        {
//                            cout<<"Loop exited successfully :)"<<endl;
//                            break;
//                        }
//                    }
//                }while(choice!=4);
//                break;
//            }
//            case 2:
//            {
//                do
//                {
//                    cout<<"\n 1. In-Order Traversal \n 2. Post-Order Traversal \n"
//                          " 3. Pre-Order Traversal \n 4. Exit"<<endl;
//                    cin>>choice;
//                    switch(choice)
//                    {
//                        case 1:
//                        {
//                            string infix;
//                            cout<<"Enter Infix Expression: "<<endl;
//                            cin>>infix;
//                            if(object.isValid(infix))
//                            {
//                                ExpressionTree tree;
//                                TNode* root = tree.createNode(infix);
//                                cout<<"Non-Recursive In-Order Traversal of tree: "<<endl;
//                                tree.nonRecursiveInorder(root);
//                            }
//                            else
//                            {
//                                while(!(object.isValid(infix)))
//                                {
//                                    cout<<"Enter Infix Expression: "<<endl;
//                                    cin>>infix;
//                                }
//                                ExpressionTree tree;
//                                TNode* root = tree.createNode(infix);
//                                cout<<"Non-Recursive In-Order Traversal of tree: "<<endl;
//                                tree.recursiveInorder(root);
//                            }
//
//                            break;
//                        }
//                        case 2:
//                        {
//                            string infix;
//                            cout<<"Enter Infix Expression: "<<endl;
//                            cin>>infix;
//                            if(object.isValid(infix))
//                            {
//                                ExpressionTree tree;
//                                TNode* root = tree.createNode(infix);
//                                cout<<"Non-Recursive Post-Order Traversal of tree: "<<endl;
//                                tree.nonRecursivePostorder(root);
//                            }
//                            else
//                            {
//                                while(!(object.isValid(infix)))
//                                {
//                                    cout<<"Enter Infix Expression: "<<endl;
//                                    cin>>infix;
//                                }
//                                ExpressionTree tree;
//                                TNode* root = tree.createNode(infix);
//                                cout<<"Non-Recursive Post-Order Traversal of tree: "<<endl;
//                                tree.recursivePostorder(root);
//                            }
//
//                            break;
//                        }
//                        case 3:
//                        {
//                            string infix;
//                            cout<<"Enter Infix Expression: "<<endl;
//                            cin>>infix;
//                            if(object.isValid(infix))
//                            {
//                                ExpressionTree tree;
//                                TNode* root = tree.createNode(infix);
//                                cout<<"Non-Recursive Pre-Order Traversal of tree: "<<endl;
//                                tree.nonRecursivePreorder(root);
//                            }
//                            else
//                            {
//                                while(!(object.isValid(infix)))
//                                {
//                                    cout<<"Enter Infix Expression: "<<endl;
//                                    cin>>infix;
//                                }
//                                ExpressionTree tree;
//                                TNode* root = tree.createNode(infix);
//                                cout<<"Non-Recursive Pre-Order Traversal of tree: "<<endl;
//                                tree.recursivePreorder(root);
//                            }
//
//                            break;
//                        }
//                        case 4:
//                        {
//                            cout<<"Loop exited successfully :)"<<endl;
//                            break;
//                        }
//                    }
//                }while(choice!=4);
//                break;
//            }
//            case 3:
//            {
//                cout<<"Application exited successfully :)"<<endl;
//                break;
//            }
//        }
//
//    }while(ch!=3);
//
//
//    return 0;
//}
