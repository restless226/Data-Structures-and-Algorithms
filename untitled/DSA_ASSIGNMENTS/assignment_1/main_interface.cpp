#include <iostream>
#include "studDB.h"

using namespace std;

// Menu Driven User Interface
int main() {
    int c;
    cout << "Enter no of records you want to insert:" << endl;
    cin >> c;

    SEIT_DB SEIT_DB_Obj(c);

    int x;
    bool flag = true;
    while (flag) {
        // Displaying choices for user
        cout << "Press: \n1 To insert information"
                " \n2 To display information"
                " \n3 To display students sorted list with roll nos"
                " \n4 To display students sorted list according to names"
                " \n5 To display first ten toppers"
                " \n6 To search a student through its SGPA"
                " \n7 To search a student through its name"
                " \n8 To add a student entry into database"
                " \n9 To exit from the application" << endl;
        cin >> x;
        cout << endl;

        switch (x) {

            case 1:
                checker = 1;    // changed value to 1 as database is not empty now
                SEIT_DB_Obj.accept_info();
                break;

            case 2:
                if (checker == 0) {
                    cout << "currently there are no entries in database" << endl;
                    cout << "Press 1 to insert information" << endl;
                } else if (c > 15) {
                    cout << "More than 15 entries are not permitted in database" << endl;
                    cout << "Please try again with less no of entries" << endl;
                } else {
                    SEIT_DB_Obj.display_info();
                }
                break;

            case 3:
                if (checker == 0) {
                    cout << "currently there are no entries in database" << endl;
                    cout << "Press 1 to insert information" << endl;
                } else if (c > 15) {
                    cout << "More than 15 entries are not permitted in database" << endl;
                    cout << "Please try again with less no of entries" << endl;
                } else {
                    SEIT_DB_Obj.sort_by_roll_no();
                }
                break;

            case 4:
                if (checker == 0) {
                    cout << "currently there are no entries in database" << endl;
                    cout << "Press 1 to insert information" << endl;
                } else if (c > 15) {
                    cout << "More than 15 entries are not permitted in database" << endl;
                    cout << "Please try again with less no of entries" << endl;
                } else {
                    SEIT_DB_Obj.sort_by_name();
                }
                break;

            case 5:
                if (checker == 0) {
                    cout << "currently there are no entries in database" << endl;
                    cout << "Press 1 to insert information" << endl;
                } else if (c > 15) {
                    cout << "More than 15 entries are not permitted in database" << endl;
                    cout << "Please try again with less no of entries" << endl;
                } else {
                    SEIT_DB_Obj.display_toppers();
                }
                break;

            case 6:
                if (checker == 0) {
                    cout << "currently there are no entries in database" << endl;
                    cout << "Press 1 to insert information" << endl;
                } else if (c > 15) {
                    cout << "More than 15 entries are not permitted in database" << endl;
                    cout << "Please try again with less no of entries" << endl;
                } else {
                    SEIT_DB_Obj.search_through_sgpa();
                }
                break;

            case 7:
                if (checker == 0) {
                    cout << "currently there are no entries in database" << endl;
                    cout << "Press 1 to insert information" << endl;
                } else if (c > 15) {
                    cout << "More than 15 entries are not permitted in database" << endl;
                    cout << "Please try again with less no of entries" << endl;
                } else {
                    SEIT_DB_Obj.search_through_name(c);
                }
                break;

            case 8:
                if (checker == 0) {
                    cout << "currently there are no entries in database" << endl;
                    cout << "Press 1 to insert information" << endl;
                } else if (c > 15) {
                    cout << "More than 15 entries are not permitted in database" << endl;
                    cout << "Please try again with less no of entries" << endl;
                } else {
                    SEIT_DB_Obj.add_entry();
                }
                break;

            default:
                cout << "Exiting from the application..." << endl;
                flag = false;
                break;
        }
    }


    return 0;
}
