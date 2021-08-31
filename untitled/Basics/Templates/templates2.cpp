//#include <iostream>
//
//using namespace std;
//
//// templates with multiple parameters
//
//template <class T1=int , class T2=char >
//
//class myClass{
//public:
//    T1 data1;
//    T2 data2;
//
//    myClass(T1 x, T2 y){
//        data1=x;
//        data2=y;
//    }
//
//    void display(){
//        cout<< this->data1<<endl;
//        cout<<this->data2<<endl;
//    }
//};
//
//int main() {
//    myClass<> obj(10,'r');
//    obj.display();
//    return 0;
//}