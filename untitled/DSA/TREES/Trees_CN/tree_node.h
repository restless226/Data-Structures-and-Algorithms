#include <iostream>
#include <vector>

using namespace std;

template<typename T>

class TreeNode {

public:
    T data;
    vector<TreeNode *> children; // by-default 'T' data type is assumed
    //vector<TreeNode<T>*> children;

    TreeNode(T data) {
        this->data = data;
    }

    // Deletes a TreeNode object
    // In turn deletes whole tree (all nodes)
    // USING RECURSION HERE...
    ~TreeNode() {
        for (int i = 0; i < children.size(); ++i) {
            delete (children[i]);
        }

    }
};

