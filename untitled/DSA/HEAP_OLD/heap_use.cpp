//#include <cmath>
//#include "iostream"
//#include "heap.h"
//
//using namespace std;
//
//int MinHeap::linearSearch(int val) {
//    for (int i = 0; i < heap_size; ++i) {
//        if (harr[i] == val) {
//            cout << "VALUE FOUND AT INDEX:";
//            return i;
//        }
//    }
//    cout << "VALUE NOT FOUND" << endl;
//    cout << endl;
//    return INT_MIN;
//}
//
//void MinHeap::printHeap() {
//    cout << "[PRINTING HEAP ELEMENTS]..." << endl;
//    for (int i = 0; i < heap_size; ++i) {
//        cout << harr[i] << " ";
//    }
//    cout << endl;
//}
//
//int MinHeap::heapHeight() {
//    return ceil(log2(heap_size + 1) - 1);
//}
//
//int MinHeap::getParentIndex(int i) {
//    return (i - 1) / 2;
//}
//
//void MinHeap::insertKey(int key) {
//    if (heap_size == capacity) {
//        cout << "Size Overflow... Heap is Full";
//        return;
//    }
//    heap_size++;
//    int i = heap_size - 1;
//    harr[i] = key;
//    while (i != 0 && harr[getParentIndex(i)] > harr[i]) {
//        swap(harr[getParentIndex(i)], harr[i]);
//        i = getParentIndex(i);
//    }
//    cout << "Value inserted successfully :)";
//    // ALTERNATIVE WAY
////    if(heap_size==capacity){
////        return;
////    }
////    else{
////        heap_size++;
////        decreaseKey(heap_size-1,key);
//}
//
//int MinHeap::getMin() {
//    if (heap_size == 0) {
//        cout << "Heap is empty... :( Pls insert values" << endl;
//        return -1;
//    }
//    return harr[0];
//}
//
//void MinHeap::minHeapify(int i) {
//    int smallest = i;
//    if ((2 * i + 1) < heap_size && harr[2 * i + 1] < harr[i]) {
//        smallest = 2 * i + 1;
//    }
//    if ((2 * i + 2) < heap_size && harr[2 * i + 2] < harr[smallest]) {
//        smallest = 2 * i + 2;
//    }
//    if (smallest != i) {
//        swap(harr[i], harr[smallest]);
//        minHeapify(smallest);
//    }
//}
//
//int MinHeap::extractMin() {
//    if (heap_size == 0) {
//        cout << "Heap is empty Nothing to extract... :( Pls insert values" << endl;
//        return -1;
//    }
//    if (heap_size == 1) {
//        heap_size--;
//        return harr[0];
//    }
//    int rootData = harr[0];
//    harr[0] = harr[heap_size - 1];
//    heap_size--;
//    minHeapify(0);
//    return rootData;
//}
//
//// this function will reduce given key value to INT_MIN
//// and it will bring it at place of root node
//// and then we can remove it
//void MinHeap::decreaseKey(int index) {
//    harr[index] = INT_MIN;
//    while (index != 0 && harr[(index - 1) / 2]) {
//        swap(harr[index], harr[(index - 1) / 2]);
//        index = (index - 1) / 2;
//    }
//}
//
//void MinHeap::deleteKey(int index) {
//    if (index >= heap_size) {
//        return;
//    }
//    decreaseKey(index);
//    extractMin();
//    cout << "Value deleted successfully :)";
//}
//
//void MinHeap::heapifyForHeapSort(int size, int i) {
//    int largest = i;
//    if ((2 * i + 1) < size && harr[2 * i + 1] > harr[largest]) {
//        largest = 2 * i + 1;
//    }
//    if ((2 * i + 2) < size && harr[2 * i + 2] > harr[largest]) {
//        largest = 2 * i + 2;
//    }
//    if (largest != i) {
//        swap(harr[i], harr[largest]);
//        heapifyForHeapSort(size, largest);
//    }
//}
//
//// O(logn) - Time Complexity
//void MinHeap::heapSort() {
//    for (int i = (heap_size / 2) - 1; i >= 0; i--) {
//        heapifyForHeapSort(heap_size, i);
//    }
//    for (int i = heap_size - 1; i > 0; i--) {
//        swap(harr[0], harr[i]);
//        heapifyForHeapSort(i, 0);
//    }
//}