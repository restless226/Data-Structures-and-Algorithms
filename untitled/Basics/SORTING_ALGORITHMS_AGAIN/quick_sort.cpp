//#include <iostream>
//using namespace std;
//
//
//int partition (int arr[], int low, int high)
//{
//    // Your code here
//    int pivot=arr[low];
//    int i=low;
//    int j=high;
//
//    while(i<=j){
//        while(arr[i]<=pivot){
//            i++;
//        }
//
//        while(arr[j]>pivot){
//            j--;
//        }
//
//        if(i<=j){
//            swap(arr[i],arr[j]);
//        }
//    }
//
//    swap(arr[low],arr[j]);
//
//    return j;
//}
//
//
//void quickSort(int arr[], int low, int high)
//{
//    // code here
//    if(low<high){
//        int j=partition(arr,low,high);
//        quickSort(arr,low,j-1);
//        quickSort(arr,j+1,high);
//    }
//}
//
//
//int main(){
//
//    int size;
//    cout << "ENTER SIZE OF ARRAY:" << endl;
//    cin >> size;
//
//    int a[size];
//
//    cout<<"ENTER ELEMENTS IN ARRAY:"<<endl;
//    for (int j = 0; j < size; ++j) {
//        cin >> a[j];
//    }
//
//
//    quickSort(a, 0, size - 1);
//
//
//    cout << "PRINTING SORTED ARRAY:" << endl;
//    for (int j = 0; j < size; ++j) {
//        cout<<a[j]<<" ";
//    }
//
//    return 0;
//}
//
//
//
///*
//OUTPUT:
//
//ENTER SIZE OF ARRAY:
//9
//
//ENTER ELEMENTS IN ARRAY:
//4
//5
//3
//6
//3
//9
//5
//7
//9
//
//PRINTING SORTED ARRAY:
//3 3 4 5 5 6 7 9 9
//
//Process finished with exit code 0
// */