#include "header.h"

// Function to input account details of a member
void Bank::enterDetails() {
    for (int i = 0; i < count; i++) {
        cout << "Account Details for member" << i + 1 << endl;
        cout << "Enter account holder's name:" << endl;
        cin.ignore();
        getline(cin, details[i].Name);
        cout << "Enter account no:";
        cin >> details[i].accountNo;
        cout << "Enter your current account balance:";
        cin >> details[i].balance;
        cout << "Enter your account type:";
        cin >> details[i].accType;
        cout << endl;
    }
}

// Selection sort function to arrange Account holder according to Account no
void Bank::selectionSort() {
    int index;
    accountDetails temp;
    int passes = 0;
    int swaps = 0;

    for (int i = 0; i < count - 1; i++) {
        passes++;
        index = i;
        for (int j = i + 1; j < count; j++) {
            if (details[j].accountNo < details[index].accountNo) {
                swaps++;
                index = j;
                temp = details[index];
                details[index] = details[i];
                details[i] = temp;
            }
        }
    }

    cout << "no of swaps:" << swaps << endl;
    cout << "no of passes:" << passes << endl;
    display();
}

// Function to arrange the list of employee according to Name using insertion sort
void Bank::insertionSort() {
    accountDetails key;
    int passes = 0;

    for (int i = 0; i < count; i++) {
        passes++;
        key = details[i];
        int j = i;
        while (j > 0 && details[j - 1].Name > key.Name) {
            details[j] = details[j - 1];
            j--;
        }
        details[j] = key;
    }

    cout << "no of passes:" << passes << endl;
    display();
}

// Function to search a record according to name using binary search
void Bank::binarySearch(int n) {
    string searchName;
    int count = 0;
    int l = 0;
    int h = n - 1;
    int mid;
    cout << "Enter the name which to be searched" << endl;
    cin.ignore();
    getline(cin, searchName);
    int passes = 0;

    while (l <= h) {
        mid = (l + h) / 2;
        if (searchName == details[mid].Name) {
            passes++;
            cout << "Account no. : " << details[mid].accountNo << endl;
            cout << "Balance : " << details[mid].balance << endl;
            for (int i = 0; i < count; i++) {
                if (searchName == details[i].Name) {
                    cout << "Account no. : " << details[mid].accountNo << endl;
                    cout << "Balance : " << details[mid].balance << endl;
                }
            }
            count = 1;
            cout << "no of passes:" << passes << endl;
            break;
        } else if ((searchName < details[mid].Name)) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    if (count == 0) {
        cout << "Name not found" << endl;
    }
}

// Function to display all details
void Bank::display() {
    int i;
    cout << "Acc no" << "  " << " Acc holder name " << "        " << "Balance" << endl;
    for (i = 0; i < count; i++) {
        cout << details[i].accountNo << "   ";
        cout << details[i].Name << "        ";
        cout << details[i].balance << endl;
    }
}