#include <iostream>
#include <fstream>
#include <cstring>


using namespace std;


class Book {
private:
    int bookId;
    char title[20];
    float price;

public:
    Book() {
        bookId = 0;
        strcpy(title, "no title");
        price = 0;
    }

    void getBookData() {
        cout << "Enter bookId, price and title of book respectively:" << endl;
        cin >> bookId >> title >> price;
    }

    void showBookData() {
        cout << '\n' << bookId << " " << title << " " << price << '\n';

    }

    void storeBook();
};


void Book::storeBook() {

    if (bookId == 0 && price == 0) {
        cout << "[WARNING] Book data not initialized" << '\n';
        return;
    }

    ofstream fout;  // to perform writing operation in file
    fout.open("file1.txt", ios::app | ios::binary);

    fout.write((char *) this, sizeof(*this));
    fout.close();

    cout << "Book data inserted into file successfully" << '\n';
}

int main() {
    Book b1, b2;

    b1.getBookData();
    b1.showBookData();
    b1.storeBook();


    b2.showBookData();
    b2.storeBook();

    return 0;
}