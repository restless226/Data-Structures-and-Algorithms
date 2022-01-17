#include<iostream>

using namespace std;

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


int main() {
    int size;
    cout << "Enter the Size of the Heap " << endl;
    cin >> size;
    int arr[size];
    HeapSort obj;
    int option;
    do {
        cout << "Which Operation do you want to perform? Enter an Option Number!! Press 0 To Exit!" << endl;
        cout << "1.To Enter Heap Elements." << endl;
        cout << "2.To Create Max Heap " << endl;
        cout << "3.To Sort The Max Heap" << endl;
        cout << "4.To Create Min Heap" << endl;
        cout << "5.To Sort the Min Heap" << endl;

        cin >> option;
        switch (option) {
            case 1:
                cout << "Enter heap Elements: " << endl;
                for (int i = 0; i < size; i++) {
                    cin >> arr[i];
                }
                break;
            case 2:
                cout << "Creating MAX HEAP!" << endl;
                obj.createMaxHeap(arr, size);
                cout << "MAX HEAP: " << endl;
                obj.PrintHeap(arr, size);
                break;
            case 3:
                cout << "Sorting Heap Elements" << endl;
                obj.MaxHeapSort(arr, size);
                obj.PrintHeap(arr, size);
                break;
            case 4:
                cout << "Creating MIN HEAP!" << endl;
                obj.createMinHeap(arr, size);
                cout << "MIN HEAP:";
                obj.PrintHeap(arr, size);
                break;
            case 5:
                cout << "Sorting Heap Elements" << endl;
                obj.MinHeapSort(arr, size);
                obj.PrintHeap(arr, size);
                break;
        }
    } while (option != 0);
    return 0;
}
