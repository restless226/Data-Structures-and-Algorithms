#include <iostream>

using namespace std;

#include <vector>

template<class T>

void display(vector<T> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {

    // vector1
    vector<int> vector1;
    int ele, size;
    cout << "Enter size of vector:" << endl;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ":" << endl;
        cin >> ele;
        vector1.push_back(ele);
    }

    cout << "Displaying vector1..." << endl;
    display(vector1);

    vector<int>::iterator iter = vector1.begin();
    vector1.insert(iter + 1, 3, 566);

    cout << "Displaying vector1..." << endl;
    display(vector1);


    vector<char> vector2(4);  // 4 element character vector
    vector<char> vector3(vector2);
    vector<int> vector4(6, 3);   // 6 elements vector of 3's

    // vector2
    vector2.push_back(10);
    cout << "Displaying vector2..." << endl;
    display(vector2);


    // vector3
    cout << "Displaying vector3..." << endl;
    display(vector3);


    // vector4
    cout << "Displaying vector4..." << endl;
    display(vector4);

    vector4.erase(vector4.begin());

    cout << "Displaying vector4..." << endl;
    display(vector4);

    vector4.erase(vector4.begin(), vector4.begin() + 4);

    cout << "Displaying vector4..." << endl;
    display(vector4);

    return 0;
}