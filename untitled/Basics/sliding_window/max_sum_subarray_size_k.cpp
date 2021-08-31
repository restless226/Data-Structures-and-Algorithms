//#include <iostream>
//using namespace std;
//
//
//int main(){
//    int n;
//    int k;
//
//    cout<<"Enter array size:"<<'\n';
//    cin>>n;
//
//    cout<<"Enter window size:"<<'\n';
//    cin>>k;
//
//    int a[n];
//
//    cout<<"Enter array elements:"<<'\n';
//    for (int i = 0; i < n; ++i) {
//        cin>>a[i];
//    }
//
//    if(n<k){
//        cout<<"Invalid window size..."<<'\n';
//        _Exit(0);
//    }
//
//    int i=0;    // window back pointer
//    int j=0;    // window front pointer
//    int sum=0;
//    int max_sum=0;
//
//
//    while (j<n){
//        sum+=a[j];
//        if(j-i+1<k){
//            j++;
//        }else if(j-i+1==k){
//            max_sum=max(max_sum,sum);
//            sum-=a[i];
//            i++;
//            j++;
//        }
//
//    }
//
////    if(max_sum<sum){
////        max_sum=sum;
////    }
//    cout<<"max sum is:"<<max_sum<<'\n';
//    return 0;
//}