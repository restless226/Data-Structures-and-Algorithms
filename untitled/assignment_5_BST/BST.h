////BST Header
//
////Assignment 5 BST
//
//#ifndef BST_H_
//#define BST_H_
//#include <iostream>
//using namespace std;
//
//class BST
//{
//public:
//    int data;
//    BST *L_child;
//    BST *R_child;
//};
//
//class BST_Tree
//{
//public:
//    BST * root=NULL;
//
//    //constructor
//    BST_Tree();
//
//    //method to create node
//    BST *create_Node (int data);
//
//    //method for recursive insertion
//    BST *recursive_insert (BST * root, int data);
//
//    //method for non-recursive insertion
//    BST *nonrecursive_insert (BST * root, int data);
//
//    //method for recursive searching
//    BST *recursive_search (BST * root, int d);
//
//    //method for non-recursive searching
//    BST *nonrecursive_search (BST * root, int d);
//
//    //method for deleting node
//    BST *delete_node (BST * parent, int d);
//
//    //method to find min
//    BST* find_max(BST *);
//
//    //method for recursive inorder traversal
//    void recursive_inorder (BST * root);
//
//    //method for recursive preorder traversal
//    void recursive_preorder (BST * root);
//
//    //method for recursive postorder traversal
//    void recursive_postorder (BST * root);
//
//    //method for non-recursive inorder traversal
//    void nonrecursive_inorder (BST * root);
//
//    //method for non-recursive preorder traversal
//    void nonrecursive_preorder (BST * root);
//
//    //method for non-recursive postorder traversal
//    void nonrecursive_postorder (BST * root);
//
//    //method for non-recursive levelorder traversal
//    void nonrecursive_levelorder (BST * root);
//
//    //recursive method for finding depth
//    int recursive_depth (BST * root);
//
//    //non-recursive method for finding depth
//    int nonrecursive_depth (BST * root);
//
//    //recursive method for creating mirror image
//    BST *recursive_mirror (BST * root);
//
//    //recursive method for creating a copy of tree
//    BST *recursive_copy (BST * root);
//
//    //method to count number of leaf nodes
//    int count_leaf_node(BST*);
//
//    //method to count number of non-leaf nodes
//    int count_non_leaf_node(BST*);
//};
//
//#endif //BST_H_