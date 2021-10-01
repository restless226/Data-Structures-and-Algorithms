///*
// * Name : Rohit Pendse
// * Roll no : 23333
// * Subject : DSAL mock test
// * Date : 03/11/2020
//Problem Statement 16 :
//Write a program to create a Bank Account database with at least 4
//fields like Account No,Name, Accout type, Balance , and perform the
//following operations on it .
//1. Create database (enter 15 records at least)
//2. Display database
//3. Arrange the Account holder according to Account no using Selection sort
//3. Arrange the list of employee according to Name using insertion sort
//4. Search a Employee record according to Name , using binary search Also
//handle the unsuccessful search by displaying appropriate message.
//5. show the passwise out put while sorting and searching process.
// */
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Bank {
//private :
//
//    // private data members
//    struct accountDetails {
//        int accountNo;
//        string Name;
//        double balance;
//        string accType;
//    };
//
//    int count;
//    struct accountDetails details[15];
//
//public :
//    // parameterized constructor
//    Bank(int c) {
//        count = c;
//    }
//
//    // Method declarations
//    void enterDetails();
//
//    void selectionSort();
//
//    void insertionSort();
//
//    void binarySearch(int n);
//
//    void display();
//
//};
//
//// Function to input account details of a member
//void Bank::enterDetails() {
//    for (int i = 0; i < count; i++) {
//        cout << "Account Details for member" << i + 1 << endl;
//        cout << "Enter account holder's name:" << endl;
//        cin.ignore();
//        getline(cin, details[i].Name);
//        cout << "Enter account no:";
//        cin >> details[i].accountNo;
//        cout << "Enter your current account balance:";
//        cin >> details[i].balance;
//        cout << "Enter your account type:";
//        cin >> details[i].accType;
//        cout << endl;
//    }
//}
//
//// Selection sort function to arrange Account holder according to Account no
//void Bank::selectionSort() {
//    int index;
//    accountDetails temp;
//    int passes = 0;
//    int swaps = 0;
//
//    for (int i = 0; i < count - 1; i++) {
//        passes++;
//        index = i;
//        for (int j = i + 1; j < count; j++) {
//            if (details[j].accountNo < details[index].accountNo) {
//                swaps++;
//                index = j;
//                temp = details[index];
//                details[index] = details[i];
//                details[i] = temp;
//            }
//        }
//    }
//
//    cout << "no of swaps:" << swaps << endl;
//    cout << "no of passes:" << passes << endl;
//    display();
//}
//
//// Function to arrange the list of employee according to Name using insertion sort
//void Bank::insertionSort() {
//    accountDetails key;
//    int passes = 0;
//
//    for (int i = 0; i < count; i++) {
//        passes++;
//        key = details[i];
//        int j = i;
//        while (j > 0 && details[j - 1].Name > key.Name) {
//            details[j] = details[j - 1];
//            j--;
//        }
//        details[j] = key;
//    }
//
//    cout << "no of passes:" << passes << endl;
//    display();
//}
//
//// Function to search a record according to name using binary search
//void Bank::binarySearch(int n) {
//    string searchName;
//    int count = 0;
//    int l = 0;
//    int h = n - 1;
//    int mid;
//    cout << "Enter the name which to be searched" << endl;
//    cin.ignore();
//    getline(cin, searchName);
//    int passes = 0;
//
//    while (l <= h) {
//        mid = (l + h) / 2;
//        if (searchName == details[mid].Name) {
//            passes++;
//            cout << "Account no. : " << details[mid].accountNo << endl;
//            cout << "Balance : " << details[mid].balance << endl;
//            for (int i = 0; i < count; i++) {
//                if (searchName == details[i].Name) {
//                    cout << "Account no. : " << details[mid].accountNo << endl;
//                    cout << "Balance : " << details[mid].balance << endl;
//                }
//            }
//            count = 1;
//            cout << "no of passes:" << passes << endl;
//            break;
//        } else if ((searchName < details[mid].Name)) {
//            h = mid - 1;
//        } else {
//            l = mid + 1;
//        }
//    }
//    if (count == 0) {
//        cout << "Name not found" << endl;
//    }
//}
//
//// Function to display all details
//void Bank::display() {
//    int i;
//    cout << "Acc no" << "  " << " Acc holder name " << "        " << "Balance" << endl;
//    for (i = 0; i < count; i++) {
//        cout << details[i].accountNo << "   ";
//        cout << details[i].Name << "        ";
//        cout << details[i].balance << endl;
//    }
//}
//
//int main() {
//    int n, choice;
//    cout << "Enter no of members:" << endl;
//    cin >> n;
//    Bank b(n);
//    while (true) {
//        cout << "Enter your choice:" << endl;
//        cout<< "Press: \n1. To enter details \n2. To arrange by account no \n3. To arrange by name \n4. To search by name \n5. To exit the application"<< endl;
//        cin >> choice;
//        switch (choice) {
//            case 1:
//                b.enterDetails();
//                break;
//            case 2:
//                cout << "Members list sorted by account no:" << endl;
//                b.selectionSort();
//                break;
//            case 3 :
//                cout << "Members list sorted by name:" << endl;
//                b.insertionSort();
//                break;
//            case 4:
//                b.binarySearch(n);
//                break;
//            case 5:
//                _Exit(0);
//                break;
//            default :
//                cout << "Please enter valid choice" << endl;
//                break;
//        }
//    }
//    return 0;
//}
//
//// Output :
///*
//Enter no of members:
//5
//
//Enter your choice:
//Press:
//1. To enter details
//2. To arrange by account no
//3. To arrange by name
//4. To search by name
//5. To exit the application
//
//1
//
//Account Details for member1
//Enter account holder's name:
//Rohit
//Enter account no:
//1000
//Enter your current account balance:
//10000
//Enter your account type:
//savings
//
//Account Details for member2
//Enter account holder's name:
//Aditya
//Enter account no:
//2003
//Enter your current account balance:
//4000
//Enter your account type:
//current
//
//Account Details for member3
//Enter account holder's name:
//Tanvesh
//Enter account no:
//3005
//Enter your current account balance:
//50000
//Enter your account type:
//current
//
//Account Details for member4
//Enter account holder's name:
//Atharva
//Enter account no:
//3000
//Enter your current account balance:
//8000
//Enter your account type:
//current
//
//Account Details for member5
//Enter account holder's name:
//Mayur
//Enter account no:
//4001
//Enter your current account balance:
//30000
//Enter your account type:
//savings
//
//Enter your choice:
//Press:
//1. To enter details
//2. To arrange by account no
//3. To arrange by name
//4. To search by name
//5. To exit the application
//
//2
//
//Members list sorted by account no:
//no of swaps:1
//no of passes:4
//Acc no   Acc holder name         Balance
//1000   Rohit                10000
//2003   Aditya               4000
//3000   Atharva              8000
//3005   Tanvesh              50000
//4001   Mayur                30000
//
//Enter your choice:
//Press:
//1. To enter details
//2. To arrange by account no
//3. To arrange by name
//4. To search by name
//5. To exit the application
//
//3
//
//Members list sorted by name:
//no of passes:5
//Acc no   Acc holder name         Balance
//2003   Aditya               4000
//3000   Atharva              8000
//4001   Mayur                30000
//1000   Rohit                10000
//3005   Tanvesh              50000
//
//Enter your choice:
//Press:
//1. To enter details
//2. To arrange by account no
//3. To arrange by name
//4. To search by name
//5. To exit the application
//4
//Enter the name which to be searched
//Mayur
//Account no. : 4001
//Balance : 30000
//no of passes:1
//
//Enter your choice:
//Press:
//1. To enter details
//2. To arrange by account no
//3. To arrange by name
//4. To search by name
//5. To exit the application
//
//4
//
//Enter the name which to be searched
//xyz
//Name not found
//
//Enter your choice:
//Press:
//1. To enter details
//2. To arrange by account no
//3. To arrange by name
//4. To search by name
//5. To exit the application
//
//5
//
//Process finished with exit code 0
//
// */