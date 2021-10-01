//#include <iostream>
//using namespace std;
//
//int main() {
//    //code
//    int T,N,D;
//    int a[N];
//    int b[D];
//    cin>>T;
//    for(int i=0;i<T;i++){
//        cin>>N>>D;
//        for(int j=0;j<N;j++){
//            cin>>a[j];
//        }
//
//        int m=0;
//        for(int k=D;k<N;k++){
//            b[m]=a[k];
//            m++;
//        }
//        m++;
//        for(int l=0;l<D;l++){
//            b[m]=a[l];
//            m++;
//        }
//
//
////        int m=0;
////        for(int k=0;k<D;k++){
////            b[m]=a[k];
////            m++;
////        }
////        for(int x=0;x<N-D;x++){
////            a[x]=a[x+D];
////        }
////        int t=0;
////        for(int y=D+1;y<N;y++){
////            a[y]=b[y];
////            t++;
////        }
//
//
//        for(int p=0;p<N;p++){
//            cout<<a[p]<<" ";
//        }
//
//    }
//    return 0;
//}