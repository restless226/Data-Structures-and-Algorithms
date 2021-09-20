//#include "Stack.h"
//#include <iostream>
//using namespace std;
//
//template <typename T>
//Stack<T> ::Stack()
//{
//    max_size = 0;
//}
//template<typename T>
//Stack<T>::Stack(int c)
//{
//    max_size = c;
//    top = NULL;
//    count = 0;
//}
//
//template <typename T>
//bool Stack<T>::isEmpty()
//{
//    if(top==NULL)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//template <typename T>
//bool Stack<T>::isFull()
//{
//    if(count==max_size)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//template <typename T>
//Node<T>* Stack<T>::getNode(T d)
//{
//    Node<T>* temp = new Node<T>;
//    temp->data = d;
//    //temp->next = NULL;
//    return temp;
//}
//template<typename T>
//void Stack<T>::push(T data)
//{
//    Node<T> * new_node = getNode(data);
//
//    //Checking if the stack is empty.
//    if(isEmpty())
//    {
//        top = new_node;
//        count++;
//        //cout<<"Node added Successfully!!"<<endl;
//    }
//        //Checking if the stack is full.
//    else if(isFull())
//    {
//        cout<<"Stack Overflow"<<endl;
//    }
//    else
//    {
//        new_node->next = top;
//        top = new_node;
//        count++;
//        //cout<<"Node PUSHED successfully"<<endl;
//    }
//}
//template <typename T>
//T Stack<T>::pop()
//{
//    Node<T>* temp = NULL;
//    T d = top->data;
//    if(isEmpty())
//    {
//        cout<<"STACK underflow"<<endl;
//        return 0;
//    }
//    else if(top->next==NULL)
//    {
//        temp = top;
//        top = NULL;
//        delete temp;
//        count--;
//        //cout<<"Node popped successfully! Now Stack underflow"<<endl;
//    }
//    else
//    {
//        temp = top;
//        top = top->next;
//        temp->next = NULL;
//        delete temp;
//        count--;
//        // cout<<"Node popped successfully"<<endl;
//    }
//    return d;
//}
//template <typename T>
//T Stack<T>::peep()
//{
//    T d = top->data;
//    if(isEmpty())
//    {
//        cout<<"STACK underflow"<<endl;
//        return 0;
//    }
//    else
//    {
//        return d;
//    }
//}
//template <typename T>
//void Stack<T>::display()
//{
//    if(isEmpty())
//    {
//        cout<<"Empty";
//        //cout<<"Stack Underflow"<<endl;
//        //cout<<"No values to display"<<endl;
//    }
//    else
//    {
//        Node<T>* temp = top;
//        //cout<<"All values in the stack are:"<<endl;
//        while(temp!=NULL)
//        {
//            cout<<temp->data;
//            temp = temp->next;
//        }
//
//    }
//}
//template <typename T>
//int Stack<T>::counts()
//{
//    return count;
//}
//
//
//
//
//
//bool Expression::isOperator(char c)
//{
//    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//
//int Expression::precedence(char c)
//{
//    if(c=='^')
//        return 3;
//    else if(c=='*'||c=='/')
//        return 2;
//    else if(c=='+'||c=='-')
//        return 1;
//    else
//        return -1;
//}
//string Expression::InfixToPostfix(Stack<char> s,string infix)
//{
//
//    string postfix;
//    cout<<"Postfix Expression conversion Table"<<endl;
//    cout<<"Input Token                  Stack                   Postfix expression"<<endl;
//    for(int i=0; i<infix.length(); i++)
//    {
//        if(isalnum(infix[i]))
//        {
//            postfix+=infix[i];
//
//        }
//        else if(infix[i]=='(')
//        {
//            s.push(infix[i]);
//
//        }
//        else if(infix[i]==')')
//        {
//            while((s.peep()!='(')&&(!s.isEmpty()))
//            {
//                char temp = s.peep();
//                postfix+=temp;
//                s.pop();
//            }
//            if(s.peep()=='(')
//            {
//                s.pop();
//            }
//        }
//        else if(isOperator(infix[i]))
//        {
//            if(s.isEmpty())
//            {
//                s.push(infix[i]);
//            }
//            else
//            {
//                if(precedence(infix[i])>precedence(s.peep()))
//                {
//                    s.push(infix[i]);
//                }
//                else if(precedence(infix[i])==precedence(s.peep())&&(infix[i]=='^'))
//                {
//                    s.push(infix[i]);
//                }
//                else
//                {
//                    while((!s.isEmpty())&&(precedence(infix[i])<=precedence(s.peep())))
//                    {
//                        postfix+=s.peep();
//                        s.pop();
//                    }
//                    s.push(infix[i]);
//                }
//
//            }
//        }
//        cout<<infix[i];
//        cout<<"\t\t\t\t";
//        s.display();
//        cout<<"\t\t\t\t";
//        cout<<postfix<<endl;
//    }
//    while(!s.isEmpty())
//    {
//        postfix+=s.peep();
//        cout<<s.peep();
//        s.pop();
//        cout<<"\t\t\t\t";
//        s.display();
//        cout<<"\t\t\t\t";
//        cout<<postfix<<endl;
//    }
//
//    cout<<endl<<endl;
//    cout<<"PostFix expression: "<<postfix<<endl;
//    return postfix;
//}
//string Expression::Reverse(string s)
//{
//    string rev;
//    for(int i = s.length()-1;i>=0;i--)
//    {
//        rev+=s[i];
//    }
//    for(int i=0;i<rev.length();i++)
//    {
//        if(rev[i]=='(')
//        {
//            rev[i]=')';
//        }
//        else if(rev[i]==')')
//        {
//            rev[i] = '(';
//        }
//    }
//
//    return rev;
//}
//
//string Expression::InfixToPrefix(Stack<char> s,string infix)
//{
//
//    string Prefix;
//    string rev_infix = Reverse(infix);
//    cout<<"Prefix Expression conversion Table"<<endl;
//    cout<<"Input Token                  Stack                   Prefix expression"<<endl;
//    for(int i = 0;i<rev_infix.length();i++)
//    {
//        if(isalnum(rev_infix[i]))
//        {
//            Prefix+=rev_infix[i];
//        }
//        else if(rev_infix[i]=='(')
//        {
//            s.push(rev_infix[i]);
//        }
//        else if(rev_infix[i]==')')
//        {
//            while((s.peep()!='(')&&(!s.isEmpty()))
//            {
//                Prefix+=s.peep();
//                s.pop();
//            }
//            if(s.peep()=='(')
//            {
//                s.pop();
//            }
//        }
//        else if(isOperator(rev_infix[i]))
//        {
//            if(s.isEmpty())
//            {
//                s.push(rev_infix[i]);
//            }
//            else
//            {
//                if(precedence(rev_infix[i])>precedence(s.peep()))
//                {
//                    s.push(rev_infix[i]);
//                }
//                else if((precedence(rev_infix[i])==precedence(s.peep()))&&(rev_infix[i]=='^'))
//                {
//                    while((precedence(rev_infix[i])==precedence(s.peep()))&&(rev_infix[i]=='^'))
//                    {
//                        Prefix+=s.peep();
//                        s.pop();
//                    }
//                    s.push(rev_infix[i]);
//
//                }
//                else if(precedence(rev_infix[i])==precedence(s.peep()))
//                {
//                    s.push(rev_infix[i]);
//                }
//                else if(precedence(rev_infix[i])<precedence(s.peep()))
//                {
//                    while((!s.isEmpty())&&(precedence(rev_infix[i])<precedence(s.peep())))
//                    {
//                        Prefix+=s.peep();
//                        s.pop();
//                    }
//                    s.push(rev_infix[i]);
//                }
//            }
//        }
//        cout<<infix[i];
//        cout<<"\t\t\t\t";
//        s.display();
//        cout<<"\t\t\t\t";
//        cout<<Reverse(Prefix)<<endl;
//    }
//    while(!s.isEmpty())
//    {
//        Prefix+=s.peep();
//        cout<<s.peep();
//        s.pop();
//        cout<<"\t\t\t\t";
//        s.display();
//        cout<<"\t\t\t\t";
//        cout<<Reverse(Prefix)<<endl;
//    }
//    cout<<endl<<endl<<endl;
//    string Final_prefix = Reverse(Prefix);
//    cout<<"Prefixed Expression!!"<<Final_prefix<<endl;
//    return Final_prefix;
//}
//
//void Expression::PostfixEvaluation(Stack<char> s, string expression)
//{
//    string postFix = InfixToPostfix(s,expression);
//    Stack<double> value(100);
//    char token;
//    for(int i=0;i<(postFix.length());i++)
//    {
//        token = postFix[i];
//        if(isalnum(token))
//        {
//            token = (double)token;
//            value.push(token - '0');
//        }
//        else if(isOperator(token)){
//            double num1 = value.peep();
//            value.pop();
//            double num2 = value.peep();
//            value.pop();
//
//            switch(token)
//            {
//                case '+':
//                    value.push(num2+num1);
//                    break;
//                case '-':
//                    value.push(num2-num1);
//                    break;
//                case '*':
//                    value.push(num2-num1);
//                    break;
//                case '/':
//                    value.push(num2/num1);
//                    break;
//                case '^':
//                    value.push(pow(num2,num1));
//                    break;
//            }
//        }
//    }
//    cout<<"Answer of Postfix evaluation is: "<<value.pop()<<endl;
//
//}
//
//void Expression::PrefixEvaluation(Stack<char> s, string Expression)
//{
//    string preFix = InfixToPrefix(s,Expression);
//    Stack<double> value(100);
//    string reversed_preFix = Reverse(preFix);
//    char token;
//
//    for(int i=0;i<reversed_preFix.length();i++)
//    {
//        token = reversed_preFix[i];
//        if(isalnum(token))
//        {
//            token = (double)token;
//            value.push(token - '0');
//        }
//        else if(isOperator(token))
//        {
//            double n1 = value.pop();
//            double n2 = value.pop();
//            switch(token)
//            {
//                case '+':
//                    value.push(n1+n2);
//                    break;
//                case '-':
//                    value.push(n1-n2);
//                    break;
//                case '*':
//                    value.push(n1*n2);
//                    break;
//                case '/':
//                    value.push(n1/n2);
//                    break;
//                case '^':
//                    value.push(pow(n1,n2));
//                    break;
//            }
//        }
//    }
//    cout<<"Value of Prefix Evaluation is: "<<value.pop()<<endl;
//}
//
//bool Expression::Validate_expression(string expression)
//{
//    bool flag = true;
//    int ob=0,cb=0,operators=0,operands=0;
//    int l = expression.length();
//    char first = expression[0];
//    char last = expression[l];
//    if(!isalnum(first)&&!isalnum(last))
//    {
//        flag = false;
//    }
//    for(int i=0;i<expression.length();i++)
//    {
//        if((!isOperator(expression[i]))&&(!isalnum(expression[i])))
//        {
//            flag = false;
//        }
//        if(isOperator(expression[i])&&isOperator(expression[i+1]))
//        {
//            flag = false;
//        }
//        if(expression[i]=='(')
//        {
//            ob++;
//        }
//        else if(expression[i]==')')
//        {
//            cb++;
//        }
//        if(isalnum(expression[i]))
//        {
//            operands++;
//        }
//        else if(isOperator(expression[i]))
//        {
//            operators++;
//        }
//    }
//    if(ob!=cb)
//    {
//        flag = false;
//    }
//    if(operators!=(operands-1))
//    {
//        flag = false;
//    }
//
//    return flag;
//}