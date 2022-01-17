
#include<iostream>
#include "StackHeader.h"
#include "StackImplementation.cpp" //including header file
#include "ExpressionHeader.h"
#include "TreeExpressionHeader.h"
#include<string.h>

using namespace std;

//method to return a node
TNode *ExpressionTree::getNode(char data) {
    TNode *temp = new TNode;
    temp->leftNode = temp->rightNode = NULL;
    temp->data = data;
    return temp;
}

//method to create tree
TNode *ExpressionTree::createNode(string infix) {
    Stack<TNode *> stack;
    InfixToPostfix post;
    TNode *temp;
    string postfix = post.infixToPostfix(infix);
    for (int i = 0; i < postfix.length(); i++) {
        if (!(post.isOperator(postfix[i]))) {
            temp = getNode(postfix[i]);
            stack.push(temp);
        } else {
            temp = getNode(postfix[i]);
            temp->rightNode = stack.pop();
            temp->leftNode = stack.pop();
            stack.push(temp);
        }
    }
    temp = stack.pop();
    return temp;
}

//method to traverse binary tree in Inorder recursively
void ExpressionTree::recursiveInorder(TNode *root) {
    if (root == NULL) {
        return;
    }
    recursiveInorder(root->leftNode);
    cout << root->data << " ";
    recursiveInorder(root->rightNode);
}

//method to traverse binary tree in Postorder recursively
void ExpressionTree::recursivePostorder(TNode *root) {
    if (root == NULL) {
        return;
    }
    recursivePostorder(root->leftNode);
    recursivePostorder(root->rightNode);
    cout << root->data << " ";
}

//method to traverse binary tree in Preorder recursively
void ExpressionTree::recursivePreorder(TNode *root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    recursivePreorder(root->leftNode);
    recursivePreorder(root->rightNode);
}

void ExpressionTree::nonRecursiveInorder(TNode *root) {
    TNode *currentNode = root;
    Stack<TNode *> stack;
    do {
        while (currentNode != NULL) {
            stack.push(currentNode);
            currentNode = currentNode->leftNode;
        }
        currentNode = stack.pop();
        cout << currentNode->data << " ";
        currentNode = currentNode->rightNode;
    } while (currentNode != NULL || !(stack.isEmpty()));
}

void ExpressionTree::nonRecursivePostorder(TNode *root) {
    Stack<TNode *> stack1;
    Stack<TNode *> stack2;
    stack1.push(root);
    TNode *currentNode;
    do {

        currentNode = stack1.peep();
        stack1.pop();
        stack2.push(currentNode);

        if (currentNode->leftNode != NULL) {
            stack1.push(currentNode->leftNode);
        }
        if (currentNode->rightNode != NULL) {
            stack1.push(currentNode->rightNode);
        }

    } while (!(stack1.isEmpty()));

    while (!(stack2.isEmpty())) {
        currentNode = stack2.peep();
        stack2.pop();
        cout << currentNode->data << " ";
    }

}

void ExpressionTree::nonRecursivePreorder(TNode *root) {
    Stack<TNode *> stack;
    stack.push(root);
    do {

        TNode *currentNode = stack.peep();
        cout << currentNode->data << " ";
        stack.pop();
        if (currentNode->rightNode != NULL) {
            stack.push(currentNode->rightNode);
        }
        if (currentNode->leftNode != NULL) {
            stack.push(currentNode->leftNode);
        }

    } while (!(stack.isEmpty()));
}

//default constructor of TNode class
TNode::TNode() {
    this->data = data;
    leftNode = NULL;
    rightNode = NULL;
}







