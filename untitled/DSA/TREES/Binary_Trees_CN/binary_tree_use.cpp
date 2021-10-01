//#include <iostream>
//#include <QUEUE>
//
//using namespace std;
//
//#include "binary_tree_node.h"
//
//BinaryTreeNode<int> *takeInput() {
//    int rootData;
//
//    cout << "Enter root data:" << '\n';
//    cin >> rootData;
//
//    // [NOTE]: If root does not have left or right child, we are assigning rootData as -1
//    // (MANDATORY)
//    if (rootData == -1) {
//        return NULL;
//    }
//
//    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
//    BinaryTreeNode<int> *leftChild = takeInput();
//    BinaryTreeNode<int> *rightChild = takeInput();
//
//    root->left = leftChild;
//    root->right = rightChild;
//
//    return root;
//}
//
//
//BinaryTreeNode<int> *takeInputLevelWise() {
//    int rootData;
//
//    cout << "Enter root data:" << '\n';
//    cin >> rootData;
//
//    // [NOTE]: If root does not have left or right child, we are assigning rootData as -1
//    // (OPTIONAL)
//    if (rootData == -1) {
//        return NULL;
//    }
//
//    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
//
//
//    // this QUEUE will contain only those nodes,
//    // whose node data we have taken input, but we do not have taken their children input as of now
//    QUEUE<BinaryTreeNode<int> *> pendingNodes;
//    pendingNodes.push(root);
//
//    while (!pendingNodes.empty()) {
//        BinaryTreeNode<int> *front = pendingNodes.front();
//        pendingNodes.pop();
//
//
//        // [LEFT CHILD]
//        cout << "Enter left child of " << "|" << front->data << "|" << ":" << '\n';
//        cout << "[TO ASSIGN LEFT CHILD AS NULL ENTER INPUT AS -1]" << '\n';
//
//        int leftChildData;
//        cin >> leftChildData;
//
//        if (leftChildData != -1) {
//            BinaryTreeNode<int> *leftChild = new BinaryTreeNode<int>(leftChildData);
//            front->left = leftChild;
//            pendingNodes.push(leftChild);
//        }
//
//
//
//        // [RIGHT CHILD]
//        cout << "Enter right child of " << "|" << front->data << "|" << ":" << '\n';
//        cout << "[TO ASSIGN RIGHT CHILD AS NULL ENTER INPUT AS -1]" << '\n';
//
//        int rightChildData;
//        cin >> rightChildData;
//
//        if (rightChildData != -1) {
//            BinaryTreeNode<int> *rightChild = new BinaryTreeNode<int>(rightChildData);
//            front->right = rightChild;
//            pendingNodes.push(rightChild);
//        }
//
//        cout << endl;
//
//    }
//
//
//    return root;
//}
//
//
//void printBinaryTreeLevelWise(BinaryTreeNode<int> *root) {
//    // Base case
//    if (root == NULL) {
//        cout << "[NOTHING TO PRINT :(]" << '\n';
//        return;
//    }
//
//    QUEUE<BinaryTreeNode<int> *> pendingNodes;
//    pendingNodes.push(root);
//
//    while (!pendingNodes.empty()) {
//
//        BinaryTreeNode<int> *front = pendingNodes.front();
//
//        cout << front->data << ": ";
//
//        pendingNodes.pop();
//
//        if (front->left != NULL) {
//            cout << "L" << front->left->data << " ";
//            pendingNodes.push(front->left);
//        }
//
//        if (front->right != NULL) {
//            cout << "R" << front->right->data << " ";
//            pendingNodes.push(front->right);
//        }
//
//        cout << endl;
//    }
//}
//
//
//// function to take level wise input
//void printBinaryTree(BinaryTreeNode<int> *root) {
//
//
//    // Base case
//    if (root == NULL) {
//        return;
//    }
//
//
//    // small calculation
//    cout << root->data << ": ";
//
//    if (root->left != NULL) {
//        cout << "L" << root->left->data << " ";
//    }
//
//    if (root->right != NULL) {
//        cout << "R" << root->right->data << " ";
//    }
//
//    cout << endl;
//
//
//    // recursive case
//    printBinaryTree(root->left);
//    printBinaryTree(root->right);
//
//}
//
//int countNodes(BinaryTreeNode<int> *root) {
//    int count = 0;
//
//    if (root == NULL) {
//        return 0;
//    }
//    return 1 + countNodes(root->left) + countNodes(root->right);
//
////    if(root->left!=NULL){
////        count+=countNodes(root->left);
////    }
////
////    if(root->right!=NULL){
////        count+=countNodes(root->right);
////    }
////
////    return count+1;
//}
//
//
//// [INORDER TRAVERSAL]
//void inorder(BinaryTreeNode<int> *root) {
//    if (root == NULL) {
//        cout << "[NOTHING TO PRINT :(]" << '\n';
//        return;
//    }
//
//    if (root->left != NULL) {
//        inorder(root->left);
//    }
//
//    cout << root->data << " ";
//
//    if (root->right != NULL) {
//        inorder(root->right);
//    }
//
//
//}
//
//
//// [PREORDER TRAVERSAL]
//void preorder(BinaryTreeNode<int> *root) {
//    if (root == NULL) {
//        cout << "[NOTHING TO PRINT :(]" << '\n';
//        return;
//    }
//
//    cout << root->data << " ";
//
//    if (root->left != NULL) {
//        preorder(root->left);
//    }
//
//    if (root->right != NULL) {
//        preorder(root->right);
//    }
//
//}
//
//
//// [POSTORDER TRAVERSAL]
//void postorder(BinaryTreeNode<int> *root) {
//    if (root == NULL) {
//        cout << "[NOTHING TO PRINT :(]" << '\n';
//        return;
//    }
//
//    if (root->left != NULL) {
//        postorder(root->left);
//    }
//
//    if (root->right != NULL) {
//        postorder(root->right);
//    }
//
//    cout << root->data << " ";
//}
//
//
///*
// * PROBLEM STATEMENT:
// * Given inorder and postorder traversals of a tree(HAVING UNIQUE NODES) in array from,
// * also inorder start, inorder end, preorder start, preorder end
// * construct tree and print it
// */
//
//
//
//BinaryTreeNode<int> *buildTreeHelper
//        (int *inorder_arr, int *preorder_arr,
//         int inorder_start, int inorder_end,
//         int preorder_start, int preorder_end) {
//
//    // Base case (Empty array)
//    // [CHECKING ONLY PREORDER IS ENOUGH AS INORDER AND PREORDER HAVE SAME SIZES]
//    if (inorder_start > inorder_end) {
//        return NULL;
//    }
//
//    // [PREORDER] - NLR, [INORDER] - LNR
//
//    // FROM PREORDER (pre)
//    int rootData = preorder_arr[preorder_start];
//
//    int rootIndex = -1;
//
//    for (int i = inorder_start; i <= inorder_end; i++) {
//        if (inorder_arr[i] == rootData) {
//            rootIndex = i;
//            break;
//        }
//    }
//
//
//    // INDEXES TO BE FOUND
//    int lPreS = preorder_start + 1;
//
//    int lInS = inorder_start;
//    int lInE = rootIndex - 1;
//
//    int rPreE = preorder_end;
//
//    int rInS = rootIndex + 1;
//    int rInE = inorder_end;
//
//    int lPreE = lInE - lInS + lPreS;
//    int rPreS = lPreE + 1;
//
//
//    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
//
//    root->left = buildTreeHelper(inorder_arr, preorder_arr, lInS, lInE, lPreS, lPreE);
//    root->right = buildTreeHelper(inorder_arr, preorder_arr, rInS, rInE, rPreS, rPreE);
//
//    return root;
//}
//
//BinaryTreeNode<int> *buildTree(int *in, int *pre, int size) {
//    return buildTreeHelper(in, pre, 0, size - 1, 0, size - 1);
//}
//
//
//// function to find height of binary tree
//int height(BinaryTreeNode<int> *root) {
//    if (root == NULL) {
//        return 0;
//    }
//
//    return 1 + max(height(root->left), height(root->right));
//}
//
//
//// 'NOOB APPROACH :('
//// Function to find 'DIAMETER OF BINARY TREE'
//// Diameter - number of nodes on the longest path between leaf end nodes.
//int diameter(BinaryTreeNode<int> *root) {
//    // Base case
//    if (root == NULL) {
//        return 0;
//    }
//
//    int option1 = height(root->left) + height(root->right);
//    int option2 = diameter(root->left);
//    int option3 = diameter(root->right);
//
//    return max(option1, max(option2, option3));
//
//}
//
//// 'PRO APPROACH :)'
//// Function to find 'DIAMETER' and 'HEIGHT' of BINARY TREE together
//pair<int, int> heightDiameter(BinaryTreeNode<int> *root) {
//    // Base case
//    if (root == NULL) {
//        pair<int, int> p;
//        p.first = 0;
//        p.second = 0;
//
//        return p;
//    }
//
//    // [NOTE]: pair<height, diameter> form
//
//    pair<int, int> leftAns = heightDiameter(root->left);
//    pair<int, int> rightAns = heightDiameter(root->right);
//
//    int leftDiameter = leftAns.second;
//    int leftHeight = leftAns.first;
//
//    int rightDiameter = rightAns.second;
//    int rightHeight = rightAns.first;
//
//    int HEIGHT = 1 + max(leftHeight, rightHeight);
//    int DIAMETER = max(leftHeight + rightHeight, max(leftDiameter, rightDiameter));
//
//    pair<int, int> ans;
//    ans.first = HEIGHT;
//    ans.second = DIAMETER;
//    return ans;
//
//}
//
//
//void mirrorBinaryTree(BinaryTreeNode<int> *root) {
//
//    // Base case
//    if (root == NULL) {
//        return;
//    }
//
//
//    BinaryTreeNode<int> *temp;
//
//    // do the subtrees
//    mirrorBinaryTree(root->left);
//    mirrorBinaryTree(root->right);
//
//    // swap the pointers in this node
//    temp = root->left;
//    root->left = root->right;
//    root->right = temp;
//
//}
//
//
//void printBetweenK1K2(BinaryTreeNode<int> *root,int k1, int k2){
//    if(root->data>=k1 && root->data<=k2){
//        cout<<root->data<<" ";
//    }
//
//    if(root->data>k1) {
//        printBetweenK1K2(root->left, k1, k2);
//    }
//
//    if(root->data<=k2) {
//        printBetweenK1K2(root->right, k1, k2);
//    }
//
//}
//
//
//// 'NOOB APPROACH :('
//int minimum(BinaryTreeNode<int> *root){
//    // [NOTE:] - smallest no in a null set is +ve infinity i.e. INT_MAX
//    // Base case
//    if (root==NULL){
//        return INT_MAX;
//    }
//
//    return min(root->data,min(minimum(root->left),minimum(root->right)));
//}
//
//// 'NOOB APPROACH :('
//int maximum(BinaryTreeNode<int> *root){
//    // [NOTE:] - biggest no in a null set is +ve infinity i.e. INT_MIN
//    // Base case
//    if (root==NULL){
//        return INT_MIN;
//    }
//
//    return max(root->data,max(maximum(root->left),maximum(root->right)));
//}
//
//
//// O(nlogn) - time complexity
//// 'NOOB APPROACH :('
//// function to check whether given Binary Tree is BST or not
//bool isBST(BinaryTreeNode<int> *root){
//
//    // Base Case
//    if(root==NULL){
//        return true;
//    }
//
//    int leftMax= maximum(root->left);
//    int rightMin=minimum(root->right);
//
//    bool output=(root->data>leftMax)
//                && (root->data<=rightMin)
//                && isBST(root->left)
//                && isBST(root->right);
//
//
//    return output;
//}
//
//
//
//// O(n) - time complexity
//// PRO APPROACH :)
//// BOTTOM TO TOP APPROACH
//class Is_BST_Return{    // Working as a 'TRIPLET'
//public:
//    bool IsBST;
//    int minimum;
//    int maximum;
//};
//
//// function to check whether given Binary Tree is BST or not
//Is_BST_Return isBSTPro(BinaryTreeNode<int> *root){
//    // Base Case
//    if(root==NULL){
//        Is_BST_Return output;
//
//        output.IsBST= false;
//        output.minimum=INT_MAX;
//        output.maximum=INT_MIN;
//
//        return output;
//    }
//
//    Is_BST_Return leftOutput=isBSTPro(root->left);
//    Is_BST_Return rightOutput=isBSTPro(root->right);
//
//    int overall_min=min(root->data,min(leftOutput.minimum,rightOutput.minimum));
//    int overall_max=max(root->data,max(leftOutput.maximum,rightOutput.maximum));
//
//    bool isBSTFinal=leftOutput.IsBST
//                        && rightOutput.IsBST
//                        && root->data<leftOutput.maximum
//                        && root->data>=rightOutput.minimum;
//
//
//    Is_BST_Return overall_output;
//    overall_output.minimum=overall_min;
//    overall_output.maximum=overall_max;
//    overall_output.IsBST=isBSTFinal;
//
//    return overall_output;
//
//}
//
//
//
//// O(n) - time complexity
//// ALTERNATIVE APPROACH :)
//// TOP TO BOTTOM APPROACH
//// function to check whether given Binary Tree is BST or not
//
//bool isBST_alter(BinaryTreeNode<int> *root,int min=INT_MAX, int max=INT_MIN){
//
//    // Base case
//    if (root == NULL) {
//        return true;
//    }
//
//    // small calculation
//    if(root->data<min || root->data>=max){
//        return false;
//    }
//
//    bool isLeftOk=isBST_alter(root->left,min,root->data-1);
//    bool isRightOk=isBST_alter(root->right,root->data,max);
//
//    return isLeftOk && isRightOk;
//}
//
//
////TODO
//vector<int>* getRootToNodePath(BinaryTreeNode<int> *root,int nodeData){
//    // Base case
//    if(root==NULL){
//        return NULL;
//    }
//
//    // small calculation
//    if(root->data==nodeData){
//        vector<int>* output=new vector<int>();
//        output->push_back(root->data);
//        return output;
//    }
//
//    // recursive case
//    vector<int>* leftOutput=getRootToNodePath(root->left,nodeData);
//    if(!leftOutput->empty()){
//        leftOutput->push_back(root->data);
//        return leftOutput;
//    }
//
//
//    vector<int>* rightOutput=getRootToNodePath(root->right,nodeData);
//    if(!rightOutput->empty()){
//        rightOutput->push_back(root->data);
//        return rightOutput;
//    }
//
//    return NULL;
//}
//
//
//int main() {
//
////    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(1);
////    BinaryTreeNode<int>* node1=new BinaryTreeNode<int>(2);
////    BinaryTreeNode<int>* node2=new BinaryTreeNode<int>(3);
//
////    root->left=node1;
////    root->right=node2;
//
//
//    BinaryTreeNode<int> *root;
//
//    cout << "[TAKING LEVEL WISE INPUT OF BINARY TREE NODES LEVEL WISE]" << '\n';
//    root = takeInputLevelWise();
//    cout << '\n';
//
//
//    int choice;
//
//
//
////    while (choice != 3) {
////
////        cout << "ENTER YOUR CHOICE FOR INPUT:" << '\n';
////        cout << "ENTER: "
////                "\n1 TO TAKE LEVEL WISE INPUT "
////                "\n2 TO CONSTRUCT TREE FROM GIVEN INORDER AND POSTORDER TRAVERSAL "
////                "\n3 TO PROCEED FOR FURTHER FUNCTIONS" << '\n';
////        cin >> choice;
////
////        switch (choice) {
////            case 1: {
////
////            }
////            case 2: {
////                cout << "[CONSTRUCTING TREE FROM GIVEN INORDER AND POSTORDER TRAVERSAL]..." << endl;
////                int in[] = {4, 2, 5, 1, 8, 6, 9, 3, 7};
////                int pre[] = {1, 2, 4, 5, 3, 6, 8, 9, 7};
////
////                root = buildTree(in, pre, 9);
////                cout << '\n' << '\n';
////                break;
////            }
////            case 3: {
////                cout << "PROCEEDING FURTHER..." << endl;
////                break;
////            }
////            case 4: {
////                cout << "[ENTER A VALID CHOICE]..." << endl;
////                break;
////            }
////        }
////    }
//
//
//    while (choice) {
//        cout << "********************MENU********************" << endl;
//        cout << "1. To print binary tree level wise"
//                "\n2. To print no of nodes in tree"
//                "\n3. [INORDER TRAVERSAL]... "
//                "\n4. [PREORDER TRAVERSAL]... "
//                "\n5. [POSTORDER TRAVERSAL]... "
//                "\n6. [TO PRINT HEIGHT AND DIAMETER OF BINARY TREE]... "
//                "\n7. [TO PRINT MIRROR IMAGE OF BINARY TREE] "
//                "\n8. [TO CHECK WHETHER GIVEN BINARY TREE IS BST OR NOT]..."
//                "\n9. [GET PATH FROM ROOT TO GIVEN NODE]..."
//                "\n10. [WARNING] To delete tree "
//                "\n11. TO EXIT";
//        cout << "\n********************************************" << endl;
//        cout << "\nEnter Your choice:" << endl;
//        cin >> choice;
//        cout << endl;
//
//
//        switch (choice) {
//            case 1: {
//                cout << "[PRINTING BINARY TREE LEVEL WISE...]" << '\n';
//                printBinaryTreeLevelWise(root);
//                cout << '\n';
//                break;
//            }
//            case 2: {
//                cout << "[COUNTING NO OF NODES IN BINARY TREE...]" << '\n';
//                cout << "COUNT=" << countNodes(root) << '\n';
//                cout << '\n';
//                break;
//            }
//
//            case 3: {
//                cout << "[INORDER TRAVERSAL...]" << endl;
//                inorder(root);
//                cout << '\n' << '\n';
//                break;
//            }
//            case 4: {
//                cout << "[PREORDER TRAVERSAL...]" << endl;
//                preorder(root);
//                cout << '\n' << '\n';
//                break;
//            }
//            case 5: {
//                cout << "[POSTORDER TRAVERSAL...]" << endl;
//                postorder(root);
//                cout << '\n' << '\n';
//                break;
//            }
//            case 6: {
//                pair<int, int> p = heightDiameter(root);
//                cout << "[HEIGHT OF BINARY TREE IS]..." << '\n';
//                cout << "Height=" << p.first << '\n';
//                cout << '\n';
//
//                cout << "[DIAMETER OF BINARY TREE IS]..." << '\n';
//                cout << "Diameter=" << p.second << '\n';
//                cout << '\n';
//                break;
//            }
//            case 7: {
//                mirrorBinaryTree(root);
//                cout << "[MIRROR IMAGE OF BINARY TREE IS]..." << '\n';
//                printBinaryTreeLevelWise(root);
//                cout << '\n';
//                mirrorBinaryTree(root);
//                break;
//            }
//            case 8:{
//                cout<<"[CHECKING WHETHER GIVEN BINARY TREE IS BST OR NOT]..."<<endl;
//
//                if(isBSTPro(root).IsBST){
//                    cout<<"BST :)"<<endl;
//                }else{
//                    cout<<"NOT A BST :("<<endl;
//                }
//                cout << '\n';
//
//                if(isBST_alter(root)){
//                    cout<<"BST :)"<<endl;
//                }else{
//                    cout<<"NOT A BST :("<<endl;
//                }
//                cout << '\n';
//                break;
//            }
//            case 9:{
////                int data;
////                cout<<"ENTER NODE DATA:"<<endl;
////                cin>>data;
////                vector<int>* res=getRootToNodePath(root,data);
////
////                cout<<"ROOT TO NODE PATH IS..."<<endl;
////                if(res->empty()){
////                    cout<<"NODE NOT FOUND :(  TRY AGAIN...";
////                }else{
////                    for (auto itr:*res) {
////                        cout<<itr<<"->";
////                    }
////                }
////
////                // As vector was created dynamically in the function, we are deleting it here after the job is done
////                delete res;
////
////                cout << '\n';
//                break;
//
//            }
//            case 10: {
//                cout << "[DELETING BINARY TREE LEVEL WISE USING DESTRUCTOR...]" << '\n';
//                delete root;
//                break;
//            }
//            case 11: {
//                cout << "[EXITING]..." << endl;
//                _Exit(0);
//            }
//            default: {
//                cout << "[ENTER A VALID CHOICE]..." << endl;
//                break;
//            }
//        }
//    }
//
//
//}
//
//
