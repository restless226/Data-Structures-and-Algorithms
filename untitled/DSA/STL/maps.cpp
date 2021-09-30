//// map is an associative array
//// used to store key-value pairs
//
//#include <iostream>
//#include <map>
//
//using namespace std;
//
//int main() {
//    map<string, int> marksMap;
//
//    marksMap["Harry"] = 98;
//    marksMap["Sarvesh"] = 2;
//    marksMap["Rohit"] = 47;
//
//    // inserting values
//    marksMap.insert({{"Natasha", 69},
//                     {"yagami",  74}});
//
//    map<string, int>::iterator iter;
//    for (iter = marksMap.begin(); iter != marksMap.end(); iter++) {
//        cout << (*iter).first << " " << (*iter).second << endl;
//    }
//
//
//    cout << "size:" << marksMap.size() << endl;
//    cout << "max size:" << marksMap.max_size() << endl;
//    cout << "empty or not:" << marksMap.empty() << endl;
//
//    return 0;
//}