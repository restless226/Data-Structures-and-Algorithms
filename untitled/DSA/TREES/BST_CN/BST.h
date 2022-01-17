//
// Created by rapen on 14-04-2021.
//

#ifndef UNTITLED_BST_H
#define UNTITLED_BST_H

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


class BST {
    BinaryTreeNode<int> *root;

public:

    BST() {
        root = nullptr;
    }

    ~BST() {
        delete root;
    }


private:
    void printBinaryTree(BinaryTreeNode<int> *root) {
        // Base case
        if (root == nullptr) {
            return;
        }


        // small calculation
        cout << root->data << ": ";

        if (root->left != NULL) {
            cout << "L" << root->left->data << " ";
        }
        if (root->right != NULL) {
            cout << "R" << root->right->data << " ";
        }
        cout << endl;

        // recursive case
        printBinaryTree(root->left);
        printBinaryTree(root->right);
    }

public:
    void printBST() {
        printBinaryTree(root);
    }

private:
    BinaryTreeNode<int> *insertData_Helper(BinaryTreeNode<int> *node, int data) {
        if (node == nullptr) {
            BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
            return newNode;
        }

        if (data < node->data) {
            node->left = insertData_Helper(root->left, data);
        } else if (data >= node->data) {
            node->right = insertData_Helper(root->right, data);
        }

        return node;
    }

public:
    void insertData(int data) {
        this->root = insertData_Helper(this->root, data);
    }


private:
    BinaryTreeNode<int> *deleteData_Helper(BinaryTreeNode<int> *node, int data) {
        if (node == nullptr) {
            return nullptr;
        }

        if (data > node->data) {
            node->right = deleteData_Helper(node->right, data);
            return node;
        } else if (data < node->data) {
            node->left = deleteData_Helper(node->left, data);
            return node;
        } else if (data == root->data) {
            if (node->left == nullptr && node->right == nullptr) {
                delete node;
                return nullptr;
            } else if (node->left == nullptr) {
                BinaryTreeNode<int> *temp = node->right;
                node->right = nullptr;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                BinaryTreeNode<int> *temp = node->left;
                node->left = nullptr;
                delete node;
                return temp;
            } else {

                // Here both  'node->left!= nullptr' & 'node->right!= nullptr'
                // After deleting node(root) we have to replace it
                // EITHER with 'smallest element from right-subtree'
                // OR with 'largest element from left-subtree'

                // Let's go with 'smallest element from right-subtree'

                BinaryTreeNode<int> *minNode = node->right;

                while (minNode->left != nullptr) {
                    minNode = minNode->left;
                }

                int rightMin = minNode->data;
                node->data = rightMin;

                // [NOTE]: Now we have to remove minNode from right-subtree
                // [NOTE]: deleting this data might change node->right
                // Hence we have to reassign its value
                node->right = deleteData_Helper(node->right, rightMin);

                return node;

            }
        }
    }

public:
    void deleteData(int data) {
        root = deleteData_Helper(root, data);
    }


private:
    // Helper function for hasData public function
    bool hasDataInBst_Helper(BinaryTreeNode<int> *node, int data) {
        if (node == nullptr) {
            return false;
        }

        if (node->data == data) {
            return true;
        } else if (data < node->data) {
            return hasDataInBst_Helper(node->left, data);
        } else if (data >= node->data) {
            return hasDataInBst_Helper(node->right, data);
        }
    }

public:
    bool hasDataInBST(int data) {
        return hasDataInBst_Helper(root, data);
    }
};

#endif //UNTITLED_BST_H

