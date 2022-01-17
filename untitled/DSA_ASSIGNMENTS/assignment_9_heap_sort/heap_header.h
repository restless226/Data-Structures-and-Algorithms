#ifndef HEAPSORT_H_INCLUDED
#define HEAPSORT_H_INCLUDED

class HeapSort {

public:
    void createMaxHeap(int arr[], int n);

    void createMinHeap(int arr[], int n);

    void MaxHeapify(int arr[], int n, int i);

    void MinHeapify(int arr[], int n, int i);

    void MaxHeapSort(int arr[], int n);

    void MinHeapSort(int arr[], int n);

    void PrintHeap(int arr[], int n);

};

#endif // HEAPSORT_H_INCLUDED
