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
//
//
//
////BST Implementation
//
//#include <iostream>
//#include "BST.h"
//#include<bits/stdc++.h>
//
//using namespace std;
//
////constructor
//BST_Tree::BST_Tree()
//{
//    this->root=NULL;
//}
//
////method to create node
//BST* BST_Tree::create_Node(int data)
//{
//    BST* temp = new BST();
//    temp->data = data;
//    temp->L_child = temp->R_child=NULL;
//    return temp;
//}
//
////method for recursive insertion
//BST* BST_Tree::recursive_insert(BST* root, int d)
//{
//    if (root == NULL)
//    {
//        root = create_Node(d);
//        return root;
//    }
//
//    else
//    {
//        if (d < root->data)
//        {
//            if(root->L_child!=NULL)
//            {
//                root->L_child = recursive_insert(root->L_child, d);
//            }
//
//            else
//            {
//                root->L_child=create_Node(d);
//            }
//        }
//
//        else
//        {
//            if(root->R_child!=NULL)
//            {
//                root->R_child = recursive_insert(root->R_child, d);
//            }
//
//            else
//            {
//                root->R_child=create_Node(d);
//            }
//        }
//        return root;
//    }
//}
//
////method for non-recursive insertion
//BST * BST_Tree::nonrecursive_insert (BST * root, int d)
//{
//    if(root==NULL)
//    {
//        root=create_Node(d);
//        return root;
//    }
//
//    else
//    {
//        BST* p1=root;
//        BST* p2=root;
//
//        while(p2!=NULL && d!=p1->data)
//        {
//            p1=p2;
//
//            if(d<p1->data)
//            {
//                p2=p1->L_child;
//            }
//
//            else if(d>p1->data)
//            {
//                p2=p1->R_child;
//            }
//        }
//
//        if(d==p1->data)
//        {
//            cout<<"Duplicate data not allowed"<<endl;
//            return root;
//        }
//
//        if(d<p1->data)
//        {
//            p1->L_child=create_Node(d);
//        }
//
//        else
//        {
//            p1->R_child=create_Node(d);
//        }
//        return root;
//    }
//}
//
////method for recursive searching
//BST * BST_Tree::recursive_search (BST * root, int d)
//{
//    BST* temp=root;
//
//    if(root==NULL)
//    {
//        cout<<"Tree is Empty or data not found!"<<endl;
//        return temp;
//    }
//
//    else
//    {
//        if(d<temp->data)
//        {
//            temp=recursive_search(temp->L_child,d);
//        }
//
//        else if(d>temp->data)
//        {
//            temp=recursive_search(temp->R_child,d);
//        }
//        return temp;
//    }
//}
//
////method for non-recursive searching
//BST * BST_Tree::nonrecursive_search (BST * parent, int d)
//{
//    if(root == NULL)
//    {
//        cout<<"Tree is Empty!"<<endl;
//        return 0;
//    }
//
//    else
//    {
//        while(parent!=NULL){
//            if(d<parent->data)
//            {
//                parent = parent->L_child;
//            }
//
//            else if(d>parent->data)
//            {
//                parent = parent->R_child;
//            }
//
//            else if(d==parent->data)
//            {
//                return parent;
//            }
//        }
//        cout<<"Data not found"<<endl;
//        return parent;
//    }
//}
//
////method for deleting node
//BST * BST_Tree::delete_node (BST * parent, int d)
//{
//    if(parent==NULL)
//    {
//        cout<<"Element not found!"<<endl;
//        return root;
//    }
//
//    if(d<parent->data)
//    {
//        delete_node(parent->L_child,d);
//    }
//
//    else if(d>parent->data)
//    {
//        delete_node(parent->R_child,d);
//    }
//
//    else
//    {
//        BST* temp=parent;
//
//        if(parent->L_child==NULL)
//        {
//            parent=parent->R_child;
//            free(temp);
//            return parent;
//        }
//
//        else if(parent->R_child==NULL)
//        {
//            parent=parent->L_child;
//            free(temp);
//            return parent;
//        }
//
//        else
//        {
//            temp=find_max(parent->R_child);
//            parent->data=temp->data;
//            parent->R_child=delete_node(parent->R_child,temp->data);
//            return parent;
//        }
//    }
//}
//
////method to find min
//BST* BST_Tree::find_max(BST * x)
//{
//    while(x->L_child!=NULL)
//    {
//        x=x->R_child;
//    }
//
//    return x;
//}
//
////method for recursive inorder traversal
//void BST_Tree::recursive_inorder(BST* root)
//{
//    if (root != NULL)
//    {
//        recursive_inorder(root->L_child);
//
//        cout << root->data << " ";
//
//        recursive_inorder(root->R_child);
//    }
//}
//
////method for recursive preorder traversal
//void BST_Tree::recursive_preorder(BST* root)
//{
//    if (root != NULL)
//    {
//        cout << root->data << " ";
//
//        recursive_preorder(root->L_child);
//
//        recursive_preorder(root->R_child);
//    }
//}
//
////method for recursive postorder traversal
//void BST_Tree::recursive_postorder(BST* root)
//{
//    if (root != NULL)
//    {
//        recursive_postorder(root->L_child);
//
//        recursive_postorder(root->R_child);
//
//        cout << root->data << " ";
//    }
//}
//
////method for non-recursive inorder traversal
//void BST_Tree::nonrecursive_inorder (BST * root)
//{
//    stack<BST*> in_stack;
//
//    if(root==NULL)
//    {
//        cout<<"Tree is Empty"<<endl;
//        return;
//    }
//
//    do
//    {
//        while(root!=NULL)
//        {
//            in_stack.push(root);
//            root=root->L_child;
//        }
//
//        if(!in_stack.empty())
//        {
//            root=in_stack.top();
//            in_stack.pop();
//            cout<<root->data<<" ";
//            root=root->R_child;
//        }
//    }while((!in_stack.empty())|| root!=NULL);
//    return;
//}
//
////method for non-recursive preorder traversal
//void BST_Tree::nonrecursive_preorder (BST * root)
//{
//    stack<BST*> pre_stack;
//
//    if(root==NULL)
//    {
//        cout<<"Tree is Empty"<<endl;
//        return;
//    }
//
//    do
//    {
//        while(root!=NULL)
//        {
//            pre_stack.push(root);
//            cout<<root->data<<" ";
//            root=root->L_child;
//        }
//
//        if(!pre_stack.empty())
//        {
//            root=pre_stack.top();
//            pre_stack.pop();
//            root=root->R_child;
//        }
//    }while((!pre_stack.empty())|| root!=NULL);
//    return;
//}
//
////method for non-recursive postorder traversal
//void BST_Tree::nonrecursive_postorder (BST * root)
//{
//    stack<BST*> post_stack;
//    stack<int> flags;
//    int flag=0;
//    do
//    {
//        while(root!=NULL && flag==0)
//        {
//
//            post_stack.push(root);
//
//            flags.push(1);
//
//            root=root->L_child;
//        }
//
//        if(!post_stack.empty())
//        {
//            root=post_stack.top();
//            post_stack.pop();
//            flag=flags.top();
//            flags.pop();
//
//            if(flag==1)
//            {
//                post_stack.push(root);
//                flags.push(2);
//                root=root->R_child;
//                flag=0;
//            }
//
//            else
//            {
//                cout<<root->data<<" ";
//            }
//        }
//    }while(!post_stack.empty());
//    return;
//}
//
////method for non-recursive levelorder traversal
//void BST_Tree::nonrecursive_levelorder (BST * root)
//{
//    if(root==NULL)
//    {
//        cout<<"Tree is Empty"<<endl;
//        return;
//    }
//
//    else
//    {
//        QUEUE<BST*> level_Q;
//        level_Q.push(root);
//        while(!level_Q.empty())
//        {
//            BST* temp = level_Q.front();
//            level_Q.pop();
//            cout<<temp->data<<" ";
//
//            if(temp->L_child!=NULL)
//            {
//                level_Q.push(temp->L_child);
//            }
//
//            if(temp->R_child!=NULL)
//            {
//                level_Q.push(temp->R_child);
//            }
//        }
//    }
//}
//
////recursive method for finding depth
//int BST_Tree::recursive_depth (BST * root)
//{
//    if(root==NULL)
//    {
//        return 0;
//    }
//
//    return 1+max(recursive_depth (root->L_child),recursive_depth (root->R_child));
//}
//
////non-recursive method for finding depth
//int BST_Tree::nonrecursive_depth (BST * root)
//{
//    if (root==NULL)
//    {
//        return 0;
//    }
//
//    QUEUE<BST*> d_queue;
//    d_queue.push(root);
//
//    int height = 0;
//    int nodeCount=0;
//    BST* temp;
//
//
//    while(1)
//    {
//        nodeCount = d_queue.size();
//
//        if(nodeCount==0)
//        {
//            return height-1;
//        }
//
//        height++;
//        while(nodeCount>0)
//        {
//            temp = d_queue.front();
//            d_queue.pop();
//
//            if(temp->L_child!=NULL)
//            {
//                d_queue.push(temp->L_child);
//            }
//
//            if(temp->R_child!=NULL)
//            {
//                d_queue.push(temp->R_child);
//            }
//
//            nodeCount--;
//        }
//    }
//    return height-1;
//}
//
////recursive method for creating mirror image
//BST * BST_Tree::recursive_mirror (BST * root)
//{
//    if (root != NULL)
//    {
//        BST* temp;
//        temp = root->R_child;
//        root->R_child = root->L_child;
//        root->L_child = temp;
//        recursive_mirror(root->L_child);
//        recursive_mirror(root->R_child);
//    }
//    return root;
//}
//
////recursive method for creating a copy of tree
//BST * BST_Tree::recursive_copy (BST * root)
//{
//    if(root==NULL)
//    {
//        return root;
//    }
//
//    BST* newnode=root;
//
//    newnode->L_child=recursive_copy (newnode->L_child);
//    newnode->R_child=recursive_copy (newnode->R_child);
//
//    return newnode;
//}
//
////method to count number of leaf nodes
//int BST_Tree::count_leaf_node(BST* root)
//{
//    if (root==NULL)
//    {
//        return 0;
//    }
//
//    if(root->L_child==NULL && root->R_child==NULL)
//    {
//        return 1;
//    }
//
//    else
//    {
//        return count_leaf_node(root->L_child)+count_leaf_node(root->R_child);
//    }
//}
//
////method to count number of non-leaf nodes
//int BST_Tree::count_non_leaf_node(BST* root)
//{
//    if (root==NULL || (root->L_child==NULL && root->R_child==NULL))
//    {
//        return 0;
//    }
//
//    return 1+count_non_leaf_node(root->L_child)+count_non_leaf_node(root->R_child);
//}
//
//
//
////BST Main
//
//#include <iostream>
//#include "BST.h"
//using namespace std;
//
//int main()
//{
//    cout <<endl<< "WELCOME TO THE BINARY SEARCH TREE APPLICATION !!!" ;
//
//    BST_Tree btree;
//
//    int i = 1;
//    while (i>0)
//    {
//        cout<<endl<<endl<<"Enter your choice(0 to 9) for performing following operations on BST :";
//        cout << "\n 1. Insertion.\n 2. Search. \n 3. Deletion. \n 4. Traversal. \n 5. Depth \n 6. Mirror Image. \n 7. Copy. \n 8. Count of Leaf nodes. \n 9. Count of Non-leaf nodes.\n";
//        cout << "Enter 0 to exit" << endl;
//
//        int choice = 0;
//        cin >> choice;
//
//        switch (choice)
//        {
//            case 0:
//            {
//                i = -1;
//                cout <<endl<< "Thank you!"<<endl<<"You have ended the application.";
//                break;
//            }
//
//            case 1:
//            {
//                cout<<endl<<"You have entered the Insertion section.";
//
//                int choice_i=0;
//                int k=1;
//                while(k>0)
//                {
//                    cout<<endl<<endl<<"Enter your choice : ";
//                    cout<<"\n 1. Recursive Insertion. \n 2. Non-recursive Insertion.  \n";
//
//                    cout<<"Enter 0 to exit from Insertion section."<<endl;
//                    cin>>choice_i;
//                    switch(choice_i)
//                    {
//                        case 0:
//                        {
//                            k=-1;
//                            cout<<endl<<"Ended the Insertion section."<<endl;
//                            break;
//                        }
//
//                        case 1:
//                        {
//                            int data;
//                            cout<<endl<<"Enter data to be inserted : ";
//                            cin>>data;
//                            btree.root=btree.recursive_insert(btree.root,data);
//                            cout<<endl<<"The data is inserted in the BST."<<endl;
//                            cout<<endl<<"Recursive In-Order Traversal of BST : ";
//                            btree.recursive_inorder(btree.root);
//                            break;
//                        }
//
//                        case 2:
//                        {
//                            int data;
//                            cout<<endl<<"Enter data to be inserted : ";
//                            cin>>data;
//                            btree.root=btree.nonrecursive_insert(btree.root,data);
//                            cout<<endl<<"The data is inserted in the BST."<<endl;
//                            cout<<endl<<"Recursive In-Order Traversal of BST : ";
//                            btree.recursive_inorder(btree.root);
//                            break;
//                        }
//
//                        default:
//                        {
//                            cout<<endl<<"Invalid choice."<<endl<<"Enter choice between 0 to 2"<<endl;
//                        }
//
//                    }
//                    k++;
//                }
//                break;
//            }
//
//            case 2:
//            {
//                cout<<endl<<"You have entered the Search section.";
//
//                int choice_s=0;
//                int k=1;
//                while(k>0)
//                {
//                    cout<<endl<<endl<<"Enter your choice : ";
//                    cout<<"\n 1. Recursive Search. \n 2. Non-recursive Search.  \n";
//
//                    cout<<"Enter 0 to exit from Search section."<<endl;
//                    cin>>choice_s;
//                    switch(choice_s)
//                    {
//                        case 0:
//                        {
//                            k=-1;
//                            cout<<endl<<"Ended the Search section."<<endl;
//                            break;
//                        }
//
//                        case 1:
//                        {
//                            int data;
//                            cout<<endl<<"Enter data to be searched : ";
//                            cin>>data;
//                            BST* s=btree.recursive_search(btree.root,data);
//                            if(s!=NULL)
//                            {
//                                cout<<endl<<data<<" is found in the BST."<<endl;
//                            }
//
//                            else
//                            {
//                                cout<<endl<<data<<" is not found in the BST."<<endl;
//                            }
//
//                            break;
//                        }
//
//                        case 2:
//                        {
//                            int data;
//                            cout<<endl<<"Enter data to be searched : ";
//                            cin>>data;
//                            BST* s=btree.nonrecursive_search(btree.root,data);
//                            if(s!=NULL)
//                            {
//                                cout<<endl<<data<<" is found in the BST."<<endl;
//                            }
//
//                            else
//                            {
//                                cout<<endl<<data<<" is not found in the BST."<<endl;
//                            }
//                            break;
//                        }
//
//                        default:
//                        {
//                            cout<<endl<<"Invalid choice."<<endl<<"Enter choice between 0 to 2"<<endl;
//                        }
//
//                    }
//                    k++;
//                }
//                break;
//            }
//
//            case 3:
//            {
//                cout<<endl<<"You have entered the Deletion section."<<endl;
//                int data;
//                cout<<endl<<"Enter data to be deleted : ";
//                cin>>data;
//                btree.delete_node(btree.root,data);
//                cout<<"The node has been deleted.";
//                break;
//            }
//
//            case 4:
//            {
//                cout<<endl<<"You have entered the Traversal section.";
//
//                int choice_t=0;
//                int m=1;
//                while(m>0)
//                {
//                    cout<<endl<<endl<<"Enter your choice: ";
//                    cout<<"\n 1. Recursive Traversal \n 2. Non-Recursive Traversal "<<endl;
//                    cout<<"Enter 0 to end the Traversal section."<<endl;
//                    cin>>choice_t;
//                    switch(choice_t)
//                    {
//
//                        case 0:
//                        {
//                            m=-1;
//                            cout<<endl<<"Thank you.You have ended the Traversal section."<<endl;
//                            break;
//                        }
//
//                        case 1:
//                        {
//                            int choice_tr=0;
//                            int k=1;
//                            while(k>0)
//                            {
//                                cout<<endl<<"You have entered the Recursive Traversal section.";
//                                cout<<endl<<"Enter your choice(0 to 3) : ";
//                                cout<<"\n 1. Recursive In-Order Traversal. \n 2. Recursive Post-Order Traversal. \n"
//                                      " 3. Recursive Pre-Order Traversal. "<<endl;
//                                cout<<"Enter 0 to exit from Recursive section."<<endl;
//                                cin>>choice_tr;
//                                switch(choice_tr)
//                                {
//                                    case 0:
//                                    {
//                                        k=-1;
//                                        cout<<endl<<"Ended the Recursive traversal section."<<endl;
//                                        break;
//                                    }
//
//                                    case 1:
//                                    {
//                                        cout<<endl<<"Recursive In-Order Traversal of BST : ";
//                                        btree.recursive_inorder(btree.root);
//                                        cout<<endl;
//                                        break;
//                                    }
//
//                                    case 2:
//                                    {
//                                        cout<<endl<<"Recursive Post-Order Traversal of BST : ";
//                                        btree.recursive_postorder(btree.root);
//                                        cout<<endl;
//                                        break;
//                                    }
//
//                                    case 3:
//                                    {
//                                        cout<<endl<<"Recursive Pre-Order Traversal of BST : ";
//                                        btree.recursive_preorder(btree.root);
//                                        cout<<endl;
//                                        break;
//                                    }
//
//                                    default:
//                                    {
//                                        cout<<endl<<"Invalid choice.Enter choice between 0 to 3."<<endl;
//                                    }
//
//                                }
//                                k++;
//                            }
//                            break;
//                        }
//
//                        case 2:
//                        {
//                            int choice_tnr=0;
//                            int k=1;
//                            while(k>0)
//                            {
//                                cout<<endl<<"You have entered the Non-recursive Traversal section.";
//                                cout<<endl<<"Enter your choice(0 to 4) : ";
//                                cout<<"\n 1. Non-recursive In-Order Traversal. \n 2. Non-recursive Post-Order Traversal. \n"
//                                      " 3. Non-recursive Pre-Order Traversal. \n 4. Non-recursive Level-Order Traversal."<<endl;
//                                cout<<"Enter 0 to exit from Non-recursive section."<<endl;
//                                cin>>choice_tnr;
//                                switch(choice_tnr)
//                                {
//                                    case 0:
//                                    {
//                                        k=-1;
//                                        cout<<endl<<"Ended the Non-recursive traversal section."<<endl;
//                                        break;
//                                    }
//
//                                    case 1:
//                                    {
//                                        cout<<endl<<"Non-recursive In-Order Traversal of BST : ";
//                                        btree.nonrecursive_inorder(btree.root);
//                                        cout<<endl;
//                                        break;
//                                    }
//
//                                    case 2:
//                                    {
//                                        cout<<endl<<"Non-recursive Post-Order Traversal of BST : ";
//                                        btree.nonrecursive_postorder(btree.root);
//                                        cout<<endl;
//                                        break;
//                                    }
//
//                                    case 3:
//                                    {
//                                        cout<<endl<<"Non-recursive Pre-Order Traversal of BST : ";
//                                        btree.nonrecursive_preorder(btree.root);
//                                        cout<<endl;
//                                        break;
//                                    }
//
//                                    case 4:
//                                    {
//                                        cout<<endl<<"Non-recursive Level-Order Traversal of BST : ";
//                                        btree.nonrecursive_levelorder(btree.root);
//                                        cout<<endl;
//                                        break;
//                                    }
//
//                                    default:
//                                    {
//                                        cout<<endl<<"Invalid choice.Enter choice between 0 to 4."<<endl;
//                                    }
//
//                                }
//                                k++;
//                            }
//                            break;
//                        }
//
//                        default:
//                        {
//                            cout<<endl<<"Invalid choice.enter choice between 0 to 2"<<endl;
//                        }
//
//                    }
//
//                    m++;
//                }
//                break;
//            }
//
//            case 5:
//            {
//                cout<<endl<<"You have entered the Depth section.";
//
//                int choice_d=0;
//                int k=1;
//                while(k>0)
//                {
//                    cout<<endl<<"Enter your choice : ";
//                    cout<<"\n 1. Recursive Depth. \n 2. Non-recursive Depth.  \n";
//
//                    cout<<endl<<"Enter 0 to exit from Depth section."<<endl;
//                    cin>>choice_d;
//                    switch(choice_d)
//                    {
//                        case 0:
//                        {
//                            k=-1;
//                            cout<<endl<<"Ended the Depth section."<<endl;
//                            break;
//                        }
//
//                        case 1:
//                        {
//                            cout<<endl<<"The depth of BST : ";
//                            cout<<btree.recursive_depth(btree.root);
//                            break;
//                        }
//
//                        case 2:
//                        {
//                            cout<<endl<<"The depth of BST : ";
//                            cout<<btree.recursive_depth(btree.root);
//                            break;
//                        }
//
//                        default:
//                        {
//                            cout<<endl<<"Invalid choice."<<endl<<"Enter choice between 0 to 2"<<endl;
//                        }
//
//                    }
//                    k++;
//                }
//                break;
//            }
//
//            case 6:
//            {
//                cout<<endl<<"You have entered the Mirror Image section.";
//
//                btree.recursive_mirror(btree.root);
//                cout<<endl<<"The mirror image of BST is created : ";
//                btree.recursive_inorder(btree.root);
//                break;
//            }
//
//            case 7:
//            {
//                cout<<endl<<"You have entered the Copy section.";
//                cout<<endl<<"The copy of BST is created : ";
//                btree.recursive_inorder(btree.root);
//                break;
//            }
//
//            case 8:
//            {
//                cout<<endl<<"You have entered the Leaf node section.";
//                cout<<endl<<"The count of leaf nodes : "<<btree.count_leaf_node(btree.root);
//                break;
//            }
//
//            case 9:
//            {
//                cout<<endl<<"You have entered the Non-leaf node section.";
//                cout<<endl<<"The count of non-leaf nodes : "<<btree.count_non_leaf_node(btree.root);
//                break;
//            }
//
//            default:
//            {
//                cout <<endl<< "Invalid choice!"<<endl<<"Enter choice between 0 to 9.";
//            }
//        }
//        i++;
//    }
//}
