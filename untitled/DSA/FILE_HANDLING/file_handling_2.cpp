#include <iostream>
#include <fstream>

using namespace std;

int main() {

    char arr[100];

    cout << "Enter name and age:" << endl;
    cin.get(arr, 19);

    int x;
    float y;


    ofstream myFile("xyz.txt");
    // [NOTE]: It by default opens up th file
    // so we can directly write into it

//    myFile.open("xyz.txt");

    if (myFile.is_open()) {
        myFile << arr;
    }

    myFile.close();

    cout << "File write operation performed successfully" << endl;


    return 0;
}