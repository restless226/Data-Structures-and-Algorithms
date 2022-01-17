#include <iostream>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;


int Precedence(char c) {
    // We have 5 operators in total +,-,*,/,^
    if (c == '+' || c == '-') {
        return 1;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '^') {
        return 3;
    }

    return 0;
}


string InfixToPrefix(string infix) {

    string prefix;
    stack<char> stack;

    // REPLACING "(" with ")" and visa versa
    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
        } else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }


    // PROCESSING INFIX STRING FROM LAST CHARACTER
    for (int i = infix.length() - 1; i >= 0; i--) {

        // OPERANDS
        if (isalnum(infix[i])) {
            prefix += infix[i];
        }

            // PARENTHESIS '('
        else if (infix[i] == '(') {
            stack.push(infix[i]);
        }

            // PARENTHESIS ')'
        else if (infix[i] == ')') {
            while (!stack.empty() && stack.top() != '(') {
                prefix += stack.top();
                stack.pop();
            }

            // Popping and discarding '(' from TOS
            //TODO without if??
            if (stack.top() == '(') {
                stack.pop();
            }
        }

            //OPERATORS
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^') {

            if (stack.empty()) {
                stack.push(infix[i]);
            } else {
                if (Precedence(infix[i]) > Precedence(stack.top())) {
                    stack.push(infix[i]);
                } else if (Precedence(infix[i]) == Precedence(stack.top()) && infix[i] == '^') {

                    while (!stack.empty() && Precedence(infix[i]) == Precedence(stack.top())) {
                        prefix += stack.top();
                        stack.pop();
                    }

                    stack.push(infix[i]);
                } else if (Precedence(infix[i]) == Precedence(stack.top())) {
                    stack.push(infix[i]);
                } else if (Precedence(infix[i]) < Precedence(stack.top())) {

                    while (!stack.empty() && Precedence(infix[i]) < Precedence(stack.top())) {
                        prefix += stack.top();
                        stack.pop();
                    }

                    stack.push(infix[i]);
                }
            }

        }
    }

    while (!stack.empty()) {
        prefix += stack.top();
        stack.pop();
    }

    reverse(prefix.begin(), prefix.end());

    return prefix;
}


double PrefixEvaluation(string prefix) {

    stack<double> stack;
    double a, b;
    char prefix_char;

    // THIS IS BECAUSE WE EVALUATE PREFIX EVALUATION FROM RIGHT TO LEFT ALWAYS
    reverse(prefix.begin(), prefix.end());

    for (int i = 0; i < prefix.length(); i++) {
        if (isalpha(prefix[i])) {
            return INT_MIN;
        }
    }

    for (int i = 0; i < prefix.length(); i++) {
        prefix_char = prefix[i];

        // OPERANDS
        if (isdigit(prefix[i])) {
            prefix_char = (double) prefix_char;
            stack.push(prefix_char - '0');       //TODO (WHY)?
        }

            // OPERATORS
        else if (prefix[i] == '+' || prefix[i] == '-' || prefix[i] == '*' || prefix[i] == '/' || prefix[i] == '^') {

            a = stack.top();
            stack.pop();

            b = stack.top();
            stack.pop();

            switch (prefix_char) {
                case '+':
                    stack.push(b + a);
                    break;
                case '-':
                    stack.push(b - a);
                    break;
                case '*':
                    stack.push(b * a);
                    break;
                case '/':
                    stack.push(b / a);
                    break;
                case '^':
                    stack.push(pow(b, a));
                    break;
            }
        }
    }


    return stack.top();
}


int main() {
    string infix;
    cout << "ENTER INFIX EXPRESSION:" << endl;
    cin >> infix;

    cout << '\n';

    cout << "PREFIX EXPRESSION IS:" << endl;
    cout << InfixToPrefix(infix) << '\n' << '\n';

    cout << "PREFIX EVALUATION IS:" << endl;
    double value = PrefixEvaluation(InfixToPrefix(infix));

    if (value == INT_MIN) {
        cout << "[WARNING] Invalid Expression as it contains alphabets" << endl;
    } else {
        cout << value << '\n';
    }

    return 0;
}

/*
OUTPUT 1:

 ENTER INFIX EXPRESSION:
((a+b-c)*d^e^f)/g

PREFIX EXPRESSION IS:
*-+abc^d^efg

Process finished with exit code 0


OUTPUT 2:
ENTER INFIX EXPRESSION:
((1+2-3)*4^5^6)/7

PREFIX EXPRESSION IS:
*-+123^4^567

PREFIX EVALUATION IS:
0

Process finished with exit code 0


 */