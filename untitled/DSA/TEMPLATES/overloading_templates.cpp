#include <iostream>

using namespace std;

template<class T>

class Rohit {
public:
    T data;

    Rohit(T x) {
        data = x;
    }

    void display();
};

template<class T>

void Rohit<T>::display() {
    cout << data << endl;
}


void func(int a) {
    cout << "first version, " << a << endl;
}

template<class T>

void func(T a) {
    cout << "template version, " << a << endl;
}


int main() {
    Rohit<int> obj(5);
    obj.display();

    Rohit<float> obj1(5.9);
    obj1.display();

    Rohit<char> obj2('r');
    obj2.display();


    func(10);   // exact match takes highest priority (non-template)
    func('r');

    return 0;
}