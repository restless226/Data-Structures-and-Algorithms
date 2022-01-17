//
// Created by rapen on 18-04-2021.
//
#ifndef UNTITLED_HEAP_H
#define UNTITLED_HEAP_H

class MinHeap {
public:
    int *harr;  // pointer to array of elements in heap
    int capacity;       // max possible size of min heap
    int heap_size;      // current size(no of elements) in min heap
    MinHeap(int capacity) {
        this->capacity = capacity;
        heap_size = 0;
        harr = new int[capacity];
    }

    int getMin();   // get min value in heap (root node in this case)

    int extractMin();    // gets and removes min value (root node in this case)

    void insertKey(int key);     // Inserts new key/node

    void decreaseKey(int index);

    void deleteKey(int index);    // Deletes given key/node

    void minHeapify(int i);

    int linearSearch(int val);    // to search an element in heap(array)

    void printHeap();

    int heapHeight();

    int getParentIndex(int i);

    void heapSort();

    void heapifyForHeapSort(int size, int index);
};

#endif //UNTITLED_HEAP_H
