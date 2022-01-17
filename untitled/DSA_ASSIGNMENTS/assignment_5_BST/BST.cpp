
//BST Implementation

#include <iostream>
#include "BST.h"
#include<bits/stdc++.h>

using namespace std;

//constructor
BST_Tree::BST_Tree() {
    this->root = NULL;
}

//method to create node
BST *BST_Tree::create_Node(int data) {
    BST *temp = new BST();
    temp->data = data;
    temp->L_child = temp->R_child = NULL;
    return temp;
}

//method for recursive insertion
BST *BST_Tree::recursive_insert(BST *root, int d) {
    if (root == NULL) {
        root = create_Node(d);
        return root;
    } else {
        if (d < root->data) {
            if (root->L_child != NULL) {
                root->L_child = recursive_insert(root->L_child, d);
            } else {
                root->L_child = create_Node(d);
            }
        } else {
            if (root->R_child != NULL) {
                root->R_child = recursive_insert(root->R_child, d);
            } else {
                root->R_child = create_Node(d);
            }
        }
        return root;
    }
}

//method for non-recursive insertion
BST *BST_Tree::nonrecursive_insert(BST *root, int d) {
    if (root == NULL) {
        root = create_Node(d);
        return root;
    } else {
        BST *p1 = root;
        BST *p2 = root;

        while (p2 != NULL && d != p1->data) {
            p1 = p2;

            if (d < p1->data) {
                p2 = p1->L_child;
            } else if (d > p1->data) {
                p2 = p1->R_child;
            }
        }

        if (d == p1->data) {
            cout << "Duplicate data not allowed" << endl;
            return root;
        }

        if (d < p1->data) {
            p1->L_child = create_Node(d);
        } else {
            p1->R_child = create_Node(d);
        }
        return root;
    }
}

//method for recursive searching
BST *BST_Tree::recursive_search(BST *root, int d) {
    BST *temp = root;

    if (root == NULL) {
        cout << "Tree is Empty or data not found!" << endl;
        return temp;
    } else {
        if (d < temp->data) {
            temp = recursive_search(temp->L_child, d);
        } else if (d > temp->data) {
            temp = recursive_search(temp->R_child, d);
        }
        return temp;
    }
}

//method for non-recursive searching
BST *BST_Tree::nonrecursive_search(BST *parent, int d) {
    if (root == NULL) {
        cout << "Tree is Empty!" << endl;
        return 0;
    } else {
        while (parent != NULL) {
            if (d < parent->data) {
                parent = parent->L_child;
            } else if (d > parent->data) {
                parent = parent->R_child;
            } else if (d == parent->data) {
                return parent;
            }
        }
        cout << "Data not found" << endl;
        return parent;
    }
}

//method for deleting node
BST *BST_Tree::delete_node(BST *parent, int d) {
    if (parent == NULL) {
        cout << "Element not found!" << endl;
        return root;
    }

    if (d < parent->data) {
        delete_node(parent->L_child, d);
    } else if (d > parent->data) {
        delete_node(parent->R_child, d);
    } else {
        BST *temp = parent;

        if (parent->L_child == NULL) {
            parent = parent->R_child;
            free(temp);
            return parent;
        } else if (parent->R_child == NULL) {
            parent = parent->L_child;
            free(temp);
            return parent;
        } else {
            temp = find_max(parent->R_child);
            parent->data = temp->data;
            parent->R_child = delete_node(parent->R_child, temp->data);
            return parent;
        }
    }
}

//method to find min
BST *BST_Tree::find_max(BST *x) {
    while (x->L_child != NULL) {
        x = x->R_child;
    }

    return x;
}

//method for recursive inorder traversal
void BST_Tree::recursive_inorder(BST *root) {
    if (root != NULL) {
        recursive_inorder(root->L_child);

        cout << root->data << " ";

        recursive_inorder(root->R_child);
    }
}

//method for recursive preorder traversal
void BST_Tree::recursive_preorder(BST *root) {
    if (root != NULL) {
        cout << root->data << " ";

        recursive_preorder(root->L_child);

        recursive_preorder(root->R_child);
    }
}

//method for recursive postorder traversal
void BST_Tree::recursive_postorder(BST *root) {
    if (root != NULL) {
        recursive_postorder(root->L_child);

        recursive_postorder(root->R_child);

        cout << root->data << " ";
    }
}

//method for non-recursive inorder traversal
void BST_Tree::nonrecursive_inorder(BST *root) {
    stack<BST *> in_stack;

    if (root == NULL) {
        cout << "Tree is Empty" << endl;
        return;
    }

    do {
        while (root != NULL) {
            in_stack.push(root);
            root = root->L_child;
        }

        if (!in_stack.empty()) {
            root = in_stack.top();
            in_stack.pop();
            cout << root->data << " ";
            root = root->R_child;
        }
    } while ((!in_stack.empty()) || root != NULL);
    return;
}

//method for non-recursive preorder traversal
void BST_Tree::nonrecursive_preorder(BST *root) {
    stack<BST *> pre_stack;

    if (root == NULL) {
        cout << "Tree is Empty" << endl;
        return;
    }

    do {
        while (root != NULL) {
            pre_stack.push(root);
            cout << root->data << " ";
            root = root->L_child;
        }

        if (!pre_stack.empty()) {
            root = pre_stack.top();
            pre_stack.pop();
            root = root->R_child;
        }
    } while ((!pre_stack.empty()) || root != NULL);
    return;
}

//method for non-recursive postorder traversal
void BST_Tree::nonrecursive_postorder(BST *root) {
    stack<BST *> post_stack;
    stack<int> flags;
    int flag = 0;
    do {
        while (root != NULL && flag == 0) {

            post_stack.push(root);

            flags.push(1);

            root = root->L_child;
        }

        if (!post_stack.empty()) {
            root = post_stack.top();
            post_stack.pop();
            flag = flags.top();
            flags.pop();

            if (flag == 1) {
                post_stack.push(root);
                flags.push(2);
                root = root->R_child;
                flag = 0;
            } else {
                cout << root->data << " ";
            }
        }
    } while (!post_stack.empty());
    return;
}

//method for non-recursive levelorder traversal
void BST_Tree::nonrecursive_levelorder(BST *root) {
    if (root == NULL) {
        cout << "Tree is Empty" << endl;
        return;
    } else {
        QUEUE < BST * > level_Q;
        level_Q.push(root);
        while (!level_Q.empty()) {
            BST *temp = level_Q.front();
            level_Q.pop();
            cout << temp->data << " ";

            if (temp->L_child != NULL) {
                level_Q.push(temp->L_child);
            }

            if (temp->R_child != NULL) {
                level_Q.push(temp->R_child);
            }
        }
    }
}

//recursive method for finding depth
int BST_Tree::recursive_depth(BST *root) {
    if (root == NULL) {
        return 0;
    }

    return 1 + max(recursive_depth(root->L_child), recursive_depth(root->R_child));
}

//non-recursive method for finding depth
int BST_Tree::nonrecursive_depth(BST *root) {
    if (root == NULL) {
        return 0;
    }

    QUEUE < BST * > d_queue;
    d_queue.push(root);

    int height = 0;
    int nodeCount = 0;
    BST *temp;


    while (1) {
        nodeCount = d_queue.size();

        if (nodeCount == 0) {
            return height - 1;
        }

        height++;
        while (nodeCount > 0) {
            temp = d_queue.front();
            d_queue.pop();

            if (temp->L_child != NULL) {
                d_queue.push(temp->L_child);
            }

            if (temp->R_child != NULL) {
                d_queue.push(temp->R_child);
            }

            nodeCount--;
        }
    }
    return height - 1;
}

//recursive method for creating mirror image
BST *BST_Tree::recursive_mirror(BST *root) {
    if (root != NULL) {
        BST *temp;
        temp = root->R_child;
        root->R_child = root->L_child;
        root->L_child = temp;
        recursive_mirror(root->L_child);
        recursive_mirror(root->R_child);
    }
    return root;
}

//recursive method for creating a copy of tree
BST *BST_Tree::recursive_copy(BST *root) {
    if (root == NULL) {
        return root;
    }

    BST *newnode = root;

    newnode->L_child = recursive_copy(newnode->L_child);
    newnode->R_child = recursive_copy(newnode->R_child);

    return newnode;
}

//method to count number of leaf nodes
int BST_Tree::count_leaf_node(BST *root) {
    if (root == NULL) {
        return 0;
    }

    if (root->L_child == NULL && root->R_child == NULL) {
        return 1;
    } else {
        return count_leaf_node(root->L_child) + count_leaf_node(root->R_child);
    }
}

//method to count number of non-leaf nodes
int BST_Tree::count_non_leaf_node(BST *root) {
    if (root == NULL || (root->L_child == NULL && root->R_child == NULL)) {
        return 0;
    }

    return 1 + count_non_leaf_node(root->L_child) + count_non_leaf_node(root->R_child);
}
