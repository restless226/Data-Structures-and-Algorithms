//BST Main

#include <iostream>
#include "BST.h"

using namespace std;

int main() {
    cout << endl << "WELCOME TO THE BINARY SEARCH TREE APPLICATION !!!";

    BST_Tree btree;

    int i = 1;
    while (i > 0) {
        cout << endl << endl << "Enter your choice(0 to 9) for performing following operations on BST :";
        cout
                << "\n 1. Insertion.\n 2. Search. \n 3. Deletion. \n 4. Traversal. \n 5. Depth \n 6. Mirror Image. \n 7. Copy. \n 8. Count of Leaf nodes. \n 9. Count of Non-leaf nodes.\n";
        cout << "Enter 0 to exit" << endl;

        int choice = 0;
        cin >> choice;

        switch (choice) {
            case 0: {
                i = -1;
                cout << endl << "Thank you!" << endl << "You have ended the application.";
                break;
            }

            case 1: {
                cout << endl << "You have entered the Insertion section.";

                int choice_i = 0;
                int k = 1;
                while (k > 0) {
                    cout << endl << endl << "Enter your choice : ";
                    cout << "\n 1. Recursive Insertion. \n 2. Non-recursive Insertion.  \n";

                    cout << "Enter 0 to exit from Insertion section." << endl;
                    cin >> choice_i;
                    switch (choice_i) {
                        case 0: {
                            k = -1;
                            cout << endl << "Ended the Insertion section." << endl;
                            break;
                        }

                        case 1: {
                            int data;
                            cout << endl << "Enter data to be inserted : ";
                            cin >> data;
                            btree.root = btree.recursive_insert(btree.root, data);
                            cout << endl << "The data is inserted in the BST." << endl;
                            cout << endl << "Recursive In-Order Traversal of BST : ";
                            btree.recursive_inorder(btree.root);
                            break;
                        }

                        case 2: {
                            int data;
                            cout << endl << "Enter data to be inserted : ";
                            cin >> data;
                            btree.root = btree.nonrecursive_insert(btree.root, data);
                            cout << endl << "The data is inserted in the BST." << endl;
                            cout << endl << "Recursive In-Order Traversal of BST : ";
                            btree.recursive_inorder(btree.root);
                            break;
                        }

                        default: {
                            cout << endl << "Invalid choice." << endl << "Enter choice between 0 to 2" << endl;
                        }

                    }
                    k++;
                }
                break;
            }

            case 2: {
                cout << endl << "You have entered the Search section.";

                int choice_s = 0;
                int k = 1;
                while (k > 0) {
                    cout << endl << endl << "Enter your choice : ";
                    cout << "\n 1. Recursive Search. \n 2. Non-recursive Search.  \n";

                    cout << "Enter 0 to exit from Search section." << endl;
                    cin >> choice_s;
                    switch (choice_s) {
                        case 0: {
                            k = -1;
                            cout << endl << "Ended the Search section." << endl;
                            break;
                        }

                        case 1: {
                            int data;
                            cout << endl << "Enter data to be searched : ";
                            cin >> data;
                            BST *s = btree.recursive_search(btree.root, data);
                            if (s != NULL) {
                                cout << endl << data << " is found in the BST." << endl;
                            } else {
                                cout << endl << data << " is not found in the BST." << endl;
                            }

                            break;
                        }

                        case 2: {
                            int data;
                            cout << endl << "Enter data to be searched : ";
                            cin >> data;
                            BST *s = btree.nonrecursive_search(btree.root, data);
                            if (s != NULL) {
                                cout << endl << data << " is found in the BST." << endl;
                            } else {
                                cout << endl << data << " is not found in the BST." << endl;
                            }
                            break;
                        }

                        default: {
                            cout << endl << "Invalid choice." << endl << "Enter choice between 0 to 2" << endl;
                        }

                    }
                    k++;
                }
                break;
            }

            case 3: {
                cout << endl << "You have entered the Deletion section." << endl;
                int data;
                cout << endl << "Enter data to be deleted : ";
                cin >> data;
                btree.delete_node(btree.root, data);
                cout << "The node has been deleted.";
                break;
            }

            case 4: {
                cout << endl << "You have entered the Traversal section.";

                int choice_t = 0;
                int m = 1;
                while (m > 0) {
                    cout << endl << endl << "Enter your choice: ";
                    cout << "\n 1. Recursive Traversal \n 2. Non-Recursive Traversal " << endl;
                    cout << "Enter 0 to end the Traversal section." << endl;
                    cin >> choice_t;
                    switch (choice_t) {

                        case 0: {
                            m = -1;
                            cout << endl << "Thank you.You have ended the Traversal section." << endl;
                            break;
                        }

                        case 1: {
                            int choice_tr = 0;
                            int k = 1;
                            while (k > 0) {
                                cout << endl << "You have entered the Recursive Traversal section.";
                                cout << endl << "Enter your choice(0 to 3) : ";
                                cout << "\n 1. Recursive In-Order Traversal. \n 2. Recursive Post-Order Traversal. \n"
                                        " 3. Recursive Pre-Order Traversal. " << endl;
                                cout << "Enter 0 to exit from Recursive section." << endl;
                                cin >> choice_tr;
                                switch (choice_tr) {
                                    case 0: {
                                        k = -1;
                                        cout << endl << "Ended the Recursive traversal section." << endl;
                                        break;
                                    }

                                    case 1: {
                                        cout << endl << "Recursive In-Order Traversal of BST : ";
                                        btree.recursive_inorder(btree.root);
                                        cout << endl;
                                        break;
                                    }

                                    case 2: {
                                        cout << endl << "Recursive Post-Order Traversal of BST : ";
                                        btree.recursive_postorder(btree.root);
                                        cout << endl;
                                        break;
                                    }

                                    case 3: {
                                        cout << endl << "Recursive Pre-Order Traversal of BST : ";
                                        btree.recursive_preorder(btree.root);
                                        cout << endl;
                                        break;
                                    }

                                    default: {
                                        cout << endl << "Invalid choice.Enter choice between 0 to 3." << endl;
                                    }

                                }
                                k++;
                            }
                            break;
                        }

                        case 2: {
                            int choice_tnr = 0;
                            int k = 1;
                            while (k > 0) {
                                cout << endl << "You have entered the Non-recursive Traversal section.";
                                cout << endl << "Enter your choice(0 to 4) : ";
                                cout
                                        << "\n 1. Non-recursive In-Order Traversal. \n 2. Non-recursive Post-Order Traversal. \n"
                                           " 3. Non-recursive Pre-Order Traversal. \n 4. Non-recursive Level-Order Traversal."
                                        << endl;
                                cout << "Enter 0 to exit from Non-recursive section." << endl;
                                cin >> choice_tnr;
                                switch (choice_tnr) {
                                    case 0: {
                                        k = -1;
                                        cout << endl << "Ended the Non-recursive traversal section." << endl;
                                        break;
                                    }

                                    case 1: {
                                        cout << endl << "Non-recursive In-Order Traversal of BST : ";
                                        btree.nonrecursive_inorder(btree.root);
                                        cout << endl;
                                        break;
                                    }

                                    case 2: {
                                        cout << endl << "Non-recursive Post-Order Traversal of BST : ";
                                        btree.nonrecursive_postorder(btree.root);
                                        cout << endl;
                                        break;
                                    }

                                    case 3: {
                                        cout << endl << "Non-recursive Pre-Order Traversal of BST : ";
                                        btree.nonrecursive_preorder(btree.root);
                                        cout << endl;
                                        break;
                                    }

                                    case 4: {
                                        cout << endl << "Non-recursive Level-Order Traversal of BST : ";
                                        btree.nonrecursive_levelorder(btree.root);
                                        cout << endl;
                                        break;
                                    }

                                    default: {
                                        cout << endl << "Invalid choice.Enter choice between 0 to 4." << endl;
                                    }

                                }
                                k++;
                            }
                            break;
                        }

                        default: {
                            cout << endl << "Invalid choice.enter choice between 0 to 2" << endl;
                        }

                    }

                    m++;
                }
                break;
            }

            case 5: {
                cout << endl << "You have entered the Depth section.";

                int choice_d = 0;
                int k = 1;
                while (k > 0) {
                    cout << endl << "Enter your choice : ";
                    cout << "\n 1. Recursive Depth. \n 2. Non-recursive Depth.  \n";

                    cout << endl << "Enter 0 to exit from Depth section." << endl;
                    cin >> choice_d;
                    switch (choice_d) {
                        case 0: {
                            k = -1;
                            cout << endl << "Ended the Depth section." << endl;
                            break;
                        }

                        case 1: {
                            cout << endl << "The depth of BST : ";
                            cout << btree.recursive_depth(btree.root);
                            break;
                        }

                        case 2: {
                            cout << endl << "The depth of BST : ";
                            cout << btree.recursive_depth(btree.root);
                            break;
                        }

                        default: {
                            cout << endl << "Invalid choice." << endl << "Enter choice between 0 to 2" << endl;
                        }

                    }
                    k++;
                }
                break;
            }

            case 6: {
                cout << endl << "You have entered the Mirror Image section.";

                btree.recursive_mirror(btree.root);
                cout << endl << "The mirror image of BST is created : ";
                btree.recursive_inorder(btree.root);
                break;
            }

            case 7: {
                cout << endl << "You have entered the Copy section.";
                cout << endl << "The copy of BST is created : ";
                btree.recursive_inorder(btree.root);
                break;
            }

            case 8: {
                cout << endl << "You have entered the Leaf node section.";
                cout << endl << "The count of leaf nodes : " << btree.count_leaf_node(btree.root);
                break;
            }

            case 9: {
                cout << endl << "You have entered the Non-leaf node section.";
                cout << endl << "The count of non-leaf nodes : " << btree.count_non_leaf_node(btree.root);
                break;
            }

            default: {
                cout << endl << "Invalid choice!" << endl << "Enter choice between 0 to 9.";
            }
        }
        i++;
    }
}
