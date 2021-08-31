//#include <cmath>
//#include "iostream"
//
//using namespace std;
//
//#include "heap.h"
//
//int MinHeap::linearSearch(int val) {
//
//    for (int i = 0; i < heap_size; ++i) {
//        if (heap_arr_ptr[i] == val) {
//            cout << "VALUE FOUND AT INDEX:";
//            return i;
//        }
//    }
//    cout << "VALUE NOT FOUND" << endl;
//    cout << endl;
//    return INT_MIN;
//}
//
//
//void MinHeap::printHeap() {
//    cout << "[PRINTING HEAP ELEMENTS]..." << endl;
//    for (int i = 0; i < heap_size; ++i) {
//        cout << heap_arr_ptr[i] << " ";
//    }
//    cout << endl;
//}
//
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
//
//    heap_size++;
//
//    int i = heap_size - 1;
//
//    heap_arr_ptr[i] = key;
//
//    while (i != 0 && heap_arr_ptr[getParentIndex(i)] > heap_arr_ptr[i]) {
//        swap(heap_arr_ptr[getParentIndex(i)], heap_arr_ptr[i]);
//        i = getParentIndex(i);
//    }
//
//    cout << "Value inserted successfully :)";
//
//
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
//
//    return heap_arr_ptr[0];
//
//}
//
//
//void MinHeap::minHeapify(int i) {
////    while (i<heap_size-1){
////        if(heap_arr_ptr[i]>heap_arr_ptr[i+1]){
////            swap(heap_arr_ptr[i],heap_arr_ptr[i+1]);
////        }
////    }
//
//
//    int smallest = i;
//
//    if ((2 * i + 1) < heap_size && heap_arr_ptr[2 * i + 1] < heap_arr_ptr[i]) {
//        smallest = 2 * i + 1;
//    }
//
//    if ((2 * i + 2) < heap_size && heap_arr_ptr[2 * i + 2] < heap_arr_ptr[smallest]) {
//        smallest = 2 * i + 2;
//    }
//
//    if (smallest != i) {
//        swap(heap_arr_ptr[i], heap_arr_ptr[smallest]);
//        minHeapify(smallest);
//    }
//
//
//}
//
//
//int MinHeap::extractMin() {
//    if (heap_size == 0) {
//        cout << "Heap is empty Nothing to extract... :( Pls insert values" << endl;
//        return -1;
//    }
//
//    if (heap_size == 1) {
//        heap_size--;
//        return heap_arr_ptr[0];
//    }
//
//    int rootData = heap_arr_ptr[0];
//    heap_arr_ptr[0] = heap_arr_ptr[heap_size - 1];
//    heap_size--;
//    minHeapify(0);
//
//    return rootData;
//}
//
//
//// this function will reduce given key value to INT_MIN
//// and it will bring it at place of root node
//// and then we can remove it
//void MinHeap::decreaseKey(int index) {
//    heap_arr_ptr[index] = INT_MIN;
//
//    while (index != 0 && heap_arr_ptr[(index - 1) / 2]) {
//        swap(heap_arr_ptr[index], heap_arr_ptr[(index - 1) / 2]);
//        index = (index - 1) / 2;
//    }
//}
//
//
//void MinHeap::deleteKey(int index) {
//    if (index >= heap_size) {
//        return;
//    }
//
//    decreaseKey(index);
//    extractMin();
//
//    cout << "Value deleted successfully :)";
//}
//
//
//void MinHeap::heapifyForHeapSort(int size, int i) {
//    int largest = i;
//
//    if ((2 * i + 1) < size && heap_arr_ptr[2 * i + 1] > heap_arr_ptr[largest]) {
//        largest = 2 * i + 1;
//    }
//
//    if ((2 * i + 2) < size && heap_arr_ptr[2 * i + 2] > heap_arr_ptr[largest]) {
//        largest = 2 * i + 2;
//    }
//
//    if (largest != i) {
//        swap(heap_arr_ptr[i], heap_arr_ptr[largest]);
//        heapifyForHeapSort(size, largest);
//    }
//
//}
//
//
//// O(logn) - Time Complexity
//void MinHeap::heapSort() {
//    for (int i = (heap_size / 2) - 1; i >= 0; i--) {
//        heapifyForHeapSort(heap_size, i);
//    }
//
//    for (int i = heap_size - 1; i > 0; i--) {
//        swap(heap_arr_ptr[0], heap_arr_ptr[i]);
//        heapifyForHeapSort(i, 0);
//    }
//}