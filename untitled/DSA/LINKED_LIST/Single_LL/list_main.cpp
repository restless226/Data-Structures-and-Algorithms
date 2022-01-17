#include "List.h"
#include <iostream>
#include <cstdlib>

int main() {

    LINKED_LIST obj;

    obj.addNode(6);
    obj.addNode(11);
    obj.addNode(24);
    obj.addNode(9);

    obj.printList();

    obj.deleteNode(5);

    obj.deleteNode(11);
    obj.printList();

    // deleting last node
    obj.deleteNode(9);
    obj.printList();

    // deleting head node
    obj.deleteNode(6);
    obj.printList();

    return 0;
}