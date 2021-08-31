//#include<iostream>
//
//using namespace std;
//
//struct Address {
//    char country_name[20];
//    char state_name[20];
//    char city_name[20];
//    char pin_no[6];
//    char flat_no[20];
//
//public:
//    void enroll_address();
//
//    void display_address();
//
//};
//
//// DEFINING FUNCTIONS FROM STUDENT STRUCTURE
//// defining function for enrolling address
//void Address::enroll_address() {
//    cout << "\nEnter your address details:" << endl;
//
//    cout << "Enter your country name:" << endl;
//    cin >> country_name;
//
//    cout << "Enter your state name:" << endl;
//    cin >> state_name;
//
//    cout << "Enter your city name:" << endl;
//    cin >> city_name;
//
//    cout << "Enter your pin no:" << endl;
//    cin >> pin_no;
//
//    cout << "Enter your flat no:" << endl;
//    cin >> flat_no;
//
//}
//
//// defining function for displaying address details
//void Address::display_address() {
//    cout << "\n\nAddress Details you entered are as follows:" << endl;
//    cout << "Country name:" << country_name << endl;
//    cout << "State name:" << state_name << endl;
//    cout << "City name:" << city_name << endl;
//    cout << "Pin no:" << pin_no << endl;
//    cout << "Flat_no:" << flat_no << endl;
//}
//
//struct Student {
//    char name[20];
//    int roll;
//    int marks1;
//    int marks2;
//    int marks3;
//
//public:
//    void enroll();
//
//    void display();
//
//    void analysis() const;
//
//
//};
//
//// DEFINING FUNCTIONS FROM STUDENT STRUCTURE
//
//// function for enrolling student
//void Student::enroll() {
//
//    cout << "Enter your Personal details:" << endl;
//
//    cout << "Enter your name :" << endl;
//    cin >> name;
//
//    cout << "Enter your roll no :" << endl;
//    cin >> roll;
//
//    cout << "Enter marks obtained subject 1:" << endl;
//    cin >> marks1;
//
//    cout << "Enter marks obtained subject 2:" << endl;
//    cin >> marks2;
//
//    cout << "Enter marks obtained subject 3:" << endl;
//    cin >> marks3;
//
//}
//
//// function for displaying student data
//void Student::display() {
//    cout << "\nPersonal information you entered is as follows:";
//    cout << "\nName : " << name;
//    cout << "\nRoll no:" << roll;
//    cout << "\nMarks in subject 1 : " << marks1;
//    cout << "\nMarks in subject 2 : " << marks2;
//    cout << "\nMarks in subject 3 : " << marks3;
//}
//
//// function for analysis of maximum marks
//void Student::analysis() const {
//    if (marks1 > marks2 && marks1 > marks3)
//        cout << "\nYou have scored maximum marks in subject 1 - " << marks1<<" marks";
//
//    else if (marks2 > marks1 && marks2 > marks3)
//        cout << "\nYou have scored maximum marks in subject 2 - " << marks2<<" marks";
//
//    else if (marks3 > marks1 && marks1 > marks2)
//        cout << "\nYou have scored maximum marks in subject 3 - " << marks3<<" marks";
//}
//
//int main() {
//    cout << "\nWelcome for the Student Enrollment Form:" << endl;
//    cout << "Please fill the following information..." << endl;
//
//    Student s{};
//    Address a{};
//
//    s.enroll();
//    a.enroll_address();
//    s.display();
//    s.analysis();
//    a.display_address();
//
//    cout << "Size of student is:" << sizeof(s) << endl;
//    cout << "Size of address is:" << sizeof(a) << endl;
//
//    return 0;
//}
//
//// Output-
////Welcome for the Student Enrollment Form:
////Please fill the following information...
////Enter your Personal details:
////Enter your name :
////rohit
////Enter your roll no :
////23333
////Enter marks obtained subject 1:
////29
////Enter marks obtained subject 2:
////28
////Enter marks obtained subject 3:
////28
////
////Enter your address details:
////Enter your country name:
////india
////Enter your state name:
////maharashtra
////Enter your city name:
////pune
////Enter your pin no:
////411030
////Enter your flat no:
////1826
////
////Personal information you entered is as follows:
////Name : rohit
////Roll no:23333
////Marks in subject 1 : 29
////Marks in subject 2 : 28
////Marks in subject 3 : 28
////You have scored maximum marks in subject 1 - 29 marks
////
////Address Details you entered are as follows:
////Country name:india
////State name:maharashtra
////City name:pune
////Pin no:4110301826
////Flat_no:1826
////Size of student is:36
////Size of address is:86
