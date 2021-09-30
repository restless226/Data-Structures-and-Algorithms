//#include <iostream>
//#include <stack>
//#include <cmath>
//
//using namespace std;
//
//
//int Precedence(char c){
//    // We have 5 operators in total +,-,*,/,^
//    if(c=='+' || c=='-'){
//        return 1;
//    }else if(c=='*' || c=='/'){
//        return 2;
//    }else if(c=='^'){
//        return 3;
//    }
//
//    return 0;
//}
//
//
//string InfixToPostfix(string infix){
//
//    string postfix;
//    stack<char> stack;
//
//    for (int i = 0; i < infix.length(); i++) {
//
//        // OPERANDS
////        if((infix[i] >= 'a' && infix[i] <= 'z')
////           ||(infix[i] >= 'A' && infix[i] <= 'Z'))
////        OR
//        if(isalnum(infix[i])){
//            postfix+=infix[i];
//        }
//
//        // PARENTHESIS '('
//        else if(infix[i]=='('){
//            stack.push(infix[i]);
//        }
//
//        // PARENTHESIS ')'
//        else if(infix[i]==')'){
//            while (!stack.empty() && stack.top()!='('){
//                postfix+=stack.top();
//                stack.pop();
//            }
//
//            // Popping and discarding '(' from TOS
//            //TODO without if??
//            if(stack.top()=='('){
//                stack.pop();
//            }
//        }
//
//        // OPERATOR
//        else if(infix[i]=='+'|| infix[i]=='-'|| infix[i]=='*'|| infix[i]=='/'|| infix[i]=='^'){
//
//            if(stack.empty()){
//                stack.push(infix[i]);
//            }
//
//            else if(Precedence(infix[i])>Precedence(stack.top())){
//                stack.push(infix[i]);
//            }
//
//            else if(Precedence(infix[i])==Precedence(stack.top()) && infix[i]=='^'){
//                stack.push(infix[i]);
//            }
//
//            else{
//                while(!stack.empty() && Precedence(infix[i])<=Precedence(stack.top())){
//                    postfix+=stack.top();
//                    stack.pop();
//                }
//
//                stack.push(infix[i]);
//            }
//        }
//
//    }
//
//    while (!stack.empty()){
//        postfix+=stack.top();
//        stack.pop();
//    }
//
//    return postfix;
//}
//
//
//double PostfixEvaluation(string postfix){
//
//    stack<double> stack;
//    double a,b;
//    char postfix_char;
//
//    for (int i = 0; i < postfix.length(); ++i) {
//        if(isalpha(postfix[i])){
//            return INT_MIN;
//        }
//    }
//
//    for (int i = 0; i < postfix.length(); i++) {
//        postfix_char=postfix[i];
//
//        // OPERANDS
//        if(isdigit(postfix[i])){
//            postfix_char=(double) postfix_char;
//            stack.push(postfix_char-'0');       //TODO (WHY)?
//        }
//
//        // OPERATORS
//        else if(postfix[i]=='+'|| postfix[i]=='-'|| postfix[i]=='*'|| postfix[i]=='/'|| postfix[i]=='^'){
//
//                a=stack.top();
//                stack.pop();
//
//                b=stack.top();
//                stack.pop();
//
//            switch(postfix_char){
//                case '+':
//                    stack.push(b+a);
//                    break;
//                case '-':
//                    stack.push(b-a);
//                    break;
//                case '*':
//                    stack.push(b*a);
//                    break;
//                case '/':
//                    stack.push(b/a);
//                    break;
//                case '^':
//                    stack.push(pow(b,a));
//                    break;
//            }
//        }
//    }
//
//
//    return stack.top();
//}
//
//int main(){
//    string infix;
//    cout<<"ENTER INFIX EXPRESSION:"<<endl;
//    cin>>infix;
//
//    cout<<'\n';
//
//    cout<<"POSTFIX EXPRESSION IS:"<<endl;
//    cout<<InfixToPostfix(infix)<<'\n'<<'\n';
//
//    cout<<"POSTFIX EVALUATION IS:"<<endl;
//    double value=PostfixEvaluation(InfixToPostfix(infix));
//
//    if(value==INT_MIN){
//        cout<<"[WARNING] Invalid Expression as it contains alphabets"<<endl;
//    }else{
//        cout<<value<<'\n';
//    }
//
//    return 0;
//}
//
//
///*
//OUTPUT 1:
//ENTER INFIX EXPRESSION:
//(a+b*(c-d))/e
//
//POSTFIX EXPRESSION IS:
//abcd-*+e/
//
//
//OUTPUT 2:
//ENTER INFIX EXPRESSION:
//2+(3*1)-9
//
//POSTFIX EXPRESSION IS:
//231*+9-
//
//POSTFIX EVALUATION IS:
//-4
//
//Process finished with exit code 0
//
//OUTPUT 3:
//ENTER INFIX EXPRESSION:
//a*b/c+e/f*g+k-x*y
//
//POSTFIX EXPRESSION IS:
//ab*c/ef/g*+k+xy*-
//
//POSTFIX EVALUATION IS:
//[WARNING] Invalid Expression as it contains alphabets
//
//Process finished with exit code 0
// */