//#include <iostream>
//
//using namespace std;
//
//class Stack{
//private:
//    int arr[5];
//    int top;
//public:
//    Stack(){
//        top=-1;
////        for(int i=0;i<sizeof(arr);i++){
////            arr[i]=0;
////        }
//    }
//
//    bool isEmpty() const{
//        if(top==-1){
//            return true;
//        } else{
//            return false;
//        }
//    }
//
//    bool isFull(){
//        if(top==4){
//            return true;
//        } else{
//            return false;
//        }
//    }
//
//    void push(int data){
//        if(isFull()){
//            cout<<"Stack is full"<<endl;
//        } else{
//            top++;
//            arr[top]=data;
//        }
//    }
//
//    int pop(){
//        if(isEmpty()){
//            cout<<"Stack is empty, cannot pop"<<endl;
//            return 0;
//        } else{
//            int x=arr[top];
//            arr[top]=0;
//            if(top==0){
//                top=-1;
//            } else{
//                top--;
//            }
//            return x;
//        }
//    }
//
//    int count(){
//        return top+1;
//    }
//
//    int peek(int position){
//        if(isEmpty()){
//            cout<<"Stack is empty, cannot pop"<<endl;
//            return 0;
//        } else{
//            if(position>top) {
//                cout<<"Enter a valid position"<<endl;
//                return -1;
//            } else{
//                return arr[position];
//            }
//        }
//    }
//
//    void change(int pos, int newData){
//        if(isEmpty()){
//            cout<<"Stack is empty, cannot change any value"<<endl;
//        } else{
//            if(pos>top) {
//                cout<<"Enter a valid position"<<endl;
//            }else{
//                arr[pos]=newData;
//                cout<<"Data updated"<<endl;
//            }
//        }
//    }
//
//    void display(){
//        if(isEmpty()){
//            cout<<"Stack is empty, nothing to display"<<endl;
//        } else{
//            cout<<"Displaying data..."<<endl;
//            for(int i=top;i>=0;i--){
//                cout<<arr[i]<<" ";
//            }
//            cout<<endl;
//        }
//    }
//};
//
//int main() {
//    Stack s;
//    int ch,pos1,val1;
//    while(true){
//        cout<<"Enter a choice:"<<endl;
//        cout<<"Press: \n1 isEmpty \n2 isFull \n3 Push \n4 Pop \n5 count \n6 peek \n7 change \n8 Display \n9 To exit"<<endl;
//        cin>>ch;
//        switch (ch) {
//            case 1:
//                if(s.isEmpty()){
//                    cout<<"Stack is empty"<<endl;
//                } else{
//                    cout<<"Stack is not empty"<<endl;
//                }
//                break;
//            case 2:
//               if(s.isFull()){
//                   cout<<"Stack is full"<<endl;
//               } else{
//                   cout<<"Stack is not full"<<endl;
//               }
//                break;
//            case 3:
//                cout<<"Enter data value to push:"<<endl;
//                cin>>val1;
//                s.push(val1);
//                break;
//            case 4:
//                cout<<"Popped element value: "<<s.pop()<<endl;
//                break;
//            case 5:
//                cout<<"Count : "<<s.count()<<endl;
//                break;
//            case 6:
//                cout<<"Enter position:"<<endl;
//                cin>>pos1;
//                cout<<"Value at given position is: "<<s.peek(pos1);
//                break;
//            case 7:
//                cout<<"Enter position:"<<endl;
//                cin>>pos1;
//                cout<<"Enter new data value:"<<endl;
//                cin>>val1;
//                s.change(pos1,val1);
//                break;
//            case 8:
//                s.display();
//                break;
//            case 9:
//                cout<<"Exiting from the application..."<<endl;
//                _Exit(0);
//            default:
//                cout<<"Enter a valid choice"<<endl;
//                break;
//
//        }
//    }
//    return 0;
//}