///*
//PROBLEM STATEMENT:
//Given an array of size N.
//The task is to sort the array elements by completing functions
//heapify() and buildHeap() which are used to implement Heap Sort.
//
//Heap Sort Algorithm for sorting in increasing order:
//1. Build a max heap from the input data.
//2. At this point, the largest item is stored at the root of the heap.
//   Replace it with the last item of the heap followed by reducing the size of heap by 1.
//   Finally, heapify the root of the tree.
//3. Repeat step 2 while size of heap is greater than 1.
//
//How to build the heap?
//Heapify procedure can be applied to a node only if its child nodes are heapified.
//So, the heapification must be performed in the bottom-up order.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//const int mod = 1000000007;
//
//int left(int i) { return (2 * i + 1); }
//
//int right(int i) { return (2 * i + 2); }
//
////Heapify function to maintain heap property.
//void heapify(int arr[], int n, int i) {
//    // Your Code Here
//    int largest = i;
//    if (left(i) < n && arr[left(i)] > arr[largest]) {
//        largest = left(i);
//    }
//    if (right(i) < n && arr[right(i)] > arr[largest]) {
//        largest = right(i);
//    }
//    if (largest != i) {
//        swap(arr[i], arr[largest]);
//        heapify(arr, n, largest);
//    }
//}
//
////Function to build a Heap from array.
//void buildHeap(int arr[], int n) {
//    // Your Code Here
//    for (int i = (n / 2) - 1; i >= 0; i--) {
//        heapify(arr, n, i);
//    }
//}
//
////Function to sort an array using Heap Sort.
//void heapSort(int arr[], int n) {
//    //code here
//    buildHeap(arr, n);
//    for (int i = n - 1; i > 0; i--) {
//        swap(arr[0], arr[i]);
//        heapify(arr, i, 0);
//    }
//}
//
///* Function to print an array */
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int arr[10000], n, t;
//    cin >> t;
//    while (t--) {
//        cin >> n;
//        for (int i = 0; i < n; i++) cin >> arr[i];
//        heapSort(arr, n);
//        printArray(arr, n);
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//5
//4 1 3 9 7
//10
//10 9 8 7 6 5 4 3 2 1
//
//OUTPUT:
//1 3 4 7 9
//1 2 3 4 5 6 7 8 9 10
//*/