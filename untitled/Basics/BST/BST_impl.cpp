//#include <iostream>
//
//using namespace std;
//
//class TreeNode {
//public:
//    TreeNode *Left;
//    TreeNode *Right;
//    int data;
//
//    TreeNode() {
//        data = 0;
//        Left = NULL;
//        Right = NULL;
//    }
//
//    TreeNode(int v) {
//        data = v;
//        Left = NULL;
//        Right = NULL;
//    }
//};
//
//class BST {
//public:
//    TreeNode *root;
//
//    BST(){
//        root=NULL;
//    }
//
//    bool isEmpty() {
//        if (root == NULL) {
//            return true;
//        } else {
//            return false;
//        }
//    }
//
//    void insert(TreeNode *node) {
//        if (root == NULL) {
//            root = node;
//            cout << "Node inserted as root node" << endl;
//        } else {
//            TreeNode *temp = root;
//            while (temp != NULL) {
//                if (node->data == temp->data) {
//                    cout << "No duplicate values allowed" << endl;
//                    return;
//                } else if (node->data < temp->data && temp->Left == NULL) {
//                    temp->Left = node;
//                    cout << "Node inserted as left node" << endl;
//                    break;
//                } else if (node->data < temp->data) {
//                    temp = temp->Left;
//                } else if (node->data > temp->data && temp->Right == NULL) {
//                    temp->Right = node;
//                    cout << "Node inserted as right node" << endl;
//                    break;
//                } else {
//                    temp = temp->Right;
//                }
//            }
//        }
//    }
//
//    // Node-Left-Right
//    void printPreorder(TreeNode *r) {
//        if (r == NULL) {
//            return;
//        }
//        cout << r->data << " ";
//        printPreorder(r->Left);
//        printPreorder(r->Right);
//    }
//
//    // Left-Node-Right
//    void printInorder(TreeNode *r) {
//        if (r == NULL) {
//            return;
//        }
//        printInorder(r->Left);
//        cout << r->data << " ";
//        printInorder(r->Left);
//    }
//
//    // Left-Right-Node
//    void printPostorder(TreeNode *r) {
//        if (r == NULL) {
//            return;
//        }
//        printPostorder(r->Left);
//        printPostorder(r->Right);
//        cout << r->data << " ";
//    }
//
//    TreeNode *iterativeSearch(int val) {
//        if (root == NULL) {
//            cout << "BST is empty" << endl;
//            return root;
//        } else {
//            TreeNode *temp = root;
//            while (temp != NULL) {
//                if (val == temp->data) {
//                    return temp;
//                } else if (val > temp->data) {
//                    temp = temp->Right;
//                } else {
//                    temp = temp->Left;
//                }
//            }
//            return NULL;
//        }
//    }
//
//    int heightBST(TreeNode *r) {
//        if (r == NULL) {
//            return -1;
//        } else {
//            int leftHeight = heightBST(r->Left);
//            int rightHeight = heightBST(r->Right);
//
//            if (leftHeight > rightHeight) {
//                return leftHeight + 1;
//            } else {
//                return rightHeight + 1;
//            }
//        }
//    }
//
//    void printLevelOrderBFS(TreeNode *r) {
//        int h = heightBST(r);
//        for (int i = 0; i <= h; i++) {
//            printGivenLevel(r, i);
//        }
//    }
//
//    void printGivenLevel(TreeNode *r, int level) {
//        if (r == NULL) {
//            return;
//        } else if (level == 0) {
//            cout << r->data;
//        } else {
//            printGivenLevel(r->Left, level - 1);
//            printGivenLevel(r->Right, level - 1);
//        }
//    }
//
//
//    TreeNode *minValueNode(TreeNode *Node) {
//        TreeNode *current = Node;
//        // loop to find leftmost node
//        while (current->Left != NULL) {
//            current = current->Left;
//        }
//        return current;
//    }
//
//
//    TreeNode *deleteNode(TreeNode *r, int v) {
//        if (r == NULL) {
//            return r;
//        } else if (v < r->data) {
//            r->Left = deleteNode(r->Left, v);
//        } else if (v > r->data) {
//            r->Right = deleteNode(r->Right, v);
//        }
//            // if value matches
//        else {
//            // for node with only right child or no child
//            if (r->Left == NULL) {
//                TreeNode *temp = r->Right;
//                delete r;
//                return temp;
//            }
//                // for node with only left child
//            else if (r->Right == NULL) {
//                TreeNode *temp = r->Right;
//                delete r;
//                return temp;
//            }
//                // node with two children
//            else {
//                TreeNode *temp = minValueNode(r->Right);
//                r->data = temp->data;
//                r->Right = deleteNode(r->Right, temp->data);
//            }
//            return r;
//        }
//    }
//
//
//
//};
//
//int main() {
//    int ch;
//    BST obj;
//    int val;
//    while (true) {
//        cout << "Enter your choice:" << endl;
//        cout << "1.Insert Node" << endl;
//        cout << "2.Search Node" << endl;
//        cout << "3.Delete Node" << endl;
//        cout << "4.Print BST nodes" << endl;
//        cout << "5.Height of BST" << endl;
//        cout << "6.Is empty" << endl;
//        cout << "7.To exit" << endl;
//        cin >> ch;
//
//        TreeNode *myNode = new TreeNode();
//
//        switch (ch) {
//            case 1:
//                cout << "Enter data value of node you want to insert:" << endl;
//                cin >> val;
//                myNode->data = val;
//                obj.insert(myNode);
//                cout << endl;
//                break;
//            case 2:
//                cout << "Enter data value of node you want to search:" << endl;
//                cin >> val;
//                obj.iterativeSearch(val);
//                cout << endl;
//                break;
//            case 3:
//                cout << "Enter data value of node you want to delete:" << endl;
//                cin >> val;
//                myNode = obj.deleteNode(obj.root, val);
//                if (myNode == NULL) {
//                    cout << "Node not found" << endl;
//                } else {
//                    cout << "value deleted successfully" << endl;
//                }
//                cout << endl;
//                break;
//            case 4:
//                cout << "PREORDER:" << endl;
//                obj.printPreorder(obj.root);
//                cout << endl;
//
//                cout << "INORDER:" << endl;
//                obj.printInorder(obj.root);
//                cout << endl;
//
//                cout << "POSTORDER:" << endl;
//                obj.printPostorder(obj.root);
//                cout << endl;
//
//                cout << "BFS LEVEL ORDER:" << endl;
//                obj.printLevelOrderBFS(obj.root);
//                cout << endl;
//                break;
//            case 5:
//                cout << "Height:" << obj.heightBST(obj.root) << endl;
//                break;
//            case 6:
//                cout << obj.isEmpty() << endl;
//                break;
//            case 7:
//                _Exit(0);
//            default:
//                cout << "Enter a valid choice..." << endl;
//                break;
//        }
//
//    }
//    return 0;
//}
