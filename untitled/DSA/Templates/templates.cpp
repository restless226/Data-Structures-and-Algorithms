//// templates are parameterized classes
//// used for generic programming
//// templates make classes
//
//#include <iostream>
//using namespace std;
//
//template <class T>      // T is data type; it can be int, char, double...
//
//class vector{
//public:
//    T *arr;
//    int size;
//
//    vector(int m){
//        size=m;
//        arr=new T(size);
//    }
//
//    T dotProduct(vector &v){
//        T p=0;
//        for(int i=0;i<size;i++){
//            p+= this->arr[i]*v.arr[i];
//        }
//        return p;
//    }
//};
//
//
//
//int main() {
//
//    vector<int> vector1(3);
//    vector1.arr[0]=4;
//    vector1.arr[1]=3;
//    vector1.arr[2]=1;
//
//    vector<int> vector2(3);
//    vector1.arr[0]=1;
//    vector1.arr[1]=0;
//    vector1.arr[2]=1;
//
//    int a=vector1.dotProduct(vector2);
//    cout<<a<<endl;
//
//
//
//    vector<float> vector3(3);
//    vector1.arr[0]=1.4;
//    vector1.arr[1]=3.3;
//    vector1.arr[2]=0.1;
//
//    vector<float> vector4(3);
//    vector1.arr[0]=0.1;
//    vector1.arr[1]=1.90;
//    vector1.arr[2]=4.1;
//
//    float z=vector3.dotProduct(vector4);
//    cout<<z<<endl;
//    return 0;
//}