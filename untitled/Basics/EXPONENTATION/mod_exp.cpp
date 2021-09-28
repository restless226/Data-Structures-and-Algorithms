///*
//TOPIC - MODULAR EXPONENTIATION
//Recursive approach
//*/
//
//#include <iostream>
//
//using namespace std;
//
//int modRecursive(int a, int b, int c) {
//    if (b == 0) {
//        return 1;
//    }
//
//    if (b % 2 == 0) {
//        return modRecursive((a * a) % c, b / 2, c);
//    } else {
//        return ((a % c) * modRecursive((a * a) % c, (b - 1) / 2, c)) % c;
//    }
//}
//
//int main() {
//    cout << "Value of a power b is: " << modRecursive(2, 50, 1e+7) << endl;
//    return 0;
//}