////Implementation file
//#include <iostream>
//
//using namespace std;
//
//#include<fstream>
//#include<cstring>
//#include<cstdlib>
//#include "header.h"
//
////function to take input from user
//void file::input() {
//    cin.ignore();
//    cout << "Enter name " << endl;
//    gets(name);
//    cout << "Enter the roll number" << endl;
//    cin >> roll;
//    cin.ignore();
//    cout << "Enter standard" << endl;
//    cin >> standard;
//    cin.ignore();
//    cout << "Enter Division" << endl;
//    cin >> division;
//    cin.ignore();
//    cout << "Enter address" << endl;
//    gets(address);
//
//
//}
//
////function to display information
//void file::show() {
//    cout << "\n\t|" << name << "\t|\t" << roll << "\t|\t" << standard << "\t|\t" << division << "\t|\t" << address
//         << "\t|";
//}
//
////creating file objects
//file fileobj;
//file modified;
////declaration of file pointer/object
//fstream fil;
//
////Function to Create Data File
//void operations::Create() {
//    char ch = 'y';
//    fil.open("binary.dat", ios::out | ios::binary);
//
//    while (ch == 'y' || ch == 'Y') {
//        fileobj.input();
//        fil.write((char *) &fileobj, sizeof(fileobj));
//        cout << "Want to Continue.....";
//        cin >> ch;
//    }
//    fil.close();
//}
//
////Function to Add New Record in Data File
//void operations::Add() {
//    char ch = 'y';
//    fil.open("binary.dat", ios::app | ios::binary);
//    while (ch == 'y' || ch == 'Y') {
//        fileobj.input();
//        fil.write((char *) &fileobj, sizeof(fileobj));
//        cout << "Want to Continue.....";
//        cin >> ch;
//    }
//    fil.close();
//}
//
////Function to Display All Record from Data File
//void operations::Display() {
//    fil.open("binary.dat", ios::in | ios::binary);
//    if (!fil) {
//        cout << "File not Found";
//        exit(0);
//    } else {
//        fil.read((char *) &fileobj, sizeof(fileobj));
//        while (!fil.eof()) {
//            fileobj.show();
//            fil.read((char *) &fileobj, sizeof(fileobj));
//        }
//    }
//    fil.close();
//}
//
////Function to Display particular Record from Data File
//void operations::DisplayP() {
//    int rollnu;
//    cout << "Enter Roll No that should be searched:";
//    cin >> rollnu;
//    fil.open("binary.dat", ios::in | ios::binary);
//    if (!fil) {
//        cout << "File not Found";
//        exit(0);
//    } else {
//        fil.read((char *) &fileobj, sizeof(fileobj));
//        while (!fil.eof()) {
//            if (rollnu == fileobj.getroll())
//                fileobj.show();
//            else
//                cout << "Press Any Key....For Search" << endl;
//
//            fil.read((char *) &fileobj, sizeof(fileobj));
//        }
//    }
//    fil.close();
//}
//
////Function to Modify Particular Record from Data File
//void operations::Modify() {
//    int rollnu;
//    cout << "Enter Roll No. that should be modified:";
//    cin >> rollnu;
//    ofstream m;
//    fil.open("binary.dat", ios::in | ios::out | ios::binary);
//    m.open("new.dat", ios::out | ios::binary);
//    if (!fil) {
//        cout << "File not Found";
//        exit(0);
//    } else {
//        fil.read((char *) &fileobj, sizeof(fileobj));
//        while (!fil.eof()) {
//            if (rollnu == fileobj.getroll()) {
//                cout << "Enter New Record.." << endl;
//                modified.input();
//                m.write((char *) &modified, sizeof(modified));
//            } else
//                m.write((char *) &fileobj, sizeof(fileobj));
//
//            fil.read((char *) &fileobj, sizeof(fileobj));
//        }
//    }
//    m.close();
//    fil.close();
//    remove("binary.dat");
//    rename("new.dat", "binary.dat");
//}
//
////Function to Delete Particular Record from Data File
//void operations::Delete() {
//    int rollnu;
//    cout << "Enter Roll No. that to be deleted:";
//    cin >> rollnu;
//    ofstream o;
//    o.open("new.dat", ios::out | ios::binary);
//    fil.open("binary.dat", ios::in | ios::binary);
//    if (!fil) {
//        cout << "File not Found";
//        exit(0);
//    } else {
//        fil.read((char *) &fileobj, sizeof(fileobj));
//        while (!fil.eof()) {
//            if (rollnu != fileobj.getroll())
//                o.write((char *) &fileobj, sizeof(fileobj));
//
//            fil.read((char *) &fileobj, sizeof(fileobj));
//        }
//    }
//    o.close();
//    fil.close();
//    remove("binary.dat");
//    rename("new.dat", "binary.dat");
//}