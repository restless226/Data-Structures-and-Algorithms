#include <iostream>
#include <cstring>
#include "studDB.h"

using namespace std;

// Function Definitions

SEIT_DB::SEIT_DB(int c) {
    count = c;
}

void SEIT_DB::accept_info() {
    for (int i = 0; i < count; i++) {
        cout << "Details of student " << i + 1 << ":" << endl;
        cout << "Enter name: " << endl;
        cin >> stu[i].name;

        cout << "Enter roll number: " << endl;
        cin >> stu[i].roll_no;

        // checking for duplicate entries
        for (int j = 0; j < i; j++) {
            while (stu[i].roll_no == stu[j].roll_no) {
                cout << "This roll no already exists" << endl;
                cout << "Enter roll number again: " << endl;
                cin >> stu[i].roll_no;
            }
        }

        // validation for roll no
        while (stu[i].roll_no <= 0) {
            cout << "Please enter a valid positive roll number:" << endl;
            cin >> stu[i].roll_no;
            break;
        }

        cout << "Enter SGPA: " << endl;
        cin >> stu[i].SGPA;

        // validation for SGPA
        while (stu[i].SGPA < 0 && stu[i].SGPA > 10) {
            cout << "Please enter a valid SGPA:" << endl;
            cin >> stu[i].SGPA;
        }

        cout << endl;
    }
    cout << endl;
}

void SEIT_DB::display_info() {
    cout << "Displaying student information..." << endl;
    cout << "Roll no" << '\t' << "Name        " << '\t' << "SGPA" << endl;

    for (int i = 0; i < count; i++) {
        cout << stu[i].roll_no << '\t';
        cout << stu[i].name << '\t' << '\t';
        cout << stu[i].SGPA << endl;
    }
    cout << endl;

}

void SEIT_DB::sort_by_roll_no() {
    // using Bubble-sort to sort records in ascending roll no order
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (stu[i].roll_no > stu[j].roll_no) {
                struct student temp;
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }

    // printing sorted list
    cout << "Sorted list of students according to their roll no is: " << endl;
    cout << "Roll no" << '\t' << "Name        " << '\t' << "SGPA" << endl;
    for (int k = 0; k < count; k++) {
        cout << stu[k].roll_no << '\t';
        cout << stu[k].name << '\t' << '\t';
        cout << stu[k].SGPA << endl;
    }
    cout << endl;
}

void SEIT_DB::sort_by_name() {
    // using Bubble-sort to sort records alphabetically
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(stu[i].name, stu[j].name) > 0) {
                struct student temp1;
                temp1 = stu[i];
                stu[i] = stu[j];
                stu[j] = temp1;
            }
        }
    }

    // printing sorted list
    cout << "Sorted list of students according to their names is: " << endl;
    cout << "Roll no" << '\t' << "Name      " << '\t' << "SGPA" << endl;
    for (int k = 0; k < count; k++) {
        cout << stu[k].roll_no << '\t';
        cout << stu[k].name << '\t' << '\t';
        cout << stu[k].SGPA << endl;
    }
    cout << endl;

}

void SEIT_DB::search_through_name(int num) {
    string name;
    cout << "Enter student's name you want to search" << endl;
    cin >> name;

    int lower = 0;
    int upper = num;
    bool flag = false;

    // Using binary search to search a student record through its name
    while (lower <= upper) {
        int mid = lower + (upper - lower) / 2;
        if (stu[mid].name == name) {
            flag = true;
            cout << "Displaying student information..." << endl;
            cout << "Roll no" << '\t' << "Name        " << '\t' << "SGPA" << endl;
            cout << stu[mid].roll_no << '\t';
            cout << stu[mid].name << '\t' << '\t';
            cout << stu[mid].SGPA << endl;
            break;
        } else if (stu[mid].name < name) {
            lower = mid + 1;
        } else {
            upper = mid - 1;
        }
    }

    // printing error message if entry is not found
    if (!flag) {
        cout << "Entry not found" << endl;
        cout << "Please try again..." << endl;
    }

    cout << endl;
}

void SEIT_DB::display_toppers() {

    // using Bubble-sort to sort records in ascending SGPA order
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (stu[i].SGPA < stu[j].SGPA) {
                struct student temp1;
                temp1 = stu[i];
                stu[i] = stu[j];
                stu[j] = temp1;
            }
        }
    }

    // Displaying first ten topper student's records
    cout << "DISPLAYING TEN TOPPERS..." << endl;
    cout << "Rank   " << "Roll no" << '\t' << "Name        " << '\t' << "SGPA" << endl;

    for (int k = 0; k < 10; k++) {
        cout << k + 1 << '\t';
        cout << stu[k].roll_no << '\t';
        cout << stu[k].name << '\t' << '\t';
        cout << stu[k].SGPA << endl;
    }
    cout << endl;

}

void SEIT_DB::search_through_sgpa() {
    float x;
    cout << "Enter student's SGPA you want to search" << endl;
    cin >> x;

    bool flag1 = false;
    for (int i = 0; i < count; i++) {
        if (stu[i].SGPA == x) {
            flag1 = true;
            cout << "Displaying student information having SGPA " << x << endl;
            cout << "Roll no" << '\t' << "Name        " << '\t' << "SGPA" << endl;
            cout << stu[i].roll_no << '\t';
            cout << stu[i].name << '\t' << '\t';
            cout << stu[i].SGPA << endl;
            cout << endl;

            // printing error message if entry is not found
        } else if (!flag1) {
            cout << "Entry not found" << endl;
            cout << "Please try again..." << endl;
        }
    }
    cout << endl;
}

void SEIT_DB::add_entry() {
    int n;
    cout << "How many entries you want to add to database" << endl;
    cin >> n;

    for (int i = count; i < count + n; i++) {
        cout << "Details of student " << i + 1 << ":" << endl;
        cout << "Enter name: " << endl;
        cin >> stu[i].name;

        cout << "Enter roll number: " << endl;
        cin >> stu[i].roll_no;

        // checking for duplicate entries
        for (int j = 0; j < i; j++) {
            while (stu[i].roll_no == stu[j].roll_no) {
                cout << "This roll no already exists" << endl;
                cout << "Enter roll number again: " << endl;
                cin >> stu[i].roll_no;
            }
        }

        // validation for roll no
        while (stu[i].roll_no <= 0) {
            cout << "Please enter a valid roll no" << endl;
            cin >> stu[i].roll_no;
        }

        cout << "Enter SGPA: " << endl;
        cin >> stu[i].SGPA;

        // validation for SGPA
        while (stu[i].SGPA < 0 && stu[i].SGPA > 10) {
            cout << "Please enter a valid SGPA:" << endl;
            cin >> stu[i].SGPA;
        }

        cout << endl;
    }
    // updating count (no of records)
    count += n;

}
