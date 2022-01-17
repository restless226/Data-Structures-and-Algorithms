#include<iostream>
#include "heap_header.h"

using namespace std;

void HeapSort::createMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        MaxHeapify(arr, n, i);
    }
}

void HeapSort::MaxHeapify(int arr[], int n, int i) {
    int largest = i;
    int leftchild = 2 * i + 1;
    int rightchild = 2 * i + 2;
    if (leftchild < n && arr[leftchild] > arr[largest]) {
        largest = leftchild;
    }
    if (rightchild < n && arr[rightchild] > arr[largest]) {
        largest = rightchild;
    }

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        MaxHeapify(arr, n, largest);
    }

}

void HeapSort::MaxHeapSort(int arr[], int n) {
    createMaxHeap(arr, n);
    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[0];
        cout << "Deleted Element: " << temp << endl;
        arr[0] = arr[i];
        arr[i] = temp;
        MaxHeapify(arr, i, 0);
        PrintHeap(arr, i);
    }
}

void HeapSort::createMinHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        MinHeapify(arr, n, i);
    }
}

void HeapSort::MinHeapify(int arr[], int n, int i) {
    int smallest = i;
    int leftchild = 2 * i + 1;
    int rightchild = 2 * i + 2;

    if (leftchild < n && arr[leftchild] < arr[smallest]) {
        smallest = leftchild;
    }
    if (rightchild < n && arr[rightchild] < arr[smallest]) {
        smallest = rightchild;
    }

    if (smallest != i) {
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
        MinHeapify(arr, n, smallest);
    }
}

void HeapSort::MinHeapSort(int arr[], int n) {
    createMinHeap(arr, n);
    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[0];
        cout << "Deleted Element: " << temp << endl;
        arr[0] = arr[i];
        arr[i] = temp;
        MinHeapify(arr, i, 0);
        PrintHeap(arr, i);
    }
}

void HeapSort::PrintHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
