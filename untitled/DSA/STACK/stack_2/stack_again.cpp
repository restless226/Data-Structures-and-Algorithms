#include <iostream>

using namespace std;

//structure of node
template<typename T>
struct Node {
    T data;
    struct Node *next;
};

//creating class stack
template<class T>
class stack {
private:
    Node<T> *top = NULL;
    int max, count;
public :
    //declaration of constructor
    stack();

    //declaration of destructor
    ~stack();

    //decaration of functions
    void push(T);

    T pop();

    void display();

    T peep();

    bool isEmpty();

    bool isfull();

    string convertingtopostfix();

    char infix[100], postfix[100];
    char token, out;
};

//constructor
template<class T>
stack<T>::stack() {
    top = NULL;
    max = 10;
    count = 0;
}

//destructor
template<class T>
stack<T>::~stack() {
    Node<T> *temp = top;
    while (top != NULL) {
        temp = top;
        top = top->next;
        delete (temp);
    }
}

//function to check if stack is full
template<class T>
bool stack<T>::isfull() {
    if (count >= max) {
        return true;
    } else {
        return false;
    }
}

//function to check if stack is empty
template<class T>
bool stack<T>::isEmpty() {
    if (top == NULL) {
        return true;
    } else {
        return false;
    }
}

//function to add elements in stack
template<class T>
void stack<T>::push(T val) {

    if (isfull()) {
        cout << "Overflow condition!!!" << endl;
    } else {
        struct Node<T> *newnode = new Node<T>;
        newnode->data = val;
        newnode->next = top;
        top = newnode;
        count++;
        //cout<<"Now count is::"<<count;
    }
}

//function to delete elements from stack
template<class T>
T stack<T>::pop() {
    struct Node<T> *temp;
    if (isEmpty())
        cout << "Underflow condition!!!" << endl;

    else {
        T val;
        //cout<<"The popped element is "<<top->data<<endl;
        val = top->data;
        temp = top;
        top = top->next;
        delete temp;
        count--;
        //cout<<"Now count is::"<<count;
        return val;
    }

}

//function to display stack
template<class T>
void stack<T>::display() {
    struct Node<T> *ptr;
    //if stack is empty
    if (isEmpty())
        cout << "stack is empty";
    else {
        ptr = top;
        cout << "Stack elements are: ";
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    cout << endl;
}

//function to find out top element in stack
template<class T>
T stack<T>::peep() {
    if (isEmpty())
        cout << "Underflow condition!!!" << endl;
    else {
        return top->data;
    }
}

bool isoperand(char c) {
    return isdigit(c);
}


bool isoperator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
        return true;
    } else
        return false;
}

int precedance(char c1) {
    switch (c1) {
        case '+':
            return 1;
        case '-':
            return 1;
        case '*':
            return 2;
        case '/':
            return 2;
        case '^':
            return 3;
    }
}

int associativity(char c2) {
    switch (c2) {
        case '+':
            return 1;
        case '-':
            return 1;
        case '*':
            return 1;
        case '/':
            return 1;
        case '^':
            return 2;
    }
}

string postfix(string infix) {
    stack<char> s1;
    char token, out;
    string postfix;
    int count = 0;
    int i = 0, k = 0;
    while (infix[i] != '\0') {
        token = infix[i];
        if (isalnum(token)) {
            //	cout<<"\n\t In case 1 alphabate";
            postfix += token;
            count++;
            //post(k);
        }
        if (token == '(') {
            s1.push(token);
            //	cout<<"\n\tIn case '('";
        }
        if (token == ')') {
            //		cout<<"\n\tIn case 3')'";
            out = s1.pop();
            while (out != '(') {
                postfix += out;
                count++;
                out = s1.pop();
            }
        }
        if (isoperator(token)) {
            //	cout<<"\n\t In case 4 operator";
            if (s1.isEmpty())
                s1.push(token);
            else {
                if (s1.peep() == '(')
                    s1.push(token);

                else {
                    while (precedance(token) < precedance(s1.peep()) && (!s1.isEmpty())) {
                        postfix += s1.pop();
                        count++;
                    }
                    if (precedance(token) == precedance(s1.peep())) {
                        if (associativity(token) == 1) {
                            postfix += s1.pop();
                            s1.push(token);
                            count++;
                        }
                        if (associativity(token) == 2) {
                            s1.push(token);
                        }
                    } else { s1.push(token); }
                }
            }
        }
        i++;
    }
    //i++;

    while (!s1.isEmpty()) {
        postfix += s1.pop();
        count++;
    }
//	postfix[k]='\0';
//	post(k);
    return (postfix);
}

string reversestr(string strng) {
    for (int i = 0; i < strng.length() / 2; i++) {
        swap(strng[i], strng[strng.length() - i - 1]);
    }
    for (int i = 0; i < strng.length(); i++) {
        if (strng[i] == '(') {
            strng[i] = ')';
        } else if (strng[i] == ')') {
            strng[i] = '(';
        }
    }
    return (strng);
}

string prefix(string infixex) {
    string prefix, reverseinfix, reverseprefix;
    reverseinfix = reversestr(infixex);
    reverseprefix = postfix(reverseinfix);
    prefix = reversestr(reverseprefix);
    return (prefix);
}

double evaluateprefix(string exprsn) {
    stack<double> s2;
    for (int i = exprsn.length() - 1; i >= 0; i--) {
        if (isoperand(exprsn[i]))
            s2.push(exprsn[i] - '0');
        else {
            double op1 = s2.peep();
            s2.pop();
            double op2 = s2.peep();
            s2.pop();
            switch (exprsn[i]) {
                case '+':
                    s2.push(op1 + op2);
                    break;
                case '-':
                    s2.push(op1 - op2);
                    break;
                case '*':
                    s2.push(op1 * op2);
                    break;
                case '/':
                    s2.push(op1 / op2);
                    break;
                    /*	case '^':
                            s2.push(op1^op2);
                            break;*/
            }
        }
    }
    return s2.peep();
}

double evaluatepostfix(string expression) {
    stack<double> s3;
    for (int i = 0; i <= expression.length() - 1; i++) {
        if (isoperand(expression[i]))
            s3.push(expression[i] - '0');
        else {
            double op1 = s3.peep();
            s3.pop();
            double op2 = s3.peep();
            s3.pop();
            switch (expression[i]) {
                case '+':
                    s3.push(op2 + op1);
                    break;
                case '-':
                    s3.push(op2 - op1);
                    break;
                case '*':
                    s3.push(op2 * op1);
                    break;
                case '/':
                    s3.push(op2 / op1);
                    break;
                    /*	case '^':
                            s2.push(op1^op2);
                            break;*/
            }
        }
    }
    return s3.peep();
}

int main() {
    stack<char> s1;
    int n, count, choice;
    cout << "\nEnter no of terms in infix expression:" << endl;
    cin >> n;
    string infix, anspostfix, ansprefix;
    char token, out;

    cout << "\nEnter infix Expression:" << endl;
    cin >> infix;
    cout << "\nEntered infix expression" << endl;
    for (int j = 0; j < infix.length(); j++) {
        cout << infix[j] << " ";
    }
    while (1) {
        cout << "\n"
             << "\n1.Convert into postfix expression \n2.Convert into prefix expression \n3.Evaluation of postfix expression \n4.Evaluation of prefix expression \n5.Exit"
             << endl;
        cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\nPostfix expression:" << endl;
                anspostfix = postfix(infix);
                cout << "\n" << " " << anspostfix;
                break;

            case 2:
                cout << "\nPrefix expression:" << endl;
                ansprefix = prefix(infix);
                cout << "\n" << " " << ansprefix;
                break;

            case 3:
                cout << "\nValue of postfix expression:" << endl;
                anspostfix = postfix(infix);
                cout << "\n" << evaluatepostfix(anspostfix);
                break;

            case 4:
                cout << "\nValue of prefix expression:" << endl;
                ansprefix = prefix(infix);
                cout << "\n" << evaluateprefix(ansprefix);
                break;

            case 5:
                exit(0);
                break;

            default:
                cout << "\nInvali choice" << endl;
                break;
        }
    }
}