//#include <iostream>
//#include <stack>
//#include <algorithm>
//#include <vector>
//using namespace std;
//#include "exp_tree.h"
//
//
//int Precedence(char c){
//    // We have 5 operators in total +,-,*,/,^
//    if(c=='+' || c=='-'){
//        return 1;
//    }else if(c=='*' || c=='/'){
//        return 2;
//    }else if(c=='^'){
//        return 3;
//    }
//
//    return 0;
//}
//
//
//string InfixToPostfix(string infix){
//
//    string postfix;
//    stack<char> stack;
//
//    for (int i = 0; i < infix.length(); i++) {
//
//        // OPERANDS
////        if((infix[i] >= 'a' && infix[i] <= 'z')
////           ||(infix[i] >= 'A' && infix[i] <= 'Z'))
////        OR
//        if(isalnum(infix[i])){
//            postfix+=infix[i];
//        }
//
//        // PARENTHESIS '('
//        else if(infix[i]=='('){
//            stack.push(infix[i]);
//        }
//
//        // PARENTHESIS ')'
//        else if(infix[i]==')'){
//            while (!stack.empty() && stack.top()!='('){
//                postfix+=stack.top();
//                stack.pop();
//            }
//
//            // Popping and discarding '(' from TOS
//            if(stack.top()=='('){
//                stack.pop();
//            }
//        }
//
//        // OPERATOR
//        else if(infix[i]=='+'|| infix[i]=='-'|| infix[i]=='*'|| infix[i]=='/'|| infix[i]=='^'){
//
//            if(stack.empty()){
//                stack.push(infix[i]);
//            }
//
//            else if(Precedence(infix[i])>Precedence(stack.top())){
//                stack.push(infix[i]);
//            }
//
//            else if(Precedence(infix[i])==Precedence(stack.top()) && infix[i]=='^'){
//                stack.push(infix[i]);
//            }
//
//            else{
//                while(!stack.empty() && Precedence(infix[i])<=Precedence(stack.top())){
//                    postfix+=stack.top();
//                    stack.pop();
//                }
//
//                stack.push(infix[i]);
//            }
//        }
//
//    }
//
//    while (!stack.empty()){
//        postfix+=stack.top();
//        stack.pop();
//    }
//
//    return postfix;
//}
//
//
//string InfixToPrefix(string infix){
//
//    string prefix;
//    stack<char> stack;
//
//    // REPLACING "(" with ")" and visa versa
//    for (int i = 0; i < infix.length(); i++) {
//        if(infix[i]=='('){
//            infix[i]=')';
//        }else if(infix[i]==')'){
//            infix[i]='(';
//        }
//    }
//
//
//    // PROCESSING INFIX STRING FROM LAST CHARACTER
//    for (int i = infix.length()-1;i>=0;i--) {
//
//        // OPERANDS
//        if(isalnum(infix[i])){
//            prefix+=infix[i];
//        }
//
//            // PARENTHESIS '('
//        else if(infix[i]=='('){
//            stack.push(infix[i]);
//        }
//
//            // PARENTHESIS ')'
//        else if(infix[i]==')'){
//            while (!stack.empty() && stack.top()!='('){
//                prefix+=stack.top();
//                stack.pop();
//            }
//
//            // Popping and discarding '(' from TOS
//            if(stack.top()=='('){
//                stack.pop();
//            }
//        }
//
//            //OPERATORS
//        else if(infix[i]=='+'|| infix[i]=='-'|| infix[i]=='*'|| infix[i]=='/'|| infix[i]=='^'){
//
//            if(stack.empty()){
//                stack.push(infix[i]);
//            }else{
//                if(Precedence(infix[i])>Precedence(stack.top())){
//                    stack.push(infix[i]);
//                }
//
//                else if(Precedence(infix[i])==Precedence(stack.top()) && infix[i]=='^'){
//
//                    while (!stack.empty() && Precedence(infix[i])==Precedence(stack.top())){
//                        prefix+=stack.top();
//                        stack.pop();
//                    }
//
//                    stack.push(infix[i]);
//                }
//
//                else if(Precedence(infix[i])==Precedence(stack.top())){
//                    stack.push(infix[i]);
//                }
//
//                else if(Precedence(infix[i])<Precedence(stack.top())){
//
//                    while (!stack.empty() && Precedence(infix[i])<Precedence(stack.top())){
//                        prefix+=stack.top();
//                        stack.pop();
//                    }
//
//                    stack.push(infix[i]);
//                }
//            }
//
//        }
//    }
//
//    while (!stack.empty()){
//        prefix+=stack.top();
//        stack.pop();
//    }
//
//    reverse(prefix.begin(),prefix.end());
//
//    return prefix;
//}
//
//
//vector<char> InorderIterative(BinaryTreeNode<char>* root){
//
//    stack<BinaryTreeNode<char>*> stack;
//    vector<char> v;
//
//    BinaryTreeNode<char>* curr=root;
//
//
//    while (!stack.empty() || curr!=NULL){
//
//        if(curr!=NULL){
//            stack.push(curr);
//            curr=curr->left;
//        }else{
//            curr=stack.top();
//            v.push_back(curr->data);
//            stack.pop();
//
//            curr=curr->right;
//        }
//    }
//
//    return v;
//}
//
//
//vector<char> PreorderIterative(BinaryTreeNode<char>* root){
//
//    stack<BinaryTreeNode<char>*> stack;
//    vector<char> v;
//
//    stack.push(root);
//
//    while (!stack.empty()){
//        BinaryTreeNode<char>* temp=stack.top();
//        v.push_back(temp->data);
//        stack.pop();
//
//        if(temp->right){
//            stack.push(temp->right);
//        }
//
//        if(temp->left){
//            stack.push(temp->left);
//        }
//
//    }
//
//    return v;
//}
//
//
//vector<char> PostorderIterative(BinaryTreeNode<char>* root) {
//
//    stack<BinaryTreeNode<char>*> stack;
//    vector<char> v;
//
//    stack.push(root);
//
//    while (!stack.empty()){
//        BinaryTreeNode<char>* temp=stack.top();
//        v.push_back(temp->data);
//        stack.pop();
//
//        if(temp->left){
//            stack.push(temp->left);
//        }
//
//        if(temp->right){
//            stack.push(temp->right);
//        }
//
//    }
//
//    reverse(v.begin(),v.end());
//    return v;
//
//}
//
//
//vector <char>* InorderRecursive(BinaryTreeNode<char> *root){
//
//    if(root==NULL ){
//        return NULL;
//    }
//
//    vector<char>* v=new vector<char>();
//
//    if(root->left){
//        vector<char>* leftChild=InorderRecursive(root->left);
//        for(auto itr:*leftChild){
//            v->push_back(itr);
//        }
//    }
//
//    v->push_back(root->data);
//
//    if(root->right){
//        vector<char>* rightChild=InorderRecursive(root->right);
//        for(auto itr:*rightChild){
//            v->push_back(itr);
//        }
//    }
//
//    return v;
//
//}
//
//
//vector <char>* PreorderRecursive(BinaryTreeNode<char> *root){
//
//    if(root==NULL ){
//        return NULL;
//    }
//
//    vector<char>* v=new vector<char>();
//
//
//    v->push_back(root->data);
//
//    if(root->left){
//        vector<char>* leftChild=PreorderRecursive(root->left);
//        for(auto itr:*leftChild){
//            v->push_back(itr);
//        }
//    }
//
//    if(root->right){
//        vector<char>* rightChild=PreorderRecursive(root->right);
//        for(auto itr:*rightChild){
//            v->push_back(itr);
//        }
//    }
//
//    return v;
//
//}
//
//
//vector <char>* PostorderRecursive(BinaryTreeNode<char> *root){
//
//    if(root==NULL ){
//        return NULL;
//    }
//
//    vector<char>* v=new vector<char>();
//
//
//    if(root->left){
//        vector<char>* leftChild=PostorderRecursive(root->left);
//        for(auto itr:*leftChild){
//            v->push_back(itr);
//        }
//    }
//
//    if(root->right){
//        vector<char>* rightChild=PostorderRecursive(root->right);
//        for(auto itr:*rightChild){
//            v->push_back(itr);
//        }
//    }
//
//    v->push_back(root->data);
//
//    return v;
//
//}
//
//
//void printBinaryTree(BinaryTreeNode<char> *root) {
//    // Base case
//    if (root == nullptr) {
////        cout << "[WARNING] NOTHING TO PRINT"<<endl;
//        return;
//    }
//
//
//    // small calculation
//    cout << root->data << ": ";
//
//    if (root->left != NULL) {
//        cout << "L" <<"("<< root->left->data << ")"<<" ";
//    }
//    if (root->right != NULL) {
//        cout << "R" << "("<<root->right->data << ")"<<" ";
//    }
//    cout << endl;
//
//    // recursive case
//    printBinaryTree(root->left);
//    printBinaryTree(root->right);
//}
//
//
//BinaryTreeNode<char>* constructPostfixTree(string postfix){
//    stack<BinaryTreeNode<char>*> stack;
//    BinaryTreeNode<char>* temp=NULL;
//    BinaryTreeNode<char>* leftChild=NULL;
//    BinaryTreeNode<char>* rightChild=NULL;
//
//    for (int i = 0; i < postfix.length(); i++) {
//
//        // OPERAND
//        if(isalnum(postfix[i])){
//            // Creating a new node which contains 'operand value'
//            temp=new BinaryTreeNode<char>(postfix[i]);
//            stack.push(temp);
//        }
//
//        //OPERATOR
//        else if(postfix[i]=='+'|| postfix[i]=='-'|| postfix[i]=='*'|| postfix[i]=='/'|| postfix[i]=='^'){
//
//            // Creating a new node which contains 'operator value'
//            temp=new BinaryTreeNode<char>(postfix[i]);
//
//            rightChild=stack.top();
//            stack.pop();
//
//            leftChild=stack.top();
//            stack.pop();
//
//            // creating left and right child links
//            temp->left=leftChild;
//            temp->right=rightChild;
//
//            stack.push(temp);
//
//        }
//    }
//
//    //  only element left in stack will be root of expression tree
//    temp = stack.top();
//    stack.pop();
//
//    return temp;
//
//}
//
////TODO
//BinaryTreeNode<char>* constructPrefixTree(string prefix){
//    stack<BinaryTreeNode<char>*> stack;
//    BinaryTreeNode<char>* temp=NULL;
//    BinaryTreeNode<char>* leftChild=NULL;
//    BinaryTreeNode<char>* rightChild=NULL;
//
//    return NULL;
//}
//
//int main(){
//
//    string infix;
//    cout<<"ENTER INFIX EXPRESSION:"<<endl;
//    cin>>infix;
//
//    cout<<'\n';
//
//    int choice;
//
//    BinaryTreeNode<char>* root=NULL;
//    vector<char>* v;
//    vector<char> v1;
//    string postfix;
//    string prefix;
//
//    while (true){
//        cout<<"Enter your choice:";
//        cout<<"\nPress:"
//              "\n1. To construct Prefix Expression Tree"
//              "\n2. To construct Postfix Expression Tree"
//              "\n3. For Recursive Inorder Traversal"
//              "\n4. For Recursive Preorder Traversal"
//              "\n5. For Recursive Postorder Traversal"
//              "\n6. For Non-Recursive Inorder Traversal"
//              "\n7. For Non-Recursive Preorder Traversal"
//              "\n8. For Non-Recursive Postorder Traversal"
//              "\n9. PRINT BINARY EXPRESSION TREE (LR FORMAT)"
//              "\n10. To Exit\n";
//        cin>>choice;
//        cout<<endl;
//
//        switch (choice) {
//            case 1:
//                cout<<"PREFIX EXPRESSION IS:"<<endl;
//                prefix=InfixToPrefix(infix);
//                cout<<prefix<<'\n';
//                cout<<"PREFIX EXPRESSION TREE HAS BEEN CONSTRUCTED SUCCESSFULLY :)\n\n";
//                //TODO
////                root=constructPrefixTree(prefix);
//                break;
//            case 2:
//                cout<<"POSTFIX EXPRESSION IS:"<<endl;
//                postfix=InfixToPostfix(infix);
//                cout<<postfix<<'\n';
//
//                root=constructPostfixTree(postfix);
//                cout<<"POSTFIX EXPRESSION TREE HAS BEEN CONSTRUCTED SUCCESSFULLY :)\n\n";
//                break;
//            case 3:
//                v=InorderRecursive(root);
//                if(!v->empty()){
//                    cout<<"Recursive Inorder Traversal:"<<endl;
//                    for (auto itr:*v) {
//                        cout<<itr<<" ";
//                    }
//                    cout<<'\n'<<'\n';
//                }else{
//                    cout<<"[WARNING] NOTHING TO PRINT"<<endl<<endl;
//                }
//                break;
//            case 4:
//                v=PreorderRecursive(root);
//                if(!v->empty()){
//                    cout<<"Recursive Preorder Traversal:"<<endl;
//                    for (auto itr:*v) {
//                        cout<<itr<<" ";
//                    }
//                    cout<<'\n'<<'\n';
//                }else{
//                    cout<<"[WARNING] NOTHING TO PRINT"<<endl<<endl;
//                }
//                break;
//            case 5:
//                v=PostorderRecursive(root);
//                if(!v->empty()){
//                    cout<<"Recursive Postorder Traversal:"<<endl;
//                    for (auto itr:*v) {
//                        cout<<itr<<" ";
//                    }
//                    cout<<'\n'<<'\n';
//                }else{
//                    cout<<"[WARNING] NOTHING TO PRINT"<<endl<<endl;
//                }
//                break;
//            case 6:
//                v1=InorderIterative(root);
//                if(!v1.empty()){
//                    cout<<"Iterative Inorder Traversal:"<<endl;
//                    for (auto itr:v1) {
//                        cout<<itr<<" ";
//                    }
//                    cout<<'\n'<<'\n';
//                }else{
//                    cout<<"[WARNING] NOTHING TO PRINT"<<endl<<endl;
//                }
//                break;
//            case 7:
//                v1=PreorderIterative(root);
//                if(!v1.empty()){
//                    cout<<"Iterative Preorder Traversal:"<<endl;
//                    for (auto itr:v1) {
//                        cout<<itr<<" ";
//                    }
//                    cout<<'\n'<<'\n';
//                }else{
//                    cout<<"[WARNING] NOTHING TO PRINT"<<endl<<endl;
//                }
//                break;
//            case 8:
//                v1=PostorderIterative(root);
//                if(!v1.empty()){
//                    cout<<"Iterative Postorder Traversal:"<<endl;
//                    for (auto itr:v1) {
//                        cout<<itr<<" ";
//                    }
//                    cout<<'\n'<<'\n';
//                }else{
//                    cout<<"[WARNING] NOTHING TO PRINT"<<endl<<endl;
//                }
//                break;
//            case 9:
//                cout<<"PRINTING BINARY EXPRESSION TREE (LR FORMAT)..."<<endl;
//                printBinaryTree(root);
//                cout<<'\n'<<'\n';
//                break;
//            case 10:
//                _Exit(0);
//        }
//    }
//
//}