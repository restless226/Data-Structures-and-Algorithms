// header file

#ifndef TBT
#define TBT

#include <iostream>

using namespace std;

template<typename T>
class tbtnode {
public:
    T data;
    tbtnode<T> *lptr;
    tbtnode<T> *rptr;
    int left_thread, right_thread;
    int check = 0;
};

template<typename T>
class tbt {
public:
    tbtnode<T> *head;
    tbtnode<T> *root = NULL;

    //constructor
    tbt();

    //method to create root
    void create_root();

    //method to insert new node
    void insert_node(T);

    //method for inorder traversal
    void inorder();

    //method for preorder traversal of TBT
    void preorder();

    //method for postorder traversal of TBT
    void postorder();
};

#endif // TBT_H_