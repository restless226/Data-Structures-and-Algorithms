#include <iostream>
#include "linkedlistwithstack.h"
#include "stack_impl.cpp"

using namespace std;

int main() {
    int choice = 0, da, a;
    Node_t<int> l;
    while (true) {
        cout << "Menu :\n\t 1. push\n\t 2. pop \n\t 3. peek \n\t 4.Display\n\t 5. Exit\n" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        if (choice != 5) {
            switch (choice) {
                case 1:
                    cout << "Enter data to be pushed: ";
                    cin >> da;
                    l.push(da);
                    cout << endl;
                    break;
                case 2:
                    a = l.pop();
                    cout << a;
                    cout << endl;
                    break;
                case 3:
                    l.peek();
                    cout << endl;
                    break;
                case 4:
                    l.display();
                    cout << endl;
                    break;
                default:
                    cout << "Enter among  the given choices" << endl;
                    break;
            }
        } else {
            break;
        }
    }
}
