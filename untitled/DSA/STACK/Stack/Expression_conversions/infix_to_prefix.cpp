#include <iostream>
#include <stack>

using namespace std;

bool isOperator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
        return true;
    } else {
        return false;
    }
}


int precedence(char c) {
    if (c == '^') {
        return 3;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '+' || c == '-') {
        return 1;
    } else {
        return -1;
    }
}

string InfixtoPrefix(stack<char> s, string infix1) {
    string prefix1 = "";
    string infix2 = "";

    // reverse infix1
    for (int i = infix1.length() - 1; i >= 0; i--) {
        infix2 += infix1[i];
    }

    // replacing brackets
    for (int i = 0; i < infix2.length(); i++) {
        if (infix2[i] == '(') {
            infix2[i] = ')';
        } else if (infix2[i] == ')') {
            infix2[i] = '(';
        }
    }

    // actual code
    for (int i = 0; i < infix2.length(); i++) {
        // OPERAND
        if ((infix2[i] >= 'a' && infix2[i] <= 'z') || (infix2[i] >= 'A' && infix2[i] <= 'Z')) {
            prefix1 += infix2[i];
            // BRACKET '('
        } else if (infix2[i] == '(') {
            s.push(infix2[i]);
            // BRACKET ')'
        } else if (infix2[i] == ')') {
            while (!s.empty() && s.top() != '(') {
                prefix1 += s.top();
                s.pop();
            }
            if (s.top() == '(') {
                s.pop();
            }
            // OPERATOR
        } else if (isOperator(infix2[i])) {
            if (s.empty()) {
                s.push(infix2[i]);
            } else {
                if (precedence(infix2[i]) > precedence(s.top())) {
                    s.push(infix2[i]);
                } else if (precedence(infix2[i]) == precedence(s.top()) && infix2[i] == '^') {
                    while (precedence(infix2[i]) == precedence(s.top()) && infix2[i] == '^') {
                        prefix1 += s.top();
                        s.pop();
                    }
                    s.push(infix2[i]);
                } else if (precedence(infix2[i]) == precedence(s.top())) {
                    s.push(infix2[i]);
                } else {
                    while (!s.empty() && precedence(infix2[i]) < precedence(s.top())) {
                        prefix1 += s.top();
                        s.pop();
                    }
                    s.push(infix2[i]);
                }
            }
        }
    }

    while (!s.empty()) {
        prefix1 += s.top();
        s.pop();
    }

    string prefix2;
    // reverse prefix1
    for (int i = prefix1.length() - 1; i >= 0; i--) {
        prefix2 += prefix1[i];
    }

    return prefix2;
}

int main() {
    string infix, prefix;
    cout << "Enter infix expression:" << endl;
    cin >> infix;
    stack<char> stack;

    prefix = InfixtoPrefix(stack, infix);

    cout << "Prefix expression:" << prefix << endl;
    return 0;
}