//Header file
#include <iostream>
#include<fstream>

#ifndef FILE_H
#define FILE_H
using namespace std;

//creating class file
class file {
    //declaration of private menbers
private:
    int roll;
    int standard;
    char division;
    char name[100];
    char address[200];
    //declaration of public members
public:
    //function to take input from user
    void input();

    //function to display database
    void show();

    //function to get roll number from user
    int getroll() {
        return roll;
    }

    //function to get standard of student from user
    int getstd() {
        return standard;
    }
};

//class creation to perform vrious operations on file
class operations {
public:
//fuction to create file
    void Create();

//function to add info in the given database
    void Add();

//function to display info
    void Display();

//function to display the info of student hich we have searched for
    void DisplayP();

//function to modify records
    void Modify();

//function to delete records
    void Delete();
};

#endif

//Implementation file
#include <iostream>

using namespace std;

#include<fstream>
#include<cstring>
#include<cstdlib>
#include "File.h"

//function to take input from user
void file::input() {
    cin.ignore();
    cout << "Enter name " << endl;
    gets(name);
    cout << "Enter the roll number" << endl;
    cin >> roll;
    cin.ignore();
    cout << "Enter standard" << endl;
    cin >> standard;
    cin.ignore();
    cout << "Enter Division" << endl;
    cin >> division;
    cin.ignore();
    cout << "Enter address" << endl;
    gets(address);


}

//function to display information
void file::show() {
    cout << "\n\t|" << name << "\t|\t" << roll << "\t|\t" << standard << "\t|\t" << division << "\t|\t" << address
         << "\t|";
}

//creating file objects
file fileobj;
file modified;
//declaration of file pointer/object
fstream fil;

//Function to Create Data File
void operations::Create() {
    char ch = 'y';
    fil.open("binary.dat", ios::out | ios::binary);

    while (ch == 'y' || ch == 'Y') {
        fileobj.input();
        fil.write((char *) &fileobj, sizeof(fileobj));
        cout << "Want to Continue.....";
        cin >> ch;
    }
    fil.close();
}

//Function to Add New Record in Data File
void operations::Add() {
    char ch = 'y';
    fil.open("binary.dat", ios::app | ios::binary);
    while (ch == 'y' || ch == 'Y') {
        fileobj.input();
        fil.write((char *) &fileobj, sizeof(fileobj));
        cout << "Want to Continue.....";
        cin >> ch;
    }
    fil.close();
}

//Function to Display All Record from Data File
void operations::Display() {
    fil.open("binary.dat", ios::in | ios::binary);
    if (!fil) {
        cout << "File not Found";
        exit(0);
    } else {
        fil.read((char *) &fileobj, sizeof(fileobj));
        while (!fil.eof()) {
            fileobj.show();
            fil.read((char *) &fileobj, sizeof(fileobj));
        }
    }
    fil.close();
}

//Function to Display particular Record from Data File
void operations::DisplayP() {
    int rollnu;
    cout << "Enter Roll No that should be searched:";
    cin >> rollnu;
    fil.open("binary.dat", ios::in | ios::binary);
    if (!fil) {
        cout << "File not Found";
        exit(0);
    } else {
        fil.read((char *) &fileobj, sizeof(fileobj));
        while (!fil.eof()) {
            if (rollnu == fileobj.getroll())
                fileobj.show();
            else
                cout << "Press Any Key....For Search" << endl;

            fil.read((char *) &fileobj, sizeof(fileobj));
        }
    }
    fil.close();
}

//Function to Modify Particular Record from Data File
void operations::Modify() {
    int rollnu;
    cout << "Enter Roll No. that should be modified:";
    cin >> rollnu;
    ofstream m;
    fil.open("binary.dat", ios::in | ios::out | ios::binary);
    m.open("new.dat", ios::out | ios::binary);
    if (!fil) {
        cout << "File not Found";
        exit(0);
    } else {
        fil.read((char *) &fileobj, sizeof(fileobj));
        while (!fil.eof()) {
            if (rollnu == fileobj.getroll()) {
                cout << "Enter New Record.." << endl;
                modified.input();
                m.write((char *) &modified, sizeof(modified));
            } else
                m.write((char *) &fileobj, sizeof(fileobj));

            fil.read((char *) &fileobj, sizeof(fileobj));
        }
    }
    m.close();
    fil.close();
    remove("binary.dat");
    rename("new.dat", "binary.dat");
}

//Function to Delete Particular Record from Data File
void operations::Delete() {
    int rollnu;
    cout << "Enter Roll No. that to be deleted:";
    cin >> rollnu;
    ofstream o;
    o.open("new.dat", ios::out | ios::binary);
    fil.open("binary.dat", ios::in | ios::binary);
    if (!fil) {
        cout << "File not Found";
        exit(0);
    } else {
        fil.read((char *) &fileobj, sizeof(fileobj));
        while (!fil.eof()) {
            if (rollnu != fileobj.getroll())
                o.write((char *) &fileobj, sizeof(fileobj));

            fil.read((char *) &fileobj, sizeof(fileobj));
        }
    }
    o.close();
    fil.close();
    remove("binary.dat");
    rename("new.dat", "binary.dat");
}

//Main file
#include<iostream>
#include "File.h"
#include "File_implementation.cpp"

using namespace std;

int main() {
    operations o;
    int opt;
    while (1) {

        cout << "1.Create Data File" << endl;
        cout << "2.Add New Record in Data File" << endl;
        cout << "3.Display Record From Data File" << endl;
        cout << "4.Display Particular Record From Data File" << endl;
        cout << "5.Modify Paricular Record From Data File" << endl;
        cout << "6.Delete Particular Record From Data File" << endl;
        cout << "7.Exit From the Program" << endl;
        cout << "Enter your Option : " << endl;
        cin >> opt;
        //switch case to take choices and likewise calling of various functions
        switch (opt) {
            case 1: {
                o.Create();
                cout << "Display Main Menu" << endl;

                break;
            }
            case 2: {
                o.Add();
                cout << "Display Main Menu" << endl;

                break;
            }
            case 3: {
                cout << "\n\t" << " Name" << "\t\t\t" << "Roll no" << "\t\t" << "standard" << "\t" << "division" << "\t"
                     << "address" << "\t";
                o.Display();
                cout << "\nDisplay Main Menu" << endl;

                break;
            }
            case 4: {
                o.DisplayP();
                cout << "Display Main Menu" << endl;

                break;
            }
            case 5: {
                o.Modify();
                cout << "Display Main Menu" << endl;

                break;
            }
            case 6: {
                o.Delete();
                cout << "Display Main Menu" << endl;

                break;
            }
            case 7:
                exit(0);

            default: {
                cout << "Wrong Choice....Press Key For View the Main Menu";

            }
        }
    }
}


