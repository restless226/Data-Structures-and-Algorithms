//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> output;
//
//void all_indices(int a[],int index,int x){
//
//    // base case
//    if(index<0){
//        return;
//    }
//
//    // small calculation
//    if(a[index]==x){
//        output.push_back(index);
////        return index;
//    }
//
//    // recursive call
//    return all_indices(a,index-1,x);
////    return ans;
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
//
//    all_indices(a,size,x);
//
//    if(output.empty()){
//        cout<<"not found";
//    }else{
//        for (auto itr:output) {
//            cout<<itr<<" ";
//        }
//    }
//
//    return 0;
//}