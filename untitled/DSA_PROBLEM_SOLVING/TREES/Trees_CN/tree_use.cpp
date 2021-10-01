//#include <iostream>
//#include <vector>
//#include <QUEUE>
//
//#include "tree_node.h"
//
//using namespace std;
//
//
//// Take input using recursion
//TreeNode<int> *takeInput() {
//    int rootData;
//
//    cout << "Enter root data:" << '\n';
//    cin >> rootData;
//
//    TreeNode<int> *root = new TreeNode<int>(rootData);
//
//    int n;
//    cout << "Enter no of children of " << "|" << rootData << "|" << '\n';
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        TreeNode<int> *child = takeInput();
//        root->children.push_back(child);
//    }
//
//    cout << endl;
//    return root;
//}
//
//
//void printTree(TreeNode<int> *root) {
//
//    // Base Case : When root node does not have a child
//    //[NOTE]: We do not need to write "Base Case" here as vector(for loop) handles it explicitely
//
//    //Edge Case
//    // [NOTE] : This case is never obtained during recursion
//    if (root == NULL) {
//        cout << "[NOTHING TO PRINT]" << endl;
//        return;
//    }
//    cout << root->data << ":";
//
//    for (int i = 0; i < root->children.size(); ++i) {
//        cout << root->children[i]->data << ",";
//    }
//    cout << endl;
//
//    // iterating over vector of children
//    for (int i = 0; i < root->children.size(); ++i) {
//        printTree(root->children[i]);
//    }
//}
//
//
//// Take input level wise (Using iteration)
//TreeNode<int> *takeInputLevelWise() {
//    int rootData;
//
//    cout << "Enter root data:" << '\n';
//    cin >> rootData;
//
//    TreeNode<int> *root = new TreeNode<int>(rootData);
//
//    // making use of QUEUE to take level wise input
//    QUEUE<TreeNode<int> *> pendingNodes;
//    pendingNodes.push(root);
//
//    while (!pendingNodes.empty()) {
//        TreeNode<int> *front = pendingNodes.front();
//        pendingNodes.pop();
//
//        cout << "Enter no of children of" << "|" << front->data << "|" << ":" << endl;
//        int numChild;
//        cin >> numChild;
//
//        for (int i = 0; i < numChild; ++i) {
//            int childData;
//            cout << "Enter " << i + 1 << "th child of " << front->data << ":" << endl;
//            cin >> childData;
//
//            TreeNode<int> *child = new TreeNode<int>(childData);
//            front->children.push_back(child);
//            pendingNodes.push(child);
//        }
//        cout << endl;
//    }
//
//    return root;
//}
//
//
//void printTreeLevelWise(TreeNode<int> *root) {
//    if (root == NULL) {
//        cout << "[NOTHING TO PRINT]" << endl;
//        return;
//    }
//
//    QUEUE<TreeNode<int> *> pendingNodes;
//    pendingNodes.push(root);
//
//    while (!pendingNodes.empty()) {
//        TreeNode<int> *front = pendingNodes.front();
//        pendingNodes.pop();
//
//        cout << front->data << ":";
//
//        for (int i = 0; i < front->children.size(); ++i) {
//            cout << front->children[i]->data << ",";
//            pendingNodes.push(front->children[i]);
//        }
//        cout << endl;
//    }
//}
//
//
//// function to count no of nodes
//int countNodes(TreeNode<int> *root) {
//    if (root == NULL) {
//        return 0;
//    }
//
//    int ans = 0;
//
//    for (int i = 0; i < root->children.size(); ++i) {
//        ans += countNodes(root->children[i]);
//    }
//
//    return ans + 1;
//}
//
////TODO
//// function to find height of tree
//int findHeight(TreeNode<int> *root) {
//    int height = 0;
//
//    // Edge case
//    if (root == NULL) {
//        return 0;
//    }
//
//    // Base case
//    if(root->children.empty()){
//        return 1;
//    }
//
//    for (int i = 0; i < root->children.size(); ++i) {
//        height+=max(height, findHeight(root->children[i]))+1;
//    }
//
//    return height;
//}
//
//
//// function to print all nodes at given level/depth k
//void printLevelKNodes(TreeNode<int> *root, int k) {
//
//    // Edge case
//    if (root == NULL) {
//        cout << "[NOTHING TO PRINT]" << endl;
//        return;
//    }
//
//    if (k == 0) {
//        cout << root->data << endl;
//        return;
//    }
//
//    for (int i = 0; i < root->children.size(); ++i) {
//        printLevelKNodes(root->children[i], k - 1);
//    }
//}
//
//
//
//// function to count leaf nodes
//int countLeafNodes(TreeNode<int> *root) {
//
//    int count = 0;
//
//    // Edge case
//    if (root == NULL) {
//        return 0;
//    }
//
//    // Base case
//    if (root->children.empty()) {
//        return 1;
//    }
//
//
//    for (int i = 0; i < root->children.size(); ++i) {
//        count += countLeafNodes(root->children[i]);
//    }
//
//    return count;
//
//}
//
//
//// Printing [PREORDER TRAVERSAL] of Tree [NODE-LEFT-RIGHT(NLR)]
//void preorder(TreeNode<int> *root) {
//
//    // Edge case
//    if (root == NULL) {
//        cout << "[NOTHING TO PRINT]" << endl;
//        return;
//    }
//
//    cout << root->data << " ";
//
//    for (int i = 0; i < root->children.size(); ++i) {
//        preorder(root->children[i]);
//    }
//}
//
//
//// Printing [POSTORDER TRAVERSAL] of Tree [LEFT-RIGHT-NODE(LRN)]
//void postorder(TreeNode<int> *root) {
//    for (int i = 0; i < root->children.size(); ++i) {
//        postorder(root->children[i]);
//    }
//
//    cout << root->data << " ";
//}
//
//
//// Function to delete tree
//// Using [POSTORDER TRAVERSAL] recursively
//// We need to delete children of a node first and then node
//// THIS CAN ALSO BE DONE USING DESTRUCTOR
//
//
//void deleteTree(TreeNode<int> *root) {
//    for (int i = 0; i < root->children.size(); ++i) {
//        deleteTree(root->children[i]);
//    }
//
//    delete root;
//}
//
//
//int main() {
//
////    // creating nodes
////    TreeNode<int>* root=new TreeNode<int>(1);
////    TreeNode<int>* node1=new TreeNode<int>(2);
////    TreeNode<int>* node2=new TreeNode<int>(3);
////
////    //creating links
////    root->children.push_back(node1);
////    root->children.push_back(node2);
//
//
//
//
////    TreeNode<int>* root=takeInput();
//    TreeNode<int> *root = takeInputLevelWise();
//    cout << endl;
//
//
//    int choice;
//
//
//    while (true) {
//        cout << "********************MENU********************" << endl;
//        cout << "1. To print tree"
//                "\n2. To print no of nodes in tree"
//                "\n3. To print height of tree "
//                "\n4. To print Level K nodes "
//                "\n5. To print leaf nodes "
//                "\n6. [PREORDER TRAVERSAL]... "
//                "\n7. [POSTORDER TRAVERSAL]... "
//                "\n8. [WARNING] To delete tree "
//                "\n9. To EXIT";
//        cout << "\n********************************************" << endl;
//        cout << "\nEnter Your choice:" << endl;
//        cin >> choice;
//        cout << endl;
//
//
//        switch (choice) {
//            case 1:
//                //printing Tree...
//                cout << "printing Tree..." << endl;
//                //    printTree(root);
//                printTreeLevelWise(root);
//                cout << endl;
//                break;
//            case 2:
//                // printing non of nodes count
//                cout << "No of nodes in Tree are:" << countNodes(root) << endl;
//                break;
//            case 3:
//                // height of tree
//                cout << "height of tree is:" << findHeight(root) << endl;
//                break;
//            case 4:
//                // print Level K nodes
//                int k;
//                cout << "Enter value of k:" << endl;
//                cin >> k;
//                cout << "level K nodes:" << endl;
//                printLevelKNodes(root, k);
//                cout << endl;
//                break;
//            case 5:
//                //count leaf nodes
//                cout << "No of leaf nodes are:" << countLeafNodes(root) << endl;
//                break;
//            case 6:
//                // Preorder Traversal
//                cout << "[PREORDER TRAVERSAL]..." << endl;
//                preorder(root);
//                cout << endl;
//                break;
//            case 7:
//                // Postorder Traversal
//                cout << "[POSTORDER TRAVERSAL]..." << endl;
//                postorder(root);
//                cout << endl;
//                break;
//            case 8:
//                // Deleting Tree
//                cout << "[DELETING TREE]..." << endl;
//                deleteTree(root);
//                cout << endl;
//            case 9:
//                cout << "[EXITING]..." << endl;
//                _Exit(0);
//                break;
//            default:
//                cout << "[ENTER A VALID CHOICE]..." << endl;
//                break;
//
//        }
//    }
//
//
//    return 0;
//
//}
//
///*
//OUTPUT:
//Enter root data:
//1
//Enter no of children of|1|:
//3
//Enter 1th child of 1:
//2
//Enter 2th child of 1:
//3
//Enter 3th child of 1:
//4
//
//Enter no of children of|2|:
//2
//Enter 1th child of 2:
//5
//Enter 2th child of 2:
//6
//
//Enter no of children of|3|:
//0
//
//Enter no of children of|4|:
//1
//Enter 1th child of 4:
//9
//
//Enter no of children of|5|:
//0
//
//Enter no of children of|6|:
//2
//Enter 1th child of 6:
//7
//Enter 2th child of 6:
//8
//
//Enter no of children of|9|:
//0
//
//Enter no of children of|7|:
//0
//
//Enter no of children of|8|:
//0
//
//
//********************MENU********************
//1. To print tree
//2. To print no of nodes in tree
//3. To print height of tree
//4. To print Level K nodes
//5. To print leaf nodes
//6. [PREORDER TRAVERSAL]...
//7. [POSTORDER TRAVERSAL]...
//8. [WARNING] To delete tree
//9. To EXIT********************************************
//
//Enter Your choice:
//0
//
//[ENTER A VALID CHOICE]...
//********************MENU********************
//1. To print tree
//2. To print no of nodes in tree
//3. To print height of tree
//4. To print Level K nodes
//5. To print leaf nodes
//6. [PREORDER TRAVERSAL]...
//7. [POSTORDER TRAVERSAL]...
//8. [WARNING] To delete tree
//9. To EXIT********************************************
//
//Enter Your choice:
//1
//
//printing Tree...
//1:2,3,4,
//2:5,6,
//3:
//4:9,
//5:
//6:7,8,
//9:
//7:
//8:
//
//********************MENU********************
//1. To print tree
//2. To print no of nodes in tree
//3. To print height of tree
//4. To print Level K nodes
//5. To print leaf nodes
//6. [PREORDER TRAVERSAL]...
//7. [POSTORDER TRAVERSAL]...
//8. [WARNING] To delete tree
//9. To EXIT********************************************
//
//Enter Your choice:
//2
//
//No of nodes in Tree are:9
//********************MENU********************
//1. To print tree
//2. To print no of nodes in tree
//3. To print height of tree
//4. To print Level K nodes
//5. To print leaf nodes
//6. [PREORDER TRAVERSAL]...
//7. [POSTORDER TRAVERSAL]...
//8. [WARNING] To delete tree
//9. To EXIT********************************************
//
//Enter Your choice:
//3
//
//height of tree is:6
//********************MENU********************
//1. To print tree
//2. To print no of nodes in tree
//3. To print height of tree
//4. To print Level K nodes
//5. To print leaf nodes
//6. [PREORDER TRAVERSAL]...
//7. [POSTORDER TRAVERSAL]...
//8. [WARNING] To delete tree
//9. To EXIT********************************************
//
//Enter Your choice:
//4
//
//Enter value of k:
//2
//level K nodes:
//5
//6
//9
//
//********************MENU********************
//1. To print tree
//2. To print no of nodes in tree
//3. To print height of tree
//4. To print Level K nodes
//5. To print leaf nodes
//6. [PREORDER TRAVERSAL]...
//7. [POSTORDER TRAVERSAL]...
//8. [WARNING] To delete tree
//9. To EXIT********************************************
//
//Enter Your choice:
//5
//
//No of leaf nodes are:8
//********************MENU********************
//1. To print tree
//2. To print no of nodes in tree
//3. To print height of tree
//4. To print Level K nodes
//5. To print leaf nodes
//6. [PREORDER TRAVERSAL]...
//7. [POSTORDER TRAVERSAL]...
//8. [WARNING] To delete tree
//9. To EXIT********************************************
//
//Enter Your choice:
//6
//
//[PREORDER TRAVERSAL]...
//1 2 5 6 7 8 3 4 9
//********************MENU********************
//1. To print tree
//2. To print no of nodes in tree
//3. To print height of tree
//4. To print Level K nodes
//5. To print leaf nodes
//6. [PREORDER TRAVERSAL]...
//7. [POSTORDER TRAVERSAL]...
//8. [WARNING] To delete tree
//9. To EXIT********************************************
//
//Enter Your choice:
//7
//
//[POSTORDER TRAVERSAL]...
//5 7 8 6 2 3 9 4 1
//********************MENU********************
//1. To print tree
//2. To print no of nodes in tree
//3. To print height of tree
//4. To print Level K nodes
//5. To print leaf nodes
//6. [PREORDER TRAVERSAL]...
//7. [POSTORDER TRAVERSAL]...
//8. [WARNING] To delete tree
//9. To EXIT********************************************
//
//Enter Your choice:
//8
//
//[DELETING TREE]...
// */