

#include<iostream>
#include<string>

using namespace std;

class Bank {
private :

    // private data members
    struct accountDetails {
        int accountNo;
        string Name;
        double balance;
        string accType;
    };

    int count;
    struct accountDetails details[15];

public :
    // parameterized constructor
    Bank(int c) {
        count = c;
    }

    // Method declarations
    void enterDetails();

    void selectionSort();

    void insertionSort();

    void binarySearch(int n);

    void display();

};