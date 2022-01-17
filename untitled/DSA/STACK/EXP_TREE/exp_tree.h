//
// Created by rapen on 30-04-2021.
//

#ifndef UNTITLED_EXP_TREE_H
#define UNTITLED_EXP_TREE_H

#include <iostream>

using namespace std;

template<typename T>

class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }


    ~BinaryTreeNode() = default;

};

#endif //UNTITLED_EXP_TREE_H
