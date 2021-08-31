//// C++ program to implement insert operation in array.
//
//#include <iostream>
//
//using namespace std;
//
//void insert(int arr[], int c,int num) {
//
//    // inserting element into array
//    arr[c-1]=num;
//
//    int temp1;
//    //sorting array in ascending order
//    for (int k = 0; k < c; k++) {
//        for (int l = k + 1; l < c; l++) {
//            if (arr[k] > arr[l]) {
//                temp1 = arr[k];
//                arr[k] = arr[l];
//                arr[l] = temp1;
//            }
//        }
//    }
//
//    cout << "Array After Insertion: "<<endl;
//    for (int i = 0; i < c; i++)
//        cout << arr[i] << " ";
//}
//
//int main() {
//
//    int s;
//    cout << "Enter size of array:";
//    cin >> s;
//
//    int a[s+1];
//
//    cout << "Enter elements in array:" << endl;
//    for (int i = 0; i < s; i++) {
//        cin >> a[i];
//    }
//
//    int num;
//    cout<<"Enter integer element you want to insert into array:"<<endl;
//    cin>>num;
//
//    cout << "Array Before Insertion: "<<endl;
//    for (int j = 0; j < s; j++)
//        cout << a[j] << " ";
//
//    // function call
//    insert(a,s+1,num);
//
//    return 0;
//}
