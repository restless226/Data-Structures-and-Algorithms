//#include <iostream>
//
//using namespace std;
//
////structure of node
//template<typename T>
//struct Node {
//    T data;
//    struct Node *next;
//};
//
////creating class stack
//template<class T>
//class stack {
//private:
//    Node<T> *top = NULL;
//    int max, count;
//public :
//    //declaration of constructor
//    stack();
//
//    //declaration of destructor
//    ~stack();
//
//    //decaration of functions
//    void push(T);
//
//    T pop();
//
//    void display();
//
//    T peep();
//
//    bool isempty();
//
//    bool isfull();
//};
//
////constructor
//template<class T>
//stack<T>::stack() {
//    top = NULL;
//    max = 10;
//    count = 0;
//}
//
////destructor
//template<class T>
//stack<T>::~stack() {
//    Node<T> *temp = top;
//    while (top != NULL) {
//        temp = top;
//        top = top->next;
//        delete (temp);
//    }
//}
//
////function to check if stack is full
//template<class T>
//bool stack<T>::isfull() {
//    if (count >= max) {
//        return true;
//    } else {
//        return false;
//    }
//}
//
////function to check if stack is empty
//template<class T>
//bool stack<T>::isempty() {
//    if (top == NULL) {
//        return true;
//    } else {
//        return false;
//    }
//}
//
////function to add elements in stack
//template<class T>
//void stack<T>::push(T val) {
//
//    if (isfull()) {
//        cout << "Overflow condition!!!" << endl;
//    } else {
//        struct Node<T> *newnode = new Node<T>;
//        newnode->data = val;
//        newnode->next = top;
//        top = newnode;
//        count++;
//        //cout<<"Now count is::"<<count;
//    }
//}
//
////function to delete elements from stack
//template<class T>
//T stack<T>::pop() {
//    struct Node<T> *temp;
//    if (isempty())
//        cout << "Underflow condition!!!" << endl;
//
//    else {
//        T val;
//        //cout<<"The popped element is "<<top->data<<endl;
//        val = top->data;
//        temp = top;
//        top = top->next;
//        delete temp;
//        count--;
//        //cout<<"Now count is::"<<count;
//        return val;
//    }
//
//}
//
////function to display stack
//template<class T>
//void stack<T>::display() {
//    struct Node<T> *ptr;
//    //if stack is empty
//    if (isempty())
//        cout << "stack is empty";
//    else {
//        ptr = top;
//        cout << "Stack elements are: ";
//        while (ptr != NULL) {
//            cout << ptr->data << " ";
//            ptr = ptr->next;
//        }
//    }
//    cout << endl;
//}
//
////function to find out top element in stack
//template<class T>
//T stack<T>::peep() {
//    if (isempty())
//        cout << "Underflow condition!!!" << endl;
//    else {
//        return top->data;
//    }
//}
//
//bool isoperator(char c) {
//    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
//        return true;
//    } else
//        return false;
//}
//
//int precedence(char c1) {
//    switch (c1) {
//        case '+':
//            return 1;
//        case '-':
//            return 1;
//        case '*':
//            return 2;
//        case '/':
//            return 2;
//        case '^':
//            return 3;
//    }
//}
//
//int associativity(char c2) {
//    switch (c2) {
//        case '+':
//            return 1;
//        case '-':
//            return 1;
//        case '*':
//            return 1;
//        case '/':
//            return 1;
//        case '^':
//            return 2;
//    }
//}
//
//int main() {
//    stack<char> s1;
//    cout << "Enter no of terms in infix expression";
//    int n;
//    cin >> n;
//    char infix[100], postfix[100];
//    char token, out;
//    cout << "Enter infix Expression:" << endl;
//
//    for (int i = 0; i < n; i++) {
//        cin >> infix[i];
//    }
//    cout << "Entered infix expression" << endl;
//    for (int j = 0; j < n; j++) {
//        cout << infix[j] << " ";
//    }
//    int i = 0, k = 0;
//    while (infix[i] != '\0') {
//        token = infix[i];
//        if (isalnum(token)) {
//            cout << "\n\t In case 1 alphabate";
//            postfix[k++] = token;
//
//        }
//        if (token == '(') {
//            s1.push(token);
//            cout << "\n\tIn case '('";
//        }
//        if (token == ')') {
//            cout << "\n\tIn case 3')'";
//            out = s1.pop();
//            while (out != '(') {
//                postfix[k++] = out;
//                out = s1.pop();
//            }
//        }
//        if (isoperator(token)) {
//            cout << "\n\t In case 4 operator";
//            if (s1.isempty())
//                s1.push(token);
//            else {
//                if (s1.peep() == '(')
//                    s1.push(token);
//
//                else {
//                    while (precedence(token) < precedence(s1.peep()) && (!s1.isempty())) {
//                        postfix[k++] = s1.pop();
//                    }
//                    if (precedence(token) == precedence(s1.peep())) {
//                        if (associativity(token) == 1) {
//                            postfix[k++] = s1.pop();
//                            s1.push(token);
//                        }
//                        if (associativity(token) == 2) {
//                            s1.push(token);
//                        }
//                    } else { s1.push(token); }
//                }
//            }
//        }
//        i++;
//    }
//
//
//    while (!s1.isempty())
//        postfix[k++] = s1.pop();
//    postfix[k] = '\0';
//
//
//    int z = 0;
//
//    cout << "Postfix Expression : ";
//
//
//    for (z = 0; z <= n; z++) {
//        cout << postfix[z] << " ";
//    }
//
//}