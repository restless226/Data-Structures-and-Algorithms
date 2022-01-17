#include <iostream>
#include <stack>

using namespace std;

string PrefixtoInfix(string prefix) {
    stack<string> s;
    for (int i = prefix.length() - 1; i >= 0; i--) {
        if ((prefix[i] >= 'a' && prefix[i] <= 'z') || (prefix[i] >= 'A' && prefix[i] <= 'Z')) {
            string op(1, prefix[i]);
            s.push(op);
        } else {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push("(" + op1 + prefix[i] + op2 + ")");
        }
    }
    return s.top();
}

int main() {
    string infix, prefix;
    cout << "Enter prefix expression:" << endl;
    cin >> prefix;
    stack<char> stack;

    infix = PrefixtoInfix(prefix);

    cout << "Infix expression:" << infix << endl;
    return 0;
}