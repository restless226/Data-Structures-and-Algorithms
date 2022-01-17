#ifndef UNTITLED_STUDDB_H
#define UNTITLED_STUDDB_H
#endif //UNTITLED_STUDDB_H

using namespace std;

struct student {
public:
    int roll_no;
    char name[20];
    float SGPA;
};

// To keep track of whether database is empty or not
static int checker = 0;

class SEIT_DB {
private:
    int count;
    struct student stu[10];     // array of structures

public:
    // function declarations

    SEIT_DB(int c);     // constructor to initialize no of records, i.e. count

    void accept_info();    // accepts records from user

    void display_info();    // displays records in entered order

    void sort_by_roll_no(); // sorts records in ascending roll no in database & displays them

    void sort_by_name();    // sorts records alphabetically in database & displays them

    void display_toppers(); // displays first ten toppers alongwith rank

    void search_through_sgpa(); // User can search a record through SGPA of the student

    void search_through_name(int); // User can search a record through name of the student

    void add_entry();   // Further entries can be added into database

};
