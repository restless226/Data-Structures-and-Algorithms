/* Name : Rohit Pendse
	Roll no. : 23333
	Subject : Data Structures and Algorithms
*/

#include <iostream>
#include <cmath>
// declaring input variables
char op;
float num1, num2;


using namespace std;

//function for subtraction
float sub(float a, float b) {
    return a - b;
}


//function for multiplication
float multiply(float a, float b) {
    return round(a * b);
}


//function for division
float divide(double a, double b) {
    return a / b;

}

//function to calculate remainder
float calculate_remainder(double a, double b) {
    // remainder
    return remainder(a, b)+b;
}

int main() {

    cout << "enter your operation - , * , /:";
    //User entered the desired operation
    cin >> op;

    // initializing input variables by taking input from user
    cout << "enter first number:";
    cin >> num1;
    cout << "enter second number:";
    cin >> num2;


    switch (op) {

        //the case is executed if subtraction is asked
        case '-':
            cout << "your result of subtraction is " << sub(num1, num2);
            break;


            //the case is executed if multiplication is asked
        case '*':
            cout << "your result of multiplication is " << multiply(num1, num2);
            break;


            //the case is executed if division is asked
        case '/':
            cout << "your result of division is " << divide(num1, num2) << endl;
            cout << "your remainder of division is:" << calculate_remainder(num1, num2) << endl;
            break;


            //the case is executed if user enter invalid operation
        default:
            cout << "Please enter correct operation sign.";
            break;


    }

    return 0;

}


// Output for test cases:
/*

Test case 1:
*
enter your operation - , * , /:-
enter first number:74
enter second number:45
your result of subtraction is 29

Test case 2:
*
enter your operation - , * , /:/
enter first number:5
enter second number:3
your result of division is 1.66667
your remainder of division is:2

Test case 3:
*
enter your operation - , * , /:*
enter first number:12
enter second number:7
your result of multiplication is 84
*/



