//
// Created by rapen on 18-04-2021.
//

#ifndef UNTITLED_TBT_H
#define UNTITLED_TBT_H

class TBTNode {
public:
    int data;
    TBTNode *left;
    TBTNode *right;
    int leftBit;    // value is either 0 or 1
    int rightBit;   // value is either 0 or 1


    TBTNode() {
        left = nullptr;
        right = nullptr;
        leftBit = 0;
        rightBit = 0;

    }

    TBTNode(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
        leftBit = 0;
        rightBit = 0;
    }
};

class TBT {
public:
    TBTNode *headNode;  // dummy node
    TBTNode *rootNode = nullptr;

    void create_root();
};


#endif //UNTITLED_TBT_H
