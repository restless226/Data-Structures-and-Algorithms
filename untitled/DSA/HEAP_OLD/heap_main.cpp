#include "iostream"
#include "heap.h"

using namespace std;

int main() {
    int size;
    cout << "Enter size of heap:" << endl;
    cin >> size;
    if (size <= 0) {
        cout << "[WARNING] Heap size is always greater than 0" << endl;
        cout << "Pls enter size of heap again:" << endl;
        cin >> size;
    }
    MinHeap object(size);
    int choice;
    int val;
    while (true) {
        cout << "Enter your choice:\n";
        cout << "Press:" << endl;
        cout << "\n0. [TO EXIT]";
        cout << "\n1. To insert a key "
                "\n2. To search a key "
                "\n3. To delete a key "
                "\n4. Get min key from heap "
                "\n5. To extract min value from heap and remove it "
                "\n6. To display height of heap "
                "\n7. To print all heap values"
                "\n8. To perform heap sort on array\n";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert:" << endl;
                cin >> val;
                object.insertKey(val);
                cout << '\n' << '\n';
                break;
            case 2:
                cout << "Enter value to search:" << endl;
                cin >> val;
                cout << object.linearSearch(val) << '\n';
                cout << '\n';
                break;
            case 3:
                cout << "Enter value to delete:" << endl;
                cin >> val;
                object.deleteKey(val);
                cout << '\n' << '\n';
                break;
            case 4:
                cout << "MIN VALUE FROM HEAP IS:" << object.getMin() << endl;
                cout << '\n' << '\n';
                break;
            case 5:
                cout << "EXTRACTED MIN VALUE FROM HEAP IS:" << object.extractMin() << endl;
                cout << '\n';
                break;
            case 6:
                cout << "HEIGHT OF HEAP IS:" << object.heapHeight() << endl;
                cout << '\n' << '\n';
                break;
            case 7:
                cout << "PRINTING HEAP..." << endl;
                object.printHeap();
                cout << '\n' << '\n';
                break;
            case 8:
                object.heapSort();
                cout << "PRINTING SORTED ARRAY..." << endl;
                object.printHeap();
                cout << '\n' << '\n';
                break;
            case 0:
                cout << "Exiting... Bye Bye\n";
                _Exit(0);
            default:
                cout << "Enter a valid choice... :(\n\n";
                break;
        }
    }
}

