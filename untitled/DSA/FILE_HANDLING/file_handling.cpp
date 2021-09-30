//#include <iostream>
//#include <cstring>
//#include <iomanip>
//#include <fstream>
//
//using namespace std;
//
//const int SIZE=20;
//
//class StudentData{
//    int rollNo;
//    char fullName[20];
//    char fullAddress[20];
//    int division;
//
//public:
//    StudentData(){
//
//    }
//
//    StudentData(int rollNo, char fullName[SIZE], char fullAddress[SIZE], int division){
//        this->rollNo=rollNo;
//        this->division=division;
//
//        strcpy(this->fullName,fullName);
//        strcpy(this->fullAddress,fullAddress);
//
//    }
//
//    int getRollNo(){
//        return rollNo;
//    }
//
//    void displayRecord(){
//        /*
//         * The setw() method of iomanip library in C++ is used
//         * to set the ios library field width based on the width
//         * specified as the parameter to this method.
//
//        Syntax:
//
//        setw(int n)
//        Parameters: This method accepts n as a parameter which is the integer argument
//                    corresponding to which the field width is to be set.
//
//        Return Value: This method does not returns anything.
//                      It only acts as stream manipulators.
//         *  "SET WIDTH"
//         * */
//
//        cout<<endl<<setw(5)<<rollNo<<'\n';
//        cout<<endl<<setw(20)<<fullName<<'\n';
//        cout<<endl<<setw(20)<<fullAddress<<'\n';
//        cout<<endl<<setw(5)<<division<<'\n';
//
//    }
//
//
//};
//
//
//class FileOperations{
//    fstream file;
//public:
//    FileOperations(char* fileName){
//        file.open(fileName,ios::in|ios::out|ios::ate|ios::binary);
//    }
//
//    void insertRecord(int rollNo, char fullName[SIZE], char fullAddress[SIZE], int division){
//        StudentData student(rollNo, fullName, fullAddress, division);
//
//        file.seekp(0,ios::end);
//    }
//};
//
//int main(){
//    return 0;
//}