//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//string PrefixtoInfix(string postfix1){
//    stack<string> s;
//    for(int i=0;i<postfix1.length();i++) {
//        if ((postfix1[i] >= 'a' && postfix1[i] <= 'z') || (postfix1[i] >= 'A' && postfix1[i] <= 'Z')) {
//            string op(1,postfix1[i]);
//            s.push(op);
//        } else{
//            string op1=s.top();
//            s.pop();
//            string op2=s.top();
//            s.pop();
//            s.push("("+op2+postfix1[i]+op1+")");
//        }
//    }
//    return s.top();
//}
//
//int main() {
//    string infix,postfix;
//
//    cout<<"Enter postfix expression:"<<endl;
//    cin>>postfix;
//    stack<char> stack;
//
//    infix=PrefixtoInfix(postfix);
//
//    cout<<"Prefix expression:"<<infix<<endl;
//}