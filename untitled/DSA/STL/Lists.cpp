// it is just a container
// bidirectional insertion and deletion list

#include <iostream>
#include <list>

using namespace std;


void display(list<int> &list1) {
    list<int>::iterator iter;

    for (iter = list1.begin(); iter != list1.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}

int main() {
    list<int> list1;    // list of 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(11);
    list1.push_back(13);


    display(list1);

    list1.pop_back();

    display(list1);

    list1.pop_front();

    display(list1);

    list1.remove(9);

    display(list1);


    // sorting list1
    list1.sort();
    display(list1);


    list<int> list2(7); // empty list of size 7
    list<int>::iterator it;

    int p = 1;
    int q;
    for (it = list2.begin(); it != list2.end(); it++) {
        cout << "Enter element " << p << ":" << endl;
        p++;
        cin >> q;
        *it = q;
    }

    cout << "displaying list2..." << endl;
    display(list2);

    // reversing list1
    list1.reverse();
    display(list1);

    // swaping list1 and list2
    cout << "list1 before swaping:" << endl;
    display(list1);
    cout << "list2 before swaping:" << endl;
    display(list2);

    swap(list1, list2);
    cout << "list1 after swaping:" << endl;
    display(list1);
    cout << "list2 after swaping:" << endl;
    display(list2);


    // merging two lists
    list1.merge(list2);
    cout << "list 1 after merging:" << endl;
    display(list1);

    return 0;
}