#include <iostream>
#include <cstring>

using namespace std;

struct student {
public:
    int roll_no;
    char name[20];
    float SGPA;
};

static int checker = 0;

class SEIT_DB {
private:
    int count;
    struct student stu[10]{};

public:
    SEIT_DB(int c) {
        count = c;
    }

    void accept_info();

    void display_info();

    void sort_by_roll_no();

    void sort_by_name();

    void display_toppers();

    void search_through_sgpa();

    void search_through_name(int);

    void add_entry();

    void quickSort(int low, int high);

    int partition(int l, int h);

};

void SEIT_DB::accept_info() {
    for (int i = 0; i < count; i++) {
        cout << "Details of student " << i + 1 << ":" << endl;
        cout << "Enter name: " << endl;
        cin >> stu[i].name;

        cout << "Enter roll number: " << endl;
        cin >> stu[i].roll_no;

        for (int j = 0; j < i; j++) {
            while (stu[i].roll_no == stu[j].roll_no) {
                cout << "This roll no already exists" << endl;
                cout << "Enter roll number again: " << endl;
                cin >> stu[i].roll_no;
            }
        }
        while (stu[i].roll_no <= 0) {
            cout << "Please enter a valid positive roll number:" << endl;
            cin >> stu[i].roll_no;
            break;
        }


        cout << "Enter SGPA: " << endl;
        cin >> stu[i].SGPA;

        while (stu[i].SGPA < 0 || stu[i].SGPA > 10) {
            cout << "Please enter a valid SGPA" << endl;
            cin >> stu[i].SGPA;
            break;
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
    int passes = 0;
    int swaps = 0;
    for (int i = 0; i < count; i++) {
        passes++;
        for (int j = i + 1; j < count; j++) {
            if (stu[i].roll_no > stu[j].roll_no) {
                swaps++;
                struct student temp;
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
    cout << "no of swaps:" << swaps << endl;
    cout << "no of passes:" << passes << endl;

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
    int passes = 0;
    int swaps = 0;
    for (int i = 0; i < count; i++) {
        passes++;
        for (int j = i + 1; j < count; j++) {
            swaps++;
            if (strcmp(stu[i].name, stu[j].name) > 0) {
                struct student temp1;
                temp1 = stu[i];
                stu[i] = stu[j];
                stu[j] = temp1;
            }
        }
    }
    cout << "no of swaps:" << swaps << endl;
    cout << "no of passes:" << passes << endl;

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
    if (!flag) {
        cout << "Entry not found" << endl;
        cout << "Please try again..." << endl;
    }

    cout << endl;
}

void SEIT_DB::display_toppers() {
    int passes = 0;
    int swaps = 0;
    //sorting according to SGPA
    for (int i = 0; i < count; i++) {
        passes++;
        for (int j = i + 1; j < count; j++) {
            swaps++;
            if (stu[i].SGPA < stu[j].SGPA) {
                struct student temp1;
                temp1 = stu[i];
                stu[i] = stu[j];
                stu[j] = temp1;
            }
        }
    }
    cout << "no of swaps:" << swaps << endl;
    cout << "no of passes:" << passes << endl;

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

        while (stu[i].roll_no <= 0) {
            cout << "Please enter a valid roll no" << endl;
            cin >> stu[i].roll_no;
        }

        cout << "Enter SGPA: " << endl;
        cin >> stu[i].SGPA;

        while (stu[i].SGPA < 0 || stu[i].SGPA > 10) {
            cout << "Please enter a valid SGPA:" << endl;
            cin >> stu[i].SGPA;
        }

        cout << endl;
    }
    count += n;

}

void SEIT_DB::quickSort(int low, int high) {
    if (low < high) {
        int p = partition(low, high);
        quickSort(low, p - 1);
        quickSort(p + 1, high);
    }
}

int SEIT_DB::partition(int l, int h) {

    int pivot = stu[h].SGPA;
    int pindex = l;
    for (int i = l; i < h; i++) {

        if (stu[i].SGPA >= pivot) {

            struct student temp = stu[i];
            stu[i] = stu[pindex];
            stu[pindex] = temp;
            pindex++;

        }
    }
    struct student temp1 = stu[h];
    stu[h] = stu[pindex];
    stu[pindex] = temp1;
    return pindex;
}

int main() {
    int c;
    cout << "Enter no of records you want to insert:" << endl;
    cin >> c;

    SEIT_DB SEIT_DB_Obj(c);

    int x;
    bool flag = true;
    while (flag) {
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
                checker = 1;
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
