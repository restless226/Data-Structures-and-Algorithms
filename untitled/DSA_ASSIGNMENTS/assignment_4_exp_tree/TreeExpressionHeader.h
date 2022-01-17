#include<string.h>

#ifndef TREEEXPRESSIONHEADER_H_
#define TREEEXPRESSIONHEADER_H_

class TNode {
public:
    char data;
    TNode *leftNode;
    TNode *rightNode;

    TNode();
};

class ExpressionTree {
public:
    TNode *getNode(char data); //method to return node
    TNode *createNode(string Infix); //method to create tree
    void recursiveInorder(TNode *root); //method to traverse binary tree in Inorder recursively
    void recursivePreorder(TNode *root); //method to traverse binary tree in Preorder recursively
    void recursivePostorder(TNode *root); //method to traverse binary tree in Postorder recursively
    void nonRecursiveInorder(TNode *root);

    void nonRecursivePreorder(TNode *root);

    void nonRecursivePostorder(TNode *root);
};

#endif /* TREEEXPRESSIONHEADER_H_ */
