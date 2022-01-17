#include<iostream>
#include "heap_header.h"

using namespace std;

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
