//#include <iostream>
//using namespace std;
//
//
//int last_index(int a[],int index,int x){
//
//    // base case
//    if(index<0){
//        return -1;
//    }
//
//    // small calculation
//    if(a[index]==x){
//        return index;
//    }
//
//    // recursive call
//    int ans=last_index(a,index-1,x);
//    return ans;
//
////    if(ans==-1){
////        return ans;
////    }else{
////        return ans+1;
////    }
//
//
//
//
//}
//
//int main(){
//    int x;
//    cout<<"Enter no:"<<endl;
//    cin>>x;
//
//    int size;
//    cout<<"Enter size of array:"<<endl;
//    cin>>size;
//
//
//    int a[size];
//    cout<<"Enter elements of array:"<<endl;
//    for (int i = 0; i < size; ++i) {
//        cin>>a[i];
//    }
//
//
//    int INDEX=size-1;
//    if(last_index(a,INDEX,x)==-1){
//        cout<<"not found";
//    }else{
//        cout<<"index is="<<last_index(a,size,x);
//    }
//
//    return 0;
//}