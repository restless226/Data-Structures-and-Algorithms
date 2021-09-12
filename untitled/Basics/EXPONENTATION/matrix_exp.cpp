///*
// * TOPIC - MATRIX EXPONENTIATION
// * O(logN) time complexity
// */
//
//#include <iostream>
//using namespace std;
//
//void multiply(int A[2][2],int M[2][2]){
//    // resultant matrix is 2x2
//    int fv=A[0][0]*M[0][0]+A[0][1]*M[1][0];
//    int sv=A[0][0]*M[0][1]+A[0][1]*M[1][1];
//    int tv=A[1][0]*M[0][0]+A[1][1]*M[1][0];
//    int lv=A[1][0]*M[0][1]+A[1][1]*M[1][1];
//
//    A[0][0]=fv;
//    A[0][1]=sv;
//    A[1][0]=tv;
//    A[1][1]=lv;
//}
//
//
//void power(int A[2][2], int n){
//
//    // base case
//    if(n==0 || n==1){
//        return;
//    }
//
//    // multiplying A*(n/2) with A*(n/2)
//    power(A,n/2);
//
//    multiply(A,A);
//
//    if(n%2!=0){
//        int M[2][2]={{1,1},{1,0}};
//        multiply(A,M);
//    }
//}
//
//int fib(int n){
//    int A[2][2]={{1,1},{1,0}};
//
//    // A**(n-1)[0][0] will give nth fibonacci number f(n)
//    if(n==0){
//        return 0;
//    }
//
//    // we want to compute power(A,n-1);
//    power(A,n-1);
//
//
//    return A[0][0];
//
//}
//
//int main(){
//    int n;
//    cout<<"Enter no:"<<endl;
//    cin>>n;
//    cout<<fib(n)<<endl;
//    return 0;
//}