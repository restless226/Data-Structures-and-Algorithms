////Main file
//#include<iostream>
//#include "header.h"
//
//using namespace std;
//
//int main() {
//    operations o;
//    int opt;
//    while (1) {
//
//        cout << "1.Create Data File" << endl;
//        cout << "2.Add New Record in Data File" << endl;
//        cout << "3.Display Record From Data File" << endl;
//        cout << "4.Display Particular Record From Data File" << endl;
//        cout << "5.Modify Paricular Record From Data File" << endl;
//        cout << "6.Delete Particular Record From Data File" << endl;
//        cout << "7.Exit From the Program" << endl;
//        cout << "Enter your Option : " << endl;
//        cin >> opt;
//        //switch case to take choices and likewise calling of various functions
//        switch (opt) {
//            case 1: {
//                o.Create();
//                cout << "Display Main Menu" << endl;
//
//                break;
//            }
//            case 2: {
//                o.Add();
//                cout << "Display Main Menu" << endl;
//
//                break;
//            }
//            case 3: {
//                cout << "\n\t" << " Name" << "\t\t\t" << "Roll no" << "\t\t" << "standard" << "\t" << "division" << "\t"
//                     << "address" << "\t";
//                o.Display();
//                cout << "\nDisplay Main Menu" << endl;
//
//                break;
//            }
//            case 4: {
//                o.DisplayP();
//                cout << "Display Main Menu" << endl;
//
//                break;
//            }
//            case 5: {
//                o.Modify();
//                cout << "Display Main Menu" << endl;
//
//                break;
//            }
//            case 6: {
//                o.Delete();
//                cout << "Display Main Menu" << endl;
//
//                break;
//            }
//            case 7:
//                exit(0);
//
//            default: {
//                cout << "Wrong Choice....Press Key For View the Main Menu";
//
//            }
//        }
//    }
//}