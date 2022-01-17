#include <iostream>
#include <list>
#include <string>

using namespace std;

class HashTable {
private:
    static const int hashGroups = 10;
    list<pair<int, string>> table[hashGroups];
public:
    bool isEmpty();

    int hashFunction(int key);

    void insertionItem(int key, string value);

    void removeItem(int key);

    string searchTable(int key);

    void printTable();

};

bool HashTable::isEmpty() {
    int sum = 0;
    for (int i = 0; i < hashGroups; i++) {
        sum += table[i].size();
    }
    if (sum == 0) {
        return true;
    } else {
        return false;
    }
}

int HashTable::hashFunction(int key) {
    return (key % hashGroups);
}

void HashTable::insertionItem(int key, string value) {
    int hashValue = hashFunction(key);
    auto &cell = table[hashValue];
    bool keyExists = false;

    for (auto itr = cell.begin(); itr != cell.end(); itr++) {
        if (itr->first == key) {
            keyExists = true;
            itr->second = value;
            cout << "[WARNING] Key already exists. Value replaced successfully" << endl;
            break;
        }
    }
    if (!keyExists) {
        cell.emplace_back(key, value);
        cout << "Item inserted successfully" << endl;
    }
}

void HashTable::removeItem(int key) {
    if (isEmpty()) {
        cout << "[WARNING] Hashtable is Empty nothing to remove..." << endl;
        return;
    }

    int hashValue = hashFunction(key);
    auto &cell = table[hashValue];
    bool keyExists = false;

    for (auto itr = cell.begin(); itr != cell.end(); itr++) {
        if (itr->first == key) {
            keyExists = true;
            itr = cell.erase(itr);
            cout << "[INFO] Item removed" << endl;
            break;
        }
    }

    if (!keyExists) {
        cout << "[WARNING] Key not found. Pair not removed" << endl;
    }
}

string HashTable::searchTable(int key) {
    bool flag = false;

    if (isEmpty()) {
        return "[WARNING] Hashtable is Empty nothing to search...";
    }

    for (int i = 0; i < hashGroups; i++) {
        if (table[i].size() == 0) {
            continue;
        } else if (table[i].begin()->first == key) {
            flag = true;
            return "Key: " + to_string(table[i].begin()->first) + " Value:" + table[i].begin()->second;
        }
    }
    if (!flag) {
        return "[WARNING] Key not found";
    }
}

void HashTable::printTable() {
    if (isEmpty()) {
        cout << "[WARNING] Hashtable is Empty nothing to print..." << endl;
        return;
    }

    cout << "Printing hashtable..." << endl;
    for (int i = 0; i < hashGroups; i++) {
        if (table[i].size() == 0) {
            continue;
        }

        for (auto itr = table[i].begin(); itr != table[i].end(); itr++) {
            cout << "[INFO] Key: " << itr->first << " Value: " << itr->second << endl;
        }
    }
}

int main() {
    HashTable ht;

    int ch = 0;
    int key;
    string value;

    while (true) {
        cout << "Enter your choice:" << endl;
        cout << "Press:\n1 isEmpty \n2 insertItem \n3 removeItem \n4 searchItem \n5 printTable \n6 Exit" << endl;
        cin >> ch;

        switch (ch) {
            case 1:
                if (ht.isEmpty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << "not empty" << endl;
                }
                cout << endl;
                break;
            case 2:
                cout << "Enter key of item you want to insert:" << endl;
                cin >> key;
                cout << "Enter value of item you want to insert:" << endl;
                cin >> value;
                ht.insertionItem(key, value);
                cout << endl;
                break;
            case 3:
                cout << "Enter key of item you want to remove:" << endl;
                cin >> key;
                ht.removeItem(key);
                cout << endl;
                break;
            case 4:
                cout << "Enter key of item you want to search:" << endl;
                cin >> key;
                cout << ht.searchTable(key) << endl;
                cout << endl;
                break;
            case 5:
                ht.printTable();
                cout << endl;
                break;
            case 6:
                _Exit(0);
        }
    }
    return 0;
}

/*
OUTPUT:
Enter your choice:
Press:
1 isEmpty
2 insertItem
3 removeItem
4 searchItem
5 printTable
6 Exit
1
Empty

Enter your choice:
Press:
1 isEmpty
2 insertItem
3 removeItem
4 searchItem
5 printTable
6 Exit
2
Enter key of item you want to insert:
100
Enter value of item you want to insert:
Rohit
Item inserted successfully

Enter your choice:
Press:
1 isEmpty
2 insertItem
3 removeItem
4 searchItem
5 printTable
6 Exit
2
Enter key of item you want to insert:
101
Enter value of item you want to insert:
Kane
Item inserted successfully

Enter your choice:
Press:
1 isEmpty
2 insertItem
3 removeItem
4 searchItem
5 printTable
6 Exit
2
Enter key of item you want to insert:
104
Enter value of item you want to insert:
Sarwate
Item inserted successfully

Enter your choice:
Press:
1 isEmpty
2 insertItem
3 removeItem
4 searchItem
5 printTable
6 Exit
2
Enter key of item you want to insert:
125
Enter value of item you want to insert:
Tanvesh
Item inserted successfully

Enter your choice:
Press:
1 isEmpty
2 insertItem
3 removeItem
4 searchItem
5 printTable
6 Exit
5
Printing hashtable...
[INFO] Key: 100 Value: Rohit
[INFO] Key: 101 Value: Kane
[INFO] Key: 104 Value: Sarwate
[INFO] Key: 125 Value: Tanvesh

Enter your choice:
Press:
1 isEmpty
2 insertItem
3 removeItem
4 searchItem
5 printTable
6 Exit
3
Enter key of item you want to remove:
127
[WARNING] Key not found. Pair not removed

Enter your choice:
Press:
1 isEmpty
2 insertItem
3 removeItem
4 searchItem
5 printTable
6 Exit
3
Enter key of item you want to remove:
100
[INFO] Item removed

Enter your choice:
Press:
1 isEmpty
2 insertItem
3 removeItem
4 searchItem
5 printTable
6 Exit
5
Printing hashtable...
[INFO] Key: 101 Value: Kane
[INFO] Key: 104 Value: Sarwate
[INFO] Key: 125 Value: Tanvesh

Enter your choice:
Press:
1 isEmpty
2 insertItem
3 removeItem
4 searchItem
5 printTable
6 Exit
4
Enter key of item you want to search:
105
[WARNING] Key not found

Enter your choice:
Press:
1 isEmpty
2 insertItem
3 removeItem
4 searchItem
5 printTable
6 Exit
4
Enter key of item you want to search:
104
Key: 104 Value:Sarwate

Enter your choice:
Press:
1 isEmpty
2 insertItem
3 removeItem
4 searchItem
5 printTable
6 Exit
6

Process finished with exit code 0
 */