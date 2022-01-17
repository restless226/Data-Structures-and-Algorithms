#include<iostream>

using namespace std;
struct student {
    int roll_no;
    string name;
    float SGPA;
};
static int round;
static int count = 0;

class Student_Database {
private:

    struct student s[15];
public:

    Student_Database(int c) {
        count = c;
    }

    void readinput();

    void display_input();

    void sortByRoll();

    void sortByName();

    void Generate_toppers();

    void SearchbyName();

    void searchbySGPA();

    void addEntry();

    void quickSort(int low, int high);

    int partition(int l, int h);


};

void Student_Database::readinput() {

    for (int i = 0; i < count; i++) {
        cout << "Details of student " << (i + 1) << endl;
        cout << "Enter student's name: " << endl;
        cin.ignore();
        getline(cin, s[i].name);
        cout << "Enter the roll number: " << endl;
        cin >> s[i].roll_no;
        for (int j = 0; j < i; j++) {
            while (s[i].roll_no == s[j].roll_no) {
                cout << "This roll Number already exists!! Please enter another roll number: " << endl;
                cin >> s[i].roll_no;
            }
        }
        while (s[i].roll_no <= 0) {
            cout << "Please enter a valid roll number: " << endl;
            cin >> s[i].roll_no;
        }

        cout << "Enter SGPA: " << endl;
        cin >> s[i].SGPA;
        //SGPA validation.
        while (s[i].SGPA < 0 || s[i].SGPA > 10) {
            cout << "Please enter a valid SGPA: " << endl;
            cin >> s[i].SGPA;
        }
        round++;
    }

}

void Student_Database::display_input() {

    cout << "Roll number" << "\t" << "    Name    " << "\t\t" << " SGPA " << endl;
    for (int i = 0; i < count; i++) {
        cout << (s[i].roll_no) << "\t";
        cout << '\t' << (s[i].name) << "\t" << "  ";
        cout << s[i].SGPA << endl;
    }


}

void Student_Database::sortByRoll() {
    int passes = 0;
    int swaps = 0;
    cout << "***************SORTING BY ROLL NUMBERS******************" << endl;
    for (int i = 0; i < count; i++) {
        passes++;
        for (int j = i + 1; j < count; j++) {
            if (s[i].roll_no > s[j].roll_no) {
                swaps++;
                struct student temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;

            }
        }
    }
    cout << "Number of swaps: " << swaps << endl;
    cout << "No of passes: " << passes << endl;
}

void Student_Database::sortByName() {
    cout << "***************SORTING BY NAMES******************" << endl;

    //insertion sort
    struct student key;
    int j = 0;
    int passes = 0;
    int swaps = 0;
    for (int i = 1; i < count; i++) {
        passes++;
        key = s[i];
        j = i - 1;
        while (j >= 0 && s[j].name > key.name) {
            swaps++;
            s[j + 1] = s[j];
            j = j - 1;

        }
        s[j + 1] = key;
    }
    cout << "Number of passes required: " << passes << endl;
    cout << "Number of swaps required: " << swaps << endl;
}

void Student_Database::Generate_toppers() {
    cout << "***************Toppers****************:" << endl;
    int passes = 0;
    int swaps = 0;
    for (int j = 0; j < count; j++) {
        passes++;
        for (int i = j + 1; i < count; i++) {
            if (s[i].SGPA > s[j].SGPA) {
                swaps++;
                struct student temp;
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
                cout << "Pass " << passes << "Swap " << swaps << endl;

            }
        }
        cout << "Pass " << passes << endl;
        display_input();
    }
    cout << "Number of passes required: " << passes << endl;
    cout << "Number of swaps: " << swaps << endl;
}

void Student_Database::quickSort(int low, int high) {
    if (low < high) {
        int p = partition(low, high);
        quickSort(low, p - 1);
        quickSort(p + 1, high);
    }
}

int Student_Database::partition(int l, int h) {

    int pivot = s[h].SGPA;
    int pindex = l;
    for (int i = l; i < h; i++) {

        if (s[i].SGPA >= pivot) {

            struct student temp = s[i];
            s[i] = s[pindex];
            s[pindex] = temp;
            pindex++;


        }
    }
    struct student temp1 = s[h];
    s[h] = s[pindex];
    s[pindex] = temp1;
    return pindex;
}

void Student_Database::SearchbyName() {
    bool flag = false;
    string name;
    cout << "Enter the name you want to search: " << endl;
    cin.ignore();
    getline(cin, name);
    int left = 0;
    int right = count;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        string s1 = s[mid].name;
        if (s1 == name) {
            flag = true;
            cout << "Details of desired student:" << endl;
            cout << "Roll number: " << s[mid].roll_no << " SGPA is: " << s[mid].SGPA << endl;

        } else if (s[mid].name < name) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }

    }
    if (flag == false) {
        cout << "No such name found in the database!!" << endl;
    }
    //cout<<"No such name found in the database"<<endl;
}

void Student_Database::searchbySGPA() {
    bool flag = false;
    float sgpa;
    cout << "Enter the SGPA: " << endl;
    cin >> sgpa;
    while (sgpa < 0 && sgpa > 10) {
        cout << "Please enter a valid SGPA " << endl;
        cin >> sgpa;
    }
    cout << "Displaying information of students with entered SGPA: " << endl;
    cout << "Roll number" << '\t' << "Name         " << '\t' << " SGPA " << endl;
    for (int i = 0; i < count; i++) {
        if (s[i].SGPA == sgpa) {
            flag = true;
            cout << s[i].roll_no << '\t';
            cout << s[i].name << '\t' << '\t';
            cout << s[i].SGPA << endl;
        }
    }
    if (flag == false) {
        cout << "No match found for the entered SGPA" << endl;
    }
}

void Student_Database::addEntry() {

    int n;
    cout << "How many more entries you want to add in the database: " << endl;
    cin >> n;
    //int count1 = count+n;
    for (int i = count; i < (count + n); i++) {
        cout << "Details of student " << (i + 1) << endl;
        cout << "Enter student's name: " << endl;
        cin.ignore();
        getline(cin, s[i].name);
        cout << "Enter the roll number: " << endl;
        cin >> s[i].roll_no;
        while (s[i].roll_no <= 0) {
            cout << "Please enter a valid roll number: " << endl;
            cin >> s[i].roll_no;
        }

        cout << "Enter SGPA: " << endl;
        cin >> s[i].SGPA;
        //SGPA validation.
        while (s[i].SGPA < 0 && s[i].SGPA > 10) {
            cout << "Please enter a valid SGPA: " << endl;
            cin >> s[i].SGPA;
        }
    }
    count = count + n;
}

int main() {
    int num;
    cout << "Enter the number of students for which you want to create this database(maximum 15 students allowed): "
         << endl;
    cin >> num;
    Student_Database s(num);
    int n = 0;
    do {
        cout << "*******************************MENU*******************************" << endl;
        cout << "Press 1 to enter details " << endl;
        cout << "Press 2 to display input " << endl;
        cout << "Press 3 to Print the sorted list according to roll numbers " << endl;
        cout << "Press 4 to print the sorted list according to Names: " << endl;
        cout << "Press 5 to print Toppers " << endl;
        cout << "Press 6 to display desired number of toppers using quicksort: " << endl;
        cout << "Press 7 to search any particular student by name: " << endl;
        cout << "Press 8 to search students by SGPA: " << endl;
        cout << "Press 9 to add new students: " << endl;
        cout << "Press 0 to exit the application!!" << endl;
        cin >> n;

        switch (n) {
            case 1:

                cout << "Reading input" << endl;
                s.readinput();
                break;


            case 2:
                if (round == 0) {
                    cout << "There are no entries in the database!!" << endl;
                    cout << "Enter the data first" << endl;
                    break;
                } else {
                    s.display_input();
                    break;
                }

            case 3:
                if (round == 0) {
                    cout << "There are no entries in the database!!" << endl;
                    cout << "Enter the data first" << endl;
                    break;
                } else {
                    s.sortByRoll();
                    s.display_input();
                }
                break;
            case 4:

                if (round == 0) {
                    cout << "There are no entries in the database!!" << endl;
                    cout << "Enter the data first" << endl;
                    break;
                } else {
                    s.sortByName();
                    s.display_input();
                    break;
                }
            case 5:
                if (round == 0) {
                    cout << "There are no entries in the database!!" << endl;
                    cout << "Enter the data first" << endl;
                    break;
                } else {
                    s.Generate_toppers();
                    s.display_input();
                    break;
                }
            case 6:
                if (round == 0) {
                    cout << "There are no entries in the database!!" << endl;
                    cout << "Enter the data first" << endl;
                    break;
                } else {
                    s.quickSort(0, (num - 1));
                    s.display_input();
                    break;
                }
            case 7:
                if (round == 0) {
                    cout << "There are no entries in the database!!" << endl;
                    cout << "Enter the data first" << endl;
                    break;
                } else {
                    s.SearchbyName();
                    break;
                }
            case 8:
                if (round == 0) {
                    cout << "There are no entries in the database!!" << endl;
                    cout << "Enter the data first" << endl;
                    break;
                } else {
                    s.searchbySGPA();
                    break;
                }
            case 9:
                if (count >= 15) {
                    cout << "There are already 15 students in the database!! Sorry, You cannot add more students!!"
                         << endl;
                    break;
                } else {
                    s.addEntry();
                    break;
                }

            case 0:
                cout << "Exiting the application" << endl;
                cout << "Thank You for using the application" << endl;
                break;
            default:

                cout << "Enter a Valid choice: " << endl;
                break;
        }


    } while (n != 0);
    return 0;
}
